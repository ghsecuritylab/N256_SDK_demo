/* Copyright Statement:
 *
 * (C) 2005-2017  MediaTek Inc. All rights reserved.
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. ("MediaTek") and/or its licensors.
 * Without the prior written permission of MediaTek and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 * You may only use, reproduce, modify, or distribute (as applicable) MediaTek Software
 * if you have agreed to and been bound by the applicable license agreement with
 * MediaTek ("License Agreement") and been granted explicit permission to do so within
 * the License Agreement ("Permitted User").  If you are not a Permitted User,
 * please cease any access or use of MediaTek Software immediately.
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT MEDIATEK SOFTWARE RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES
 * ARE PROVIDED TO RECEIVER ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 */

#ifndef __APB_PROXY_CMD_DEF__H__
#define __APB_PROXY_CMD_DEF__H__

/*************************************************************************************************
*                             MT2625 Customed Command                                            *
**************************************************************************************************/
#ifdef MTK_GNSS_ENABLE
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+EGPST",        gnss_test_at_handler)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+EGPSEPOE",     gnss_epo_erase_at_handler)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+EGPSEPOS",     gnss_epo_set_time_at_handler)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+EGPSLOC",      gnss_loc_set_at_handler)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+AGPSEPO",      gnss_agps_at_handler)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+AGPSNTP",      gnss_agps_at_handler)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+AGPSSLP",      gnss_agps_at_handler)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+AGPST",        gnss_agps_at_handler)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+AGPSA",        gnss_agps_at_handler)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+EGPSC_DEMO",   gnss_gps_at_handler)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+EGPSS_DEMO",   gnss_gps_at_handler)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+POWERGPS",     gnss_agps_at_handler)
#endif



/**
 * format: AT+ONENETCLI=<op>
 * op: 1 start, 0 stop
 * urc: when op is 0, the result will be returned by +ONENETCLI: <op>,<result>
 * notice: string param should be wrapped by "".
 *            if want to set a omitted param, please pass oint,  ostr.
 *            oint means omitted int,  ostr means omitted string
 * example: AT+RILUTS=+CMGS,0,14,"hello, world!"
 */
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+ONENETCLI",          apb_proxy_hdlr_onenet_client_cmd)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+M2MCLINEW",          apb_proxy_hdlr_lwm2m_client_create_cmd)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+M2MCLIDEL",          apb_proxy_hdlr_lwm2m_client_delete_cmd)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+M2MCLISEND",         apb_proxy_hdlr_lwm2m_client_send_cmd)

#ifdef ADUPS_FOTA_ENABLE_CT
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+ABUPSEND",         abup_apb_proxy_hdlr_lwm2m_client_send_cmd)
#endif

#ifdef MTK_N301_PRJ_NAME
//xufushuai.add
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+GPSGETLOCATION",         apb_proxy_hdlr_device_gps_cmd)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+GPSSTATE",         apb_proxy_hdlr_device_gps_state_cmd)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+GPSTEST",         apb_proxy_hdlr_device_gpstest_cmd)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+GPSCHKCN",		 apb_proxy_hdlr_device_gpscheckcn_cmd)
#endif

AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+VBAT",         apb_proxy_hdlr_get_vbat_cmd)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+SENDCNT",		  apb_proxy_hdlr_sendcnt_cmd)

//tangfeng.add
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+LSOCCHARMODE",         apb_proxy_hdlr_socket_charmode_cmd)
AT_CMD_HDLR_ITEM_ENTRY_DEF("AT+STOPATLOCK",		  apb_proxy_hdlr_StopATLock_cmd)


#endif/* __APB_PROXY_CMD_DEF__H__ */
