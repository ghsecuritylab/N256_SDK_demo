#!/bin/bash

set -e
set -o pipefail
###############################################################################
#Variables
SOURCE_DIR=$1
OUTPUT=$2
IC_CONFIG=$3
BOARD_CONFIG=$4
BIN_FILENAME=$5
PROJ_DIR=$6
SECURE_BOOT_EN=$7
ANTI_CLONE_EN=$8
FLASHBIN_NAME=flash.bin
BOOTLOADERMAXSIZE=65536  # 64KB


###############################################################################
#Functions
get_board () {
    i=`pwd | awk -F"/" '{print NF}'`
    while [ $i -gt 0 ]; do
        last_name=$item_name
        item_name=`pwd | awk -F"/" '{print $'$i'}'`
        if [ "$item_name" == "project" ]; then
            BOARD=$last_name
            break
        fi
        let i=i-1
    done
    echo BOARD=$BOARD
    if [ "$BOARD" == "" ]; then
        echo "Error: It cannot find board name"
        exit 1
    fi
}

change_bin_filename () {

    awk \
    '{ \
        if ($0 ~ /\[Section.+\]/) { \
            if ($0 ~ /\[Section2\]/) { \
                sect2=1 \
            } else { \
                sect2=0 \
           } \
        } \
    \
        if (sect2==1 && $0~/Location=/) { \
            print "Location="'\"$2\"' \
        } else { \
            print $0 \
        } \
    }' $1 > $1.tmp

    mv $1.tmp $1

}


change_cfg_bin_filename () {
    sed -i "s|freertos_test.bin|$2|g" $1
    sed -i "s|iot_sdk.bin|$2|g" $1
}


change_begin_end_address_filename () {

    awk \
    '{ \
        if ($0 ~ /\[Section.+\]/) { \
            if ($0 ~ /\[Section2\]/) { \
                sect2=1 \
            } else { \
                sect2=0 \
           } \
        } \
    \
        if (sect2==1 && $0~/BeginAddress=/) { \
            print "BeginAddress="'\"$2\"' \
        } else if (sect2==1 && $0~/EndAddress=/) { \
            print "EndAddress="'\"$3\"' \
        } else { \
            print $0 \
        } \
    }' $1 > $1.tmp

    mv $1.tmp $1
}

# Combine bootloader and CM4 Firmware if it's neccessary
combine_bl_cm4 () {
    echo "Start combining bootloader & CM4 firmware..."
    CM4_FRIMWARE_BIN=$1/$2
    BOOTLOADER_BIN=$1/$3
    FLASHBIN=$1/$4
    echo "CM4_FRIMWARE_BIN = $CM4_FRIMWARE_BIN"
    echo "BOOTLOADER_BIN = $BOOTLOADER_BIN"
    echo "FLASHBIN = $FLASHBIN"
    if [ -f "$FLASHBIN" ]; then
        echo "delete $FLASHBIN"
        rm $FLASHBIN
    fi
    BOOTLOADER_BIN_TMP=$1/`basename $BOOTLOADER_BIN .bin`.tmp
    cp $BOOTLOADER_BIN $BOOTLOADER_BIN_TMP
    BOOTLOADER_BIN_SIZE=`wc --bytes $BOOTLOADER_BIN | cut -d ' ' -f1`
    PADDINGCOUNT=$(($BOOTLOADERMAXSIZE-$BOOTLOADER_BIN_SIZE))
    printf '\377%.0s' $(eval echo "{1..${PADDINGCOUNT}}")  >> $BOOTLOADER_BIN_TMP
    cat $BOOTLOADER_BIN_TMP $CM4_FRIMWARE_BIN > $FLASHBIN
    rm $BOOTLOADER_BIN_TMP
    echo "Done for combining bootloader & CM4 firmware..."
}

change_cfg_nvdm_address_and_length() {
	MM_LAYOUT=`echo $2 | sed "s/GCC/inc/"`/memory_map.h
    NV_HEADER=$3
    NVDM_BASE=`grep "#define ROM_NVDM_BASE" $MM_LAYOUT | awk '{print $3}' | tr -d '\r\n'`
    NVDM_LENG=`grep "ROM_NVDM_LENGTH" $MM_LAYOUT | awk '{print $3}' | tr -d '\r\n'`
    NVDM_BACKUP_LENG=`grep "#define ROM_NVDM_MODEM_BACKUP_LENGTH" $NV_HEADER | awk '{print $3}' | tr -d '\r\n'`
    NVDM_BACKUP_BASE_TMP=$(($NVDM_BASE+$NVDM_LENG-$NVDM_BACKUP_LENG))
    NVDM_BACKUP_BASE=$(printf  "0x%08X" $NVDM_BACKUP_BASE_TMP)

    echo "NVDM_BASE = $NVDM_BASE"
    echo "NVDM_LENG = $NVDM_LENG"
    echo "NVDM_BACKUP_BASE = $NVDM_BACKUP_BASE"
    echo "NVDM_BACKUP_LENG = $NVDM_BACKUP_LENG"

    sed -i -e '/NVDM/{N;s/\(name: NVDM\r\n            begin_address: \)0x083A5000\r/\1'"$NVDM_BASE"'/}' $1
    sed -i -e '/begin_address: '"$NVDM_BASE"'/{N;s/\(length: \)0x00041000/\1'"$NVDM_LENG"'/}' $1
    sed -i -e '/NVDM/{N;s/\(name: NVDM_RETAINED\r\n            begin_address: \)0x083E0000\r/\1'"$NVDM_BACKUP_BASE"'/}' $1
    sed -i -e '/begin_address: '"$NVDM_BACKUP_BASE"'/{N;s/\(length: \)0x00006000/\1'"$NVDM_BACKUP_LENG"'/}' $1
}
###############################################################################
#Begin here
echo `basename $0`"...."
get_board

if [ "$BOARD_CONFIG" == "mt2523_hdk" ]; then
    # copy download config file
    if [ "$MTK_GNSS_ENABLE" == 'y' ]; then
        if [ ! -f "$SOURCE_DIR/prebuilt/middleware/MTK/gnss/firmware/gnss_chip_fw.bin" ]; then
            cp $SOURCE_DIR/tools/config/$BOARD_CONFIG/download/default/flash_download.cfg $OUTPUT/
        else
            cp $SOURCE_DIR/tools/config/$BOARD_CONFIG/download/gnss/flash_download.cfg $OUTPUT/
            cp $SOURCE_DIR/prebuilt/middleware/MTK/gnss/firmware/gnss_chip_fw.bin $OUTPUT/gnss_firmware.bin
        fi
    else
        cp $SOURCE_DIR/tools/config/$BOARD_CONFIG/download/default/flash_download.cfg $OUTPUT/
    fi

    # copy bootloader
    if [ ! -f "${OUTPUT}/${IC_CONFIG}_bootloader.bin" ]; then
        cp $SOURCE_DIR/project/$BOARD_CONFIG/apps/bootloader/GCC/bootloader.bin $OUTPUT/$IC_CONFIG'_bootloader.bin'
        echo "${OUTPUT}/${IC_CONFIG}_bootloader.bin doesn't exist. copy default bootloader done."
    fi
    if [ "$WITH_BOOTLOADER" != "n" ]; then
        combine_bl_cm4 $OUTPUT $BIN_FILENAME ${IC_CONFIG}_bootloader.bin $FLASHBIN_NAME
    fi

elif [ "$BOARD_CONFIG" == "mt2533_evb" ]; then
    # copy download config file
    if [ "$MTK_GNSS_ENABLE" == 'y' ]; then
        cp $SOURCE_DIR/tools/config/$BOARD_CONFIG/download/gnss/flash_download.cfg $OUTPUT/
    else
        cp $SOURCE_DIR/tools/config/$BOARD_CONFIG/download/default/flash_download.cfg $OUTPUT/
    fi

    # copy bootloader
    if [ ! -f "${OUTPUT}/${IC_CONFIG}_bootloader.bin" ]; then
        cp $SOURCE_DIR/project/$BOARD_CONFIG/apps/bootloader/GCC/bootloader.bin $OUTPUT/$IC_CONFIG'_bootloader.bin'
        echo "${OUTPUT}/${IC_CONFIG}_bootloader.bin doesn't exist. copy default bootloader done."
    fi
    if [ "$WITH_BOOTLOADER" != "n" ]; then
        combine_bl_cm4 $OUTPUT $BIN_FILENAME ${IC_CONFIG}_bootloader.bin $FLASHBIN_NAME
    fi
elif [ "$BOARD_CONFIG" == "mt2523s_headset" ]; then
    # copy download config file
    cp $SOURCE_DIR/tools/config/${BOARD_CONFIG}/download/default/flash_download.cfg $OUTPUT/

    # copy bootloader
    if [ ! -f "${OUTPUT}/${IC_CONFIG}_bootloader.bin" ]; then
        cp $SOURCE_DIR/project/${BOARD_CONFIG}/apps/bootloader/GCC/bootloader.bin $OUTPUT/$IC_CONFIG'_bootloader.bin'
        echo "${OUTPUT}/${IC_CONFIG}_bootloader.bin doesn't exist. copy default bootloader done."
    fi
    if [ "$WITH_BOOTLOADER" != "n" ]; then
        combine_bl_cm4 $OUTPUT $BIN_FILENAME ${IC_CONFIG}_bootloader.bin $FLASHBIN_NAME
    fi
elif [ "$BOARD_CONFIG" == "mt7697_hdk" ] || [ "$BOARD_CONFIG" == "linkit7697_hdk" ]; then

    echo "bin filename is ${BIN_FILENAME}"
    if [ "$BIN_FILENAME" == 'iot_sdk_lite.bin' ]; then
        echo "copy 2M flash ini"
        cp $SOURCE_DIR/tools/config/$BOARD_CONFIG/download/flash_download_2M.ini $OUTPUT/flash_download.ini
    else
        cp $SOURCE_DIR/tools/config/$BOARD_CONFIG/download/flash_download.ini $OUTPUT/
    fi
    change_bin_filename $OUTPUT/flash_download.ini $BIN_FILENAME

    LD_FILE_NAME="mt7687_flash.ld"
    if [[ `echo "$BIN_FILENAME" | grep -c  "bootloader"` -gt 0 ]]; then
        LD_FILE_NAME="bootloader.ld"
    fi

    if [ "$MTK_FOTA_DUAL_IMAGE_ENABLE" == "y" ]; then
        if [ "$FOTA_PARTITION_B_BUILD" == "y" ]; then
            LD_FILE_NAME="mt7697_flash_B.ld"
            cp -f $SOURCE_DIR/tools/config/$BOARD_CONFIG/download/fota_dual_image/flash_download_B.ini $OUTPUT/flash_download.ini
            change_bin_filename $OUTPUT/flash_download.ini $BIN_FILENAME
        else
            LD_FILE_NAME="mt7697_flash_A.ld"
            cp -f $SOURCE_DIR/tools/config/$BOARD_CONFIG/download/fota_dual_image/flash_download_A.ini $OUTPUT/flash_download.ini
            change_bin_filename $OUTPUT/flash_download.ini $BIN_FILENAME
        fi
        echo "$LD_FILE_NAME"
    fi

    ORIGIN=`grep "XIP_CODE.*(arx)" "$PROJ_DIR/$LD_FILE_NAME" | cut -d ',' -f1 | cut -d '=' -f2 | tr -d ' '`
    LENGTH=`grep "XIP_CODE.*(arx)" "$PROJ_DIR/$LD_FILE_NAME" | cut -d ',' -f2 | cut -d '/' -f1 | cut -d '=' -f2 | tr -d ' '`
    BEGIN_ADDRESS=`printf "0x%08X" $(($ORIGIN & 0x0FFFFFFF))`
    END_ADDRESS=`printf "0x%08X" $(($BEGIN_ADDRESS + $LENGTH))`
    change_begin_end_address_filename $OUTPUT/flash_download.ini $BEGIN_ADDRESS $END_ADDRESS


    # copy WIFI fiwmware
    cp $SOURCE_DIR/prebuilt/driver/chip/mt7687/wifi_n9/WIFI_RAM_CODE_MT76X7_in_flash.bin $OUTPUT/

    if [ ! -f "${OUTPUT}/${IC_CONFIG}_bootloader.bin" ]; then
        cp $SOURCE_DIR/project/$BOARD_CONFIG/apps/bootloader/GCC/bootloader.bin $OUTPUT/$IC_CONFIG'_bootloader.bin'
        echo "${OUTPUT}/${IC_CONFIG}_bootloader.bin doesn't exist. copy default bootloader done."
    fi


elif [ "$BOARD_CONFIG" == "mt7687_hdk" ]; then
    # copy download config file
    cp $SOURCE_DIR/tools/config/$BOARD_CONFIG/download/flash_download.ini $OUTPUT/
    change_bin_filename $OUTPUT/flash_download.ini $BIN_FILENAME

    LD_FILE_NAME="mt7687_flash.ld"
    if [[ `echo "$BIN_FILENAME" | grep -c  "bootloader"` -gt 0 ]]; then
        LD_FILE_NAME="bootloader.ld"
    fi

    if [ "$MTK_FOTA_DUAL_IMAGE_ENABLE" == "y" ]; then
        if [ "$FOTA_PARTITION_B_BUILD" == "y" ]; then
            LD_FILE_NAME="mt7687_flash_B.ld"
            cp -f $SOURCE_DIR/tools/config/$BOARD_CONFIG/download/fota_dual_image/flash_download_B.ini $OUTPUT/flash_download.ini
            change_bin_filename $OUTPUT/flash_download.ini $BIN_FILENAME
        else
            LD_FILE_NAME="mt7687_flash_A.ld"
            cp -f $SOURCE_DIR/tools/config/$BOARD_CONFIG/download/fota_dual_image/flash_download_A.ini $OUTPUT/flash_download.ini
            change_bin_filename $OUTPUT/flash_download.ini $BIN_FILENAME
        fi
        echo "$LD_FILE_NAME"
    fi


    ORIGIN=`grep "XIP_CODE.*(arx)" "$PROJ_DIR/$LD_FILE_NAME" | cut -d ',' -f1 | cut -d '=' -f2 | tr -d ' '`
    LENGTH=`grep "XIP_CODE.*(arx)" "$PROJ_DIR/$LD_FILE_NAME" | cut -d ',' -f2 | cut -d '/' -f1 | cut -d '=' -f2 | tr -d ' '`
    BEGIN_ADDRESS=`printf "0x%08X" $(($ORIGIN & 0x0FFFFFFF))`
    END_ADDRESS=`printf "0x%08X" $(($BEGIN_ADDRESS + $LENGTH))`
    change_begin_end_address_filename $OUTPUT/flash_download.ini $BEGIN_ADDRESS $END_ADDRESS

    # copy WIFI fiwmware
    cp $SOURCE_DIR/prebuilt/driver/chip/mt7687/wifi_n9/WIFI_RAM_CODE_MT76X7_in_flash.bin $OUTPUT/

    # copy bootloader
    if [ ! -f "${OUTPUT}/${IC_CONFIG}_bootloader.bin" ]; then
        cp $SOURCE_DIR/project/$BOARD_CONFIG/apps/bootloader/GCC/bootloader.bin $OUTPUT/$IC_CONFIG'_bootloader.bin'
        echo "${OUTPUT}/${IC_CONFIG}_bootloader.bin doesn't exist. copy default bootloader done."
    fi
elif [ "$BOARD_CONFIG" == "mt7686_hdk" ] || [ "$BOARD_CONFIG" == "mt7682_hdk" ] || [ "$BOARD_CONFIG" == "mt5932_hdk" ]; then
    # copy prebuilt files
    cp -f $SOURCE_DIR/prebuilt/driver/chip/mt7686/mt768x_default_PerRate_TxPwr.bin $OUTPUT/
    # copy download config file
    cp $SOURCE_DIR/tools/config/$BOARD_CONFIG/download/default/flash_download.cfg $OUTPUT/
    # change binary filename in flash configuration
    change_cfg_bin_filename $OUTPUT/flash_download.cfg $BIN_FILENAME

    # copy bootloader
    if [ ! -f "${OUTPUT}/${IC_CONFIG}_bootloader.bin" ]; then
        cp $SOURCE_DIR/project/$BOARD_CONFIG/apps/bootloader/GCC/bootloader.bin $OUTPUT/$IC_CONFIG'_bootloader.bin'
        echo "${OUTPUT}/${IC_CONFIG}_bootloader.bin doesn't exist. copy default bootloader done."
    fi

elif [ "$BOARD_CONFIG" == "mt2625_evb" ]; then
    # copy bootloader
    if [ ! -f "${OUTPUT}/${IC_CONFIG}_bootloader.bin" ]; then
        cp $SOURCE_DIR/project/$BOARD_CONFIG/apps/bootloader/GCC/$IC_CONFIG'_bootloader.bin' $OUTPUT/$IC_CONFIG'_bootloader.bin'
        echo "${OUTPUT}/${IC_CONFIG}_bootloader.bin doesn't exist. copy default bootloader done."
    fi
    if [ "$MTK_GNSS_ENABLE" == 'y' ]; then
        if [ ! -f "$SOURCE_DIR/prebuilt/middleware/MTK/gnss/firmware/gnss_chip_fw.bin" ]; then
            cp $SOURCE_DIR/tools/config/$BOARD/download/default/flash_download.cfg $OUTPUT/
        else
            cp $SOURCE_DIR/tools/config/$BOARD/download/gnss/flash_download.cfg $OUTPUT/
            cp $SOURCE_DIR/prebuilt/middleware/MTK/gnss/firmware/gnss_chip_fw.bin $OUTPUT/gnss_firmware.bin
        fi
    else
        cp $SOURCE_DIR/tools/config/$BOARD/download/default/flash_download.cfg $OUTPUT/
    fi
    if [ "$MTK_WIFI_ENABLE" == 'y' ]; then
        if [  -f "$SOURCE_DIR/prebuilt/driver/chip/mt5932/wifi_image/mt5932_image_spi.bin" ]; then
            cp $SOURCE_DIR/tools/config/$BOARD/download/wifi/flash_download.cfg $OUTPUT/
            cp $SOURCE_DIR/prebuilt/driver/chip/mt5932/wifi_image/mt5932_image_spi.bin $OUTPUT/wifi_firmware.bin
        fi
    fi
    if [ "$SECURE_BOOT_EN" == "y" ]; then
        python $SOURCE_DIR/tools/scripts/build/append_cfg_bin.py $OUTPUT/flash_download.cfg $SOURCE_DIR/tools/config/$BOARD/download/default/flash_download_secure_boot.cfg $OUTPUT/flash_download_sboot.cfg
        cp -f $OUTPUT/flash_download_sboot.cfg $OUTPUT/flash_download.cfg
        rm -f $OUTPUT/flash_download_sboot.cfg 
    elif [ "$ANTI_CLONE_EN" == "y" ]; then
        python $SOURCE_DIR/tools/scripts/build/append_cfg_bin.py $OUTPUT/flash_download.cfg $SOURCE_DIR/tools/config/$BOARD/download/default/flash_download_acc.cfg $OUTPUT/flash_download_sboot.cfg
        cp -f $OUTPUT/flash_download_sboot.cfg $OUTPUT/flash_download.cfg
        rm -f $OUTPUT/flash_download_sboot.cfg 
    fi
    change_cfg_bin_filename $OUTPUT/flash_download.cfg $BIN_FILENAME
    change_cfg_nvdm_address_and_length $OUTPUT/flash_download.cfg $PROJ_DIR $SOURCE_DIR/middleware/MTK/nvdm_modem/inc_core/nvdm_modem_port.h
fi

# merge external dsp bin
if [ "$IC_CONFIG" == "mt2533" ]; then
    if [[ `echo "$BIN_FILENAME" | grep -c  "bootloader"` -eq 0 ]]; then
        # use test bin file
        if [ "$MTK_BUILD_SMT_LOAD" == "y" ]; then
            echo "$SOURCE_DIR/driver/board/component/external_dsp/config_test/merge.sh external_dsp.bin $OUTPUT"
            ./$SOURCE_DIR/driver/board/component/external_dsp/config_test/merge.sh external_dsp.bin $OUTPUT
        elif [ "$MTK_AUTOMOTIVE_SUPPORT" == "y" ]; then
            echo "$SOURCE_DIR/driver/board/component/external_dsp/config_auto/merge.sh external_dsp.bin $OUTPUT"
            ./$SOURCE_DIR/driver/board/component/external_dsp/config_auto/merge.sh external_dsp.bin $OUTPUT
        elif [ "$MTK_NDVC_ENABLE" == "y" ]; then
            echo "$SOURCE_DIR/driver/board/component/external_dsp/config_ndvc/merge.sh external_dsp.bin $OUTPUT"
            ./$SOURCE_DIR/driver/board/component/external_dsp/config_ndvc/merge.sh external_dsp.bin $OUTPUT
        else
            echo "$SOURCE_DIR/driver/board/component/external_dsp/config/merge.sh external_dsp.bin $OUTPUT"
            ./$SOURCE_DIR/driver/board/component/external_dsp/config/merge.sh external_dsp.bin $OUTPUT
        fi
    fi
fi

# copy .cmm file
for i in $PROJ_DIR/*.cmm ; do
        [ -e "$i" ] || continue
        echo "cp $i to ${OUTPUT}/"
        cp -f $i ${OUTPUT}/
done

exit 0
