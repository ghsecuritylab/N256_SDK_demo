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
 **************************************************************************/
/** @file
 * This file defines the priorities for all tasks throughout the system.
 * The KiTaskPriorities enum lists all priorities for tasks in the system.
 * The numeric value of the priority is meaningless in itself; only the
 * order between priorities is important.
 * One priority can be affected to only one task. Some priorities can
 * be unused.
 * GKI will take care of checking that no priority is used by more than
 * one task. GKI will then convert priorities to use the same number
 * of task as of priorities. That is, if there are 3 tasks, they will
 * be asigned priorities 0, 1, 2 in the order of the priority defined
 * below.
 *
 **************************************************************************/
#ifndef __KIPRIORITIES_H__
#define __KIPRIORITIES_H__

#include "nbiot_modem_common_config.h"

enum KiTaskPriorities
{
#ifdef FEA_TEMP_PSC_DEVELOPMENT
  HIGH_PRIORITY_TASK_PRIO,
#endif  /* FEA_TEMP_PSC_DEVELOPMENT */
  TIMER_TASK_PRIO,
  MST1_TASK_PRIO,
  L1_PH_TASK_PRIO,
#if defined (UPGRADE_LTE)
  LTE_PHY_TASK_PRIO,
#endif  /* UPGRADE_LTE */
#if defined (UPGRADE_NB)
#if defined (NB_PC_HW_SIM)
  NB_PC_PHY_HW_TASK_PRIO,
  NB_PC_PHY_ISR_TASK_PRIO,
#endif /* NB_PC_HW_SIM */
#if defined (NB_PC_L1_NET_SIM)
  NB_PC_L1_NET_SIM_TASK_PRIO,
#endif
#if defined (UE_SIMULATOR)
  N_HL_HWSIM_TASK_PRIO,
#endif
  /* N1_ITF_HANDLER_TASK_PRIO, */
  N1_MH_TASK_PRIO,
#endif /* UPGRADE_NB */
  UP_PHY_TASK_PRIO,
  L2_DD_TASK_PRIO,
  L1_AL_HI_TASK_PRIO,
#if defined (UPGRADE_LTE)
  EL2_UL_HP_TASK_PRIO,
  EL2_DL_HP_TASK_PRIO,
#endif /* UPGRADE_LTE */
  UP_CSDI_TASK_PRIO,
  UP_AMRI_TASK_PRIO,
  L2_CBCH_TASK_PRIO,
  L2_SACCH_0_TASK_PRIO,
  L2_SACCH_3_TASK_PRIO,
  L2_DCCH_0_TASK_PRIO,
  L2_DCCH_3_TASK_PRIO,
  GP_MAC_TASK_PRIO,
  UT_TMM_TASK_PRIO,
#if defined (UPGRADE_NASMDL2_LEGACY)
  USB_TASK_PRIO,
  USB_PT_DL_TASK_PRIO,
  USB_PT_UL_TASK_PRIO,
  USB_PT_CTRL_TASK_PRIO,
#endif /* UPGRADE_NASMDL2 */
#if defined (UPGRADE_LTE)
  EL2_UL_LP_TASK_PRIO,
  EL2_DL_LP_TASK_PRIO,
  EL2_CTRL_TASK_PRIO,
  EL2_TASK_PRIO,
  DBM_TASK_PRIO,
#endif /* UPGRADE_LTE */
  UP_MAC_TASK_PRIO,
  UP_RLC_TASK_PRIO,
  L1_BG_TASK_PRIO,
  FR_SD_TASK_PRIO,
  L1_SD_TASK_PRIO,
#if defined (UPGRADE_NASMDL2)
  USB_CDC_TASK_PRIO,
  USB_CTRL_TASK_PRIO,
#endif /* UPGRADE_NASMDL2 */
#if defined (CONN_LAYER)
  CONN_LAYER_TASK_PRIO,
#endif /* CONN_LAYER */
  ERRC_TASK_PRIO,
#ifdef FEA_LPP_SUPPORT
  LPP_TASK_PRIO,
  LBS_TASK_PRIO,
#endif
  GRR_TASK_PRIO,
  UP_RRC_TASK_PRIO,
  GP_RD_TASK_PRIO,
  MM_TASK_PRIO,
  GP_SM_TASK_PRIO,
  EMMI_HIGH_PRI_TASK_PRIO,
  USB_EMMI_COMMS_TASK_PRIO,
#if defined (UPGRADE_GENIE_OVER_SHMCONN)
  SHM_EMMI_TASK_PRIO,
#endif

  MMAC_HIGH_PRIORITY_TASK_PRIO,
  SIM_TASK_PRIO,
  L1_AL_TASK_PRIO,
  DM_TASK_PRIO,
  TAC_TASK_PRIO,
  L1_CTM_TASK_PRIO,
  CB_TASK_PRIO,
  CC_TASK_PRIO,
  TIM_TASK_PRIO,
  SS_TASK_PRIO,
  SMCM_TASK_PRIO,
  VG_RTFDP_TASK_PRIO,
#if defined (UPGRADE_SHARE_MEMORY)     /*SHM_CL_VER_01*/
  MUXCONN_SM_TASK_PRIO,
#elif defined (UPGRADE_SHMCL_SOLUTION) /*SHM_CL_VER_02*/
  MUXCONN_SM_TASK_PRIO,
#endif
  MUXCONN_USB_TASK_PRIO,
  MUXCONN_SERIAL_TASK_PRIO,
  MUX_TASK_PRIO,
#ifdef UE_SIMULATOR
  VMMI_TASK_PRIO,
#endif
  VG_MUX_TASK_PRIO,
  VG_MUX1_TASK_PRIO,
  VG_MUX_GSM710S_TASK_PRIO,
  VG_MUX_USBNULL_TASK_PRIO,
  SMTL_TASK_PRIO,
  VG_UFDP_TASK_PRIO,
  GP_LLC_TASK_PRIO,
  VIDEO_RENDER_TASK_PRIO,
  GP_SNDCP_TASK_PRIO,
#if !defined (UPGRADE_NASMDL2)
  USB_TASK_PRIO,
#endif
  SMRL_TASK_PRIO,
  GP_PPP_TASK_PRIO,
#if defined (UPGRADE_3G)
# if defined (UPGRADE_3G_MBMS)
#  if defined (UPGRADE_3G_TDD128)
  MBMS_TASK_PRIO,
#  endif /*UPGRADE_3G_TDD128*/
# endif /* UPGRADE_3G_MBMS */
#endif /* UPGRADE_3G */

#if defined(UPGRADE_LOGGING_OVER_SHM)
  SHM_LOG_TASK_PRIO,
#endif

#if defined(UPGRADE_SHMCL_SOLUTION)
  MTS_PARA_TASK_PRIO,
#endif /* UPGRADE_SHMCL_SOLUTION */

  EMMI_LOW_PRI_TASK_PRIO,
  #if  defined (KI_ENABLE_LOGGING_SIGNALS_OVER_HSL)
  #if !defined (KI_ENABLE_LOGGING_SIGNALS_OVER_HSL_DMA)
  EMMI_HSL_TASK_PRIO,
  #endif
  #endif
#if defined (MEMORY_TEST_ENABLE)
  MEMORY_ACCESS_TEST_TASK_PRIO,
#endif /* MEMORY_TEST_ENABLE */
  L1_VCXO_TASK_PRIO,
  MEDIA_CONTROLLER_TASK_PRIO,
  AU_DDR_TASK_PRIO,
  SIM_IF_CHECK_TASK_PRIO,
  AM_TASK_PRIO,
  AU_ROUTER_TASK_PRIO,
  AU_STREAM_MANAGER_TASK_PRIO,
  TEST_TASK_PRIO,
  TCPIP_TASK_PRIO,
  WPPP_TASK_PRIO,
  MMAC_TASK_PRIO,
  GPIF_TASK_PRIO,
  MINI_LOGGER_TASK_PRIO,
  DM_NVM_TASK_PRIO,
  USB_TARGET_TASK_PRIO,
#ifdef ENABLE_AP_BRIDGE_FEATURE
  VG_APB_TASK_PRIO,
#endif
  VG_CI_TASK_PRIO,
  TASK_BL_PRIO,
  IP_TASK_PRIO,
  TASK_FL_PRIO,
  TASK_AL_TEST2_PRIO,
  SIMAT_TASK_PRIO,
  MMI_TEST_TASK_PRIO,
  WL1_AL_TASK_PRIO,
  AL_TASK_PRIO,
#if defined (USE_3G_FDD_L1_NET_SIMU)
  NST_TASK_PRIO,
#endif
#if defined (ENABLE_3G_FDD_L1_SIMU)
  DSP_TASK_PRIO,
#endif
  CPPTEST_TASK_PRIO,
  ML_SIGNAL_DUMPER_TASK_PRIO,
  DTF_STIMULATE_TASK_PRIO,
  DTF_SIMULATE_TASK_PRIO,
  DTF_SELF_TEST_TASK_PRIO,
  DM_RTC_TASK_PRIO,
  TASK_FS_PRIO,
  MIPS_MANAGER_TASK_PRIO,
  CATT_TASK_PRIO,
  DRM_TASK_PRIO,
  MMSC_CONTROLLER_TASK_PRIO,
  MF_COMMS_TASK_PRIO,
  MDS_CONTROL_TASK_PRIO,
  MF_RM_TASK_PRIO,
  MES_CAPTURE_TASK_PRIO,
  MF_PROCS1_TASK_PRIO,
  MES_CONTROL_TASK_PRIO,
  MF_PROCS0_TASK_PRIO,
  MMCC_TASK_PRIO,
  L1_PROF_TASK_PRIO,
  MSL_TEST_TASK_PRIO,
  DM_NVP_TASK_PRIO,
#if defined (UPGRADE_XO_ATC)
  U1_XO_ATC_TASK_PRIO,
#endif

#if defined (OSDRIVERS_TEST_ENABLE)
  /* Test tasks. */
  OS_DRIVER_TEST_DMA_TASK_PRIO,
  OS_DRIVER_TEST_MAIN_TASK_PRIO,
  OS_DRIVER_TEST_SHMCL_TASK_PRIO,
  IRQ_TEST_TASK_PRIO,
  UART_TEST_TASK_PRIO,
  GKI_PORTING_TEST_A1_TASK_PRIO,
  GKI_PORTING_TEST_B1_TASK_PRIO,
  GKI_PORTING_TEST_B2_TASK_PRIO,
  GKI_PORTING_TEST_B3_TASK_PRIO,
  GKI_PORTING_TEST_C1_TASK_PRIO,
  GKI_PORTING_TEST_C2_TASK_PRIO,
  GKI_PORTING_TEST_D1_TASK_PRIO,
  GKI_PORTING_TEST_F1_TASK_PRIO,
  LCD_DRIVER_TEST_TASK_PRIO,
  SEM_TEST_TASK_PRIO,
#endif

  LOW_PRIORITY_TASK_PRIO,
  SWI_EMMI_COMMS_TASK_PRIO,

  /* Linux and windows GKI ports tasks. */
  COMMS_TASK_PRIO,
  TEST1_TASK_PRIO,
  TEST2_TASK_PRIO,

  /* Coolart tasks (execpt MST1 task as that can be placed within the system. */
  MCT_TASK_PRIO,
  MST2_TASK_PRIO,
  GPIB_TASK_PRIO,
  GPIB2_TASK_PRIO,
  GPIB3_TASK_PRIO,
  ATI1_TASK_PRIO,
  ATI2_TASK_PRIO,
  ATI3_TASK_PRIO,
  ATI4_TASK_PRIO,
  ATI5_TASK_PRIO,
  BAMM_TASK_PRIO,
  PWRCTRL_TASK_PRIO,
  LPT_TASK_PRIO,

  /* Don't move this last one. */
  KI_PRIO_ENUM_NUMBER
};

#endif
