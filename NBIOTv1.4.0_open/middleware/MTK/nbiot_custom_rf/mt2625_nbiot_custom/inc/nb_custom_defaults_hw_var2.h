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
/*
*******************************************************************************/
#ifndef NB_CUSTOM_DEFAULTS_HW_VAR2_H
#define NB_CUSTOM_DEFAULTS_HW_VAR2_H

#include "nb_custom_rffe.h"
/* ========================================================================= */
/*   Transmit power Maximum Power Reduction (MPR) DEFAULTS                   */
/* ========================================================================= */
/* Default MPR value per band */
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_1   (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_2   (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_3   (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_4   (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_5   (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_8   (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_11  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_12  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_13  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_14  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_17  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_18  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_19  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_20  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_21  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_25  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_26  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_28  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_31  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_66  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_70  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_71  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_72  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_73  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_74  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)
#define NB_CAL_DATA_HW_VAR2_TX_MPR_DEFAULT_BAND_85  (int16_t)(0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)

/* ========================================================================= */
/*   Power Amplifier Bias/Control data                                       */
/* ========================================================================= */
/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 1   */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_1       (((uint8_t)0x2) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_1       ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_1   (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_1   ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_1       (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_1       ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_1  (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_1  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_1      (((uint8_t)0x4) << 4 | ((uint8_t)0xA))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_1      ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_1  (((uint8_t)0x4) << 4 | ((uint8_t)0xA))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_1  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_1   (((uint8_t)0x4) << 4 | ((uint8_t)0x9))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_1   ((uint8_t)0x8A)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_1  (((uint8_t)0x4) << 4 | ((uint8_t)0x9))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_1  ((uint8_t)0x8A)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_1  (((uint8_t)0x4) << 4 | ((uint8_t)0x9))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_1  ((uint8_t)0x8A)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_1   (((uint8_t)0x4) << 4 | ((uint8_t)0xA))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_1   ((uint8_t)0x80)


/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 2   */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_2       (((uint8_t)0x2) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_2       ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_2   (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_2   ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_2       (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_2       ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_2  (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_2  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_2      (((uint8_t)0x4) << 4 | ((uint8_t)0x9))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_2      ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_2  (((uint8_t)0x4) << 4 | ((uint8_t)0x9))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_2  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_2   (((uint8_t)0x4) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_2   ((uint8_t)0x8A)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_2  (((uint8_t)0x4) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_2  ((uint8_t)0x8A)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_2  (((uint8_t)0x4) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_2  ((uint8_t)0x8A)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_2   (((uint8_t)0x4) << 4 | ((uint8_t)0x9))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_2   ((uint8_t)0x80)

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 3   */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_3       (((uint8_t)0x2) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_3       ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_3   (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_3   ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_3       (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_3       ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_3  (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_3  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_3      (((uint8_t)0x9) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_3      ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_3  (((uint8_t)0x9) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_3  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_3   (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_3   ((uint8_t)0x8A)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_3  (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_3  ((uint8_t)0x8A)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_3  (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_3  ((uint8_t)0x8A)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_3   (((uint8_t)0x9) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_3   ((uint8_t)0x80)

/* ========================================================================= */
/*   Power Amplifier Bias/Control data                                       */
/* ========================================================================= */
/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 4   */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_4       (((uint8_t)0x2) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_4       ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_4   (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_4   ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_4       (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_4       ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_4  (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_4  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_4      (((uint8_t)0x4) << 4 | ((uint8_t)0xA))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_4      ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_4  (((uint8_t)0x4) << 4 | ((uint8_t)0xA))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_4  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_4   (((uint8_t)0x4) << 4 | ((uint8_t)0x9))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_4   ((uint8_t)0x8A)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_4  (((uint8_t)0x4) << 4 | ((uint8_t)0x9))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_4  ((uint8_t)0x8A)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_4  (((uint8_t)0x4) << 4 | ((uint8_t)0x9))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_4  ((uint8_t)0x8A)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_4   (((uint8_t)0x4) << 4 | ((uint8_t)0xA))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_4   ((uint8_t)0x80)

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 5   */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_5       (((uint8_t)0x5) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_5       ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_5   (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_5   ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_5       (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_5       ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_5  (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_5  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_5      (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_5      ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_5  (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_5  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_5   (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_5   ((uint8_t)0x89)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_5  (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_5  ((uint8_t)0x89)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_5  (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_5  ((uint8_t)0x89)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_5   (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_5   ((uint8_t)0x80)

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 8   */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_8       (((uint8_t)0x5) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_8       ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_8   (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_8   ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_8       (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_8       ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_8  (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_8  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_8      (((uint8_t)0x3) << 4 | ((uint8_t)0xA))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_8      ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_8  (((uint8_t)0x3) << 4 | ((uint8_t)0xA))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_8  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_8   (((uint8_t)0x4) << 4 | ((uint8_t)0x9))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_8   ((uint8_t)0x8B)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_8  (((uint8_t)0x4) << 4 | ((uint8_t)0x9))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_8  ((uint8_t)0x8B)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_8  (((uint8_t)0x4) << 4 | ((uint8_t)0x9))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_8  ((uint8_t)0x8B)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_8   (((uint8_t)0x3) << 4 | ((uint8_t)0xA))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_8   ((uint8_t)0x80)

/* PA Bias data values for each gain modes of GPIO/BPI controlled PA in Band 11 */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_LOW_DEFAULT_BAND_11      ((uint8_t)0x3) /* VMODE0 (BPI1) = High, VMODE1 (BPI2) =  High */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_LOW_DEFAULT_BAND_11      ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_LOW_DEFAULT_BAND_11  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_LOW_DEFAULT_BAND_11  ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_DEFAULT_BAND_11      ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_DEFAULT_BAND_11      ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_HIGH_DEFAULT_BAND_11 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_HIGH_DEFAULT_BAND_11 ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_HIGH_DEFAULT_BAND_11     ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_HIGH_DEFAULT_BAND_11     ((uint8_t)0x0) /* Unused */

/* PA Bias data values for each UL BW modes of GPIO/BPI controlled PA in Band 11 */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_12T_DEFAULT_BAND_11 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_12T_DEFAULT_BAND_11 ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_6T_DEFAULT_BAND_11  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_6T_DEFAULT_BAND_11  ((uint8_t)0x0) /* Unused */
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_3TB_DEFAULT_BAND_11 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_3TB_DEFAULT_BAND_11 ((uint8_t)0x0) /* Unused */
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_3TC_DEFAULT_BAND_11 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_3TC_DEFAULT_BAND_11 ((uint8_t)0x0) /* Unused */
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_1T_DEFAULT_BAND_11  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_1T_DEFAULT_BAND_11  ((uint8_t)0x0) /* Unused */

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 12  */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_12      (((uint8_t)0x5) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_12      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_12  (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_12  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_12      (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_12      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_12 (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_12 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_12     (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_12     ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_12 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_12 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_12  (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_12  ((uint8_t)0x89)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_12 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_12 ((uint8_t)0x89)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_12 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_12 ((uint8_t)0x89)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_12  (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_12  ((uint8_t)0x80)

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 13  */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_13      (((uint8_t)0x5) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_13      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_13  (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_13  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_13      (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_13      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_13 (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_13 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_13     (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_13     ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_13 (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_13 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_13  (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_13  ((uint8_t)0x89)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_13 (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_13 ((uint8_t)0x89)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_13 (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_13 ((uint8_t)0x89)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_13  (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_13  ((uint8_t)0x80)

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 14  */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_14      (((uint8_t)0x5) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_14      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_14  (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_14  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_14      (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_14      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_14 (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_14 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_14     (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_14     ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_14 (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_14 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_14  (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_14  ((uint8_t)0x89)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_14 (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_14 ((uint8_t)0x89)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_14 (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_14 ((uint8_t)0x89)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_14  (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_14  ((uint8_t)0x80)

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 17  */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_17      (((uint8_t)0x5) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_17      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_17  (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_17  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_17      (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_17      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_17 (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_17 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_17     (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_17     ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_17 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_17 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_17  (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_17  ((uint8_t)0x89)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_17 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_17 ((uint8_t)0x89)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_17 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_17 ((uint8_t)0x89)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_17  (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_17  ((uint8_t)0x80)

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 18  */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_18      (((uint8_t)0x5) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_18      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_18  (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_18  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_18      (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_18      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_18 (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_18 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_18     (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_18     ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_18 (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_18 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_18  (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_18  ((uint8_t)0x89)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_18 (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_18 ((uint8_t)0x89)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_18 (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_18 ((uint8_t)0x89)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_18  (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_18  ((uint8_t)0x80)

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 19  */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_19      (((uint8_t)0x5) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_19      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_19  (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_19  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_19      (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_19      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_19 (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_19 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_19     (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_19     ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_19 (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_19 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_19  (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_19  ((uint8_t)0x89)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_19 (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_19 ((uint8_t)0x89)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_19 (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_19 ((uint8_t)0x89)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_19  (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_19  ((uint8_t)0x80)

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 20  */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_20      (((uint8_t)0x5) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_20      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_20  (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_20  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_20      (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_20      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_20 (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_20 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_20     (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_20     ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_20 (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_20 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_20  (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_20  ((uint8_t)0x89)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_20 (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_20 ((uint8_t)0x89)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_20 (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_20 ((uint8_t)0x89)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_20  (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_20  ((uint8_t)0x80)

/* PA Bias data values for each gain modes of GPIO/BPI controlled PA in Band 21 */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_LOW_DEFAULT_BAND_21      ((uint8_t)0x3) /* VMODE0 (BPI1) = High, VMODE1 (BPI2) =  High */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_LOW_DEFAULT_BAND_21      ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_LOW_DEFAULT_BAND_21  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_LOW_DEFAULT_BAND_21  ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_DEFAULT_BAND_21      ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_DEFAULT_BAND_21      ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_HIGH_DEFAULT_BAND_21 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_HIGH_DEFAULT_BAND_21 ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_HIGH_DEFAULT_BAND_21     ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_HIGH_DEFAULT_BAND_21     ((uint8_t)0x0) /* Unused */

/* PA Bias data values for each UL BW modes of GPIO/BPI controlled PA in Band 11 */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_12T_DEFAULT_BAND_21 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_12T_DEFAULT_BAND_21 ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_6T_DEFAULT_BAND_21  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_6T_DEFAULT_BAND_21  ((uint8_t)0x0) /* Unused */
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_3TB_DEFAULT_BAND_21 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_3TB_DEFAULT_BAND_21 ((uint8_t)0x0) /* Unused */
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_3TC_DEFAULT_BAND_21 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_3TC_DEFAULT_BAND_21 ((uint8_t)0x0) /* Unused */
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_1T_DEFAULT_BAND_21  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_1T_DEFAULT_BAND_21  ((uint8_t)0x0) /* Unused */

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 25  */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_25      (((uint8_t)0x2) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_25      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_25  (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_25  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_25      (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_25      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_25 (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_25 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_25     (((uint8_t)0x4) << 4 | ((uint8_t)0x9))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_25     ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_25 (((uint8_t)0x4) << 4 | ((uint8_t)0x9))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_25 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_25  (((uint8_t)0x4) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_25  ((uint8_t)0x8A)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_25 (((uint8_t)0x4) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_25 ((uint8_t)0x8A)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_25 (((uint8_t)0x4) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_25 ((uint8_t)0x8A)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_25  (((uint8_t)0x4) << 4 | ((uint8_t)0x9))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_25  ((uint8_t)0x80)

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 26  */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_26      (((uint8_t)0x5) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_26      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_26  (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_26  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_26      (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_26      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_26 (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_26 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_26     (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_26     ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_26 (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_26 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_26  (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_26  ((uint8_t)0x89)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_26 (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_26 ((uint8_t)0x89)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_26 (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_26 ((uint8_t)0x89)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_26  (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_26  ((uint8_t)0x80)

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 28  */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_28      (((uint8_t)0x5) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_28      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_28  (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_28  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_28      (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_28      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_28 (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_28 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_28     (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_28     ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_28 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_28 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_28  (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_28  ((uint8_t)0x89)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_28 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_28 ((uint8_t)0x89)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_28 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_28 ((uint8_t)0x89)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_28  (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_28  ((uint8_t)0x80)

/* PA Bias data values for each gain modes of GPIO/BPI controlled PA in Band 31 */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_LOW_DEFAULT_BAND_31      ((uint8_t)0x3) /* VMODE0 (BPI1) = High, VMODE1 (BPI2) =  High */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_LOW_DEFAULT_BAND_31      ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_LOW_DEFAULT_BAND_31  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_LOW_DEFAULT_BAND_31  ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_DEFAULT_BAND_31      ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_DEFAULT_BAND_31      ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_HIGH_DEFAULT_BAND_31 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_HIGH_DEFAULT_BAND_31 ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_HIGH_DEFAULT_BAND_31     ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_HIGH_DEFAULT_BAND_31     ((uint8_t)0x0) /* Unused */

/* PA Bias data values for each UL BW modes of GPIO/BPI controlled PA in Band 31 */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_12T_DEFAULT_BAND_31 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_12T_DEFAULT_BAND_31 ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_6T_DEFAULT_BAND_31  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_6T_DEFAULT_BAND_31  ((uint8_t)0x0) /* Unused */
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_3TB_DEFAULT_BAND_31 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_3TB_DEFAULT_BAND_31 ((uint8_t)0x0) /* Unused */
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_3TC_DEFAULT_BAND_31 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_3TC_DEFAULT_BAND_31 ((uint8_t)0x0) /* Unused */
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_1T_DEFAULT_BAND_31  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_1T_DEFAULT_BAND_31  ((uint8_t)0x0) /* Unused */

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 66  */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_66      (((uint8_t)0x2) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_66      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_66  (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_66  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_66      (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_66      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_66 (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_66 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_66     (((uint8_t)0x9) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_66     ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_66 (((uint8_t)0x9) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_66 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_66  (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_66  ((uint8_t)0x8A)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_66 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_66 ((uint8_t)0x8A)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_66 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_66 ((uint8_t)0x8A)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_66  (((uint8_t)0x9) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_66  ((uint8_t)0x80)

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 70  */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_70      (((uint8_t)0x2) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_70      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_70  (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_70  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_70      (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_70      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_70 (((uint8_t)0xA) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_70 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_70     (((uint8_t)0x9) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_70     ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_70 (((uint8_t)0x9) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_70 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_70  (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_70  ((uint8_t)0x8A)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_70 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_70 ((uint8_t)0x8A)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_70 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_70 ((uint8_t)0x8A)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_70  (((uint8_t)0x9) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_70  ((uint8_t)0x80)

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 71   */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_71       (((uint8_t)0x5) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_71       ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_71   (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_71   ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_71       (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_71       ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_71  (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_71  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_71      (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_71      ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_71  (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_71  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_71   (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_71   ((uint8_t)0x89)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_71  (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_71  ((uint8_t)0x89)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_71  (((uint8_t)0x4) << 4 | ((uint8_t)0x6))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_71  ((uint8_t)0x89)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_71   (((uint8_t)0x3) << 4 | ((uint8_t)0x7))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_71   ((uint8_t)0x80)

/* PA Bias data values for each gain modes of GPIO/BPI controlled PA in Band 72 */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_LOW_DEFAULT_BAND_72      ((uint8_t)0x3) /* VMODE0 (BPI1) = High, VMODE1 (BPI2) =  High */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_LOW_DEFAULT_BAND_72      ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_LOW_DEFAULT_BAND_72  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_LOW_DEFAULT_BAND_72  ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_DEFAULT_BAND_72      ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_DEFAULT_BAND_72      ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_HIGH_DEFAULT_BAND_72 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_HIGH_DEFAULT_BAND_72 ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_HIGH_DEFAULT_BAND_72     ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_HIGH_DEFAULT_BAND_72     ((uint8_t)0x0) /* Unused */

/* PA Bias data values for each UL BW modes of GPIO/BPI controlled PA in Band 72 */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_12T_DEFAULT_BAND_72 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_12T_DEFAULT_BAND_72 ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_6T_DEFAULT_BAND_72  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_6T_DEFAULT_BAND_72  ((uint8_t)0x0) /* Unused */
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_3TB_DEFAULT_BAND_72 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_3TB_DEFAULT_BAND_72 ((uint8_t)0x0) /* Unused */
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_3TC_DEFAULT_BAND_72 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_3TC_DEFAULT_BAND_72 ((uint8_t)0x0) /* Unused */
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_1T_DEFAULT_BAND_72  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_1T_DEFAULT_BAND_72  ((uint8_t)0x0) /* Unused */

/* PA Bias data values for each gain modes of GPIO/BPI controlled PA in Band 73 */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_LOW_DEFAULT_BAND_73      ((uint8_t)0x3) /* VMODE0 (BPI1) = High, VMODE1 (BPI2) =  High */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_LOW_DEFAULT_BAND_73      ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_LOW_DEFAULT_BAND_73  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_LOW_DEFAULT_BAND_73  ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_DEFAULT_BAND_73      ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_DEFAULT_BAND_73      ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_HIGH_DEFAULT_BAND_73 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_HIGH_DEFAULT_BAND_73 ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_HIGH_DEFAULT_BAND_73     ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_HIGH_DEFAULT_BAND_73     ((uint8_t)0x0) /* Unused */

/* PA Bias data values for each UL BW modes of GPIO/BPI controlled PA in Band 72 */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_12T_DEFAULT_BAND_73 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_12T_DEFAULT_BAND_73 ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_6T_DEFAULT_BAND_73  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_6T_DEFAULT_BAND_73  ((uint8_t)0x0) /* Unused */
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_3TB_DEFAULT_BAND_73 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_3TB_DEFAULT_BAND_73 ((uint8_t)0x0) /* Unused */
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_3TC_DEFAULT_BAND_73 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_3TC_DEFAULT_BAND_73 ((uint8_t)0x0) /* Unused */
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_1T_DEFAULT_BAND_73  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_1T_DEFAULT_BAND_73  ((uint8_t)0x0) /* Unused */

/* PA Bias data values for each gain modes of GPIO/BPI controlled PA in Band 74 */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_LOW_DEFAULT_BAND_74      ((uint8_t)0x3) /* VMODE0 (BPI1) = High, VMODE1 (BPI2) =  High */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_LOW_DEFAULT_BAND_74      ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_LOW_DEFAULT_BAND_74  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_LOW_DEFAULT_BAND_74  ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_DEFAULT_BAND_74      ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_DEFAULT_BAND_74      ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MID_HIGH_DEFAULT_BAND_74 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MID_HIGH_DEFAULT_BAND_74 ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_HIGH_DEFAULT_BAND_74     ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_HIGH_DEFAULT_BAND_74     ((uint8_t)0x0) /* Unused */

/* PA Bias data values for each UL BW modes of GPIO/BPI controlled PA in Band 74 */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_12T_DEFAULT_BAND_74 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_12T_DEFAULT_BAND_74 ((uint8_t)0x0) /* Unused */

#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_6T_DEFAULT_BAND_74  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_6T_DEFAULT_BAND_74  ((uint8_t)0x0) /* Unused */
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_3TB_DEFAULT_BAND_74 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_3TB_DEFAULT_BAND_74 ((uint8_t)0x0) /* Unused */
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_3TC_DEFAULT_BAND_74 ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_3TC_DEFAULT_BAND_74 ((uint8_t)0x0) /* Unused */
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA1_MAX_PWR_1T_DEFAULT_BAND_74  ((uint8_t)0x0) /* VMODE0 (BPI1) = Low, VMODE1 (BPI2) =  Low */
#define NB_CAL_DATA_HW_VAR2_PA_BIAS_GPIO_DATA2_MAX_PWR_1T_DEFAULT_BAND_74  ((uint8_t)0x0) /* Unused */

/* PA Bias data values for each gain modes of RFFE controlled PA in BAND 85  */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_LOW_DEFAULT_BAND_85      (((uint8_t)0x5) << 4 | ((uint8_t)0x2))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_LOW_DEFAULT_BAND_85      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_85  (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_85  ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_DEFAULT_BAND_85      (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_DEFAULT_BAND_85      ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_85 (((uint8_t)0x5) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_85 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_85     (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_85     ((uint8_t)0x80)

/* PA Bias data values at maximum transmit power per UL BW configuration    */
/* Following is the format for Skyworks 68001/68018 FEM.                     */
/* (((uint8_t)"BIAS3[7:4]/FINAL BIAS") << 4 | ((uint8_t)"BIAS3[3:0]/DRIVER BIAS")) */
/* ((uint8_t)"BIAS3[3:0]/BOOST BIAS")                                              */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_85 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_85 ((uint8_t)0x80)

#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_85  (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_85  ((uint8_t)0x89)
/* 3 Tone UL at offset 0 and 9 (spectral boundaries) */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_85 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_85 ((uint8_t)0x89)
/* 3 Tone UL at offset 3 and 6. (centre of spectrum) */ 
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_85 (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_85 ((uint8_t)0x89)
/* 1 Tone UL with 15KHz or 3.75KHz BW or unmodulated single tone for calibration */
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_85  (((uint8_t)0x6) << 4 | ((uint8_t)0x5))
#define NB_CAL_DATA_HW_VAR2_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_85  ((uint8_t)0x80)

/* ========================================================================= */
/*   Tx TPC Algorithm bypass Control data                                    */
/* ========================================================================= */
#define NB_CAL_DATA_HW_VAR2_TX_TPC_FREEZE_MODE_DISABLED           (0) /* 0 - Disable, 1 - Enable */
#define NB_CAL_DATA_HW_VAR2_TX_TPC_CTRL_BAND_DEFAULT              (1) /* 3GPP band number */
/* Available options are 
  NB_CAL_TX_PA_GAIN_HIGH      = 0,
  NB_CAL_TX_PA_GAIN_MID_HIGH  = 1,
  NB_CAL_TX_PA_GAIN_MID       = 2,
  NB_CAL_TX_PA_GAIN_MID_LOW   = 3,
  NB_CAL_TX_PA_GAIN_LOW       = 4, */
#define NB_CAL_DATA_HW_VAR2_TX_TPC_CTRL_PA_STAGE_DEFAULT          (NB_CAL_TX_PA_GAIN_HIGH)
#define NB_CAL_DATA_HW_VAR2_TX_TPC_CTRL_PGA_STAGE_DEFAULT         (2) /* Possible values 0 - 14 */
/* GTPC backoff needs to be specified in dB in S7.8 format */
#define NB_CAL_DATA_HW_VAR2_TX_TPC_CTRL_GTPC_BACKOFF_DEFAULT      (0 * NB_CUSTOM_Q8_FIXEDPOINT_MULT)

#endif /* NB_CUSTOM_DEFAULTS_HW_VAR2_H */
/* end of file */
