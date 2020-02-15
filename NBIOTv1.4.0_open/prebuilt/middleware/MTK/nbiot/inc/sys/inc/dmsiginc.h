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
 **************************************************************************
 * File Description : This file defines the signal definition include
 *     files for the Devices signal set.
 *     This file is only included into KISIGINC.H. There is no multiple
 *     inclusion protection as this file can be included more than once
 *     in the same file. If you add a new include into this file you may
 *     also need to add an include into KISIGUNI.H that defines the signal
 *     structures. Building a signal database (that includes the
 *     new signals) in a PC test tool (e.g. Genie, use Signal Maker to
 *     check signals appear with the correct structures) will check that
 *     signal definitions have been correctly added to the system.
 **************************************************************************/

/***************************************************************************
 * IMPORTANT IMPORTANT IMPORTANT IMPORTANT IMPORTANT IMPORTANT IMPORTANT
 *
 * Please read the file description above as it contains information on
 * other changes that might be needed if you change this file.
 *
 * IMPORTANT IMPORTANT IMPORTANT IMPORTANT IMPORTANT IMPORTANT IMPORTANT
 ***************************************************************************/

#if !defined (EXCLUDE_D1)
# if !defined (EXCLUDE_L1SI)
#  include <l1sisigdef.h>
# endif /* EXCLUDE_L1SI */
# if !defined (EXCLUDE_L1AL)
#  include <l1alsigdef.h>
# endif /* EXCLUDE_L1AL */
# if defined (UPGRADE_CTM)
#  include <l1ctmsigdef.h>
# endif /* UPGRADE_CTM */
#endif

#if !defined (EXCLUDE_DM)
#  include <dmsig.h>
#else 
#if defined (MTK_NBIOT_TARGET_BUILD) || defined (UT_TARGET_CONFIG)
#  include <dmsig.h>
#endif
#endif

#if defined (UPGRADE_FSYSTEM)
#if !defined (EXCLUDE_FS)
#  include <fssig.h>
#endif /* !defined (EXCLUDE_FS) */
#endif /* (UPGRADE_FSYSTEM) */

#if defined (CONN_LAYER)
#include <conn_layer_sigdef.h>
#endif /*CONN_LAYER*/

#if defined(UPGRADE_LOGGING_OVER_SHM)
# include <shm_logsigdef.h>
#endif /* UPGRADE_LOGGING_OVER_SHM */

#if defined (UPGRADE_SHMCL_SOLUTION)
# include <shm_nvramsigdef.h>
#endif /* UPGRADE_LOGGING_OVER_SHM */

#if defined (UPGRADE_SHMCL_SOLUTION)
# include <t1msyspara_sigdef.h>
#endif

/* END OF FILE */

