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
/** \file
 * GKI header file that defines the fixed block memory definition macros.
 * These are used to extract the RTOS independent information from the
 * memory pool definitions. RTOS dependant information is extracted using
 * the macros in kimemdefos.h.
 **************************************************************************/

/*
** KI_MEM_POOL_DEF_TYPE should be defined to be either
**
**     KI_POOL_IDS      Used to define pool id's in the KiMemoryPoolId
**                      enumeration, see KI_TYP.H.
**
** by the including file
*/
/*
** This file deiberately does not have a
** #if !defined KIMEMDEF_H
** as it can be legitimately included twice
*/

/* Currently only one OS independant definition */
#define KI_POOL_IDS       100

#if defined (KI_MEM_POOL_DEF)
#   undef KI_MEM_POOL_DEF
#endif

/***************************************************************************
 * OS independant macros
 **************************************************************************/

#if KI_MEM_POOL_DEF_TYPE == KI_POOL_IDS
#   define KI_MEM_POOL_DEF(pOOLnAME, bLOCKlENGTH, bLOCKcOUNT, rEQmAX) \
               KI_POOL_USER_##pOOLnAME,
#endif


/*
** Example Mem Pool specification
**
**                  Pool Name   Block Length  Block Count  Request Maximum
** KI_MEM_POOL_DEF ( SMALLEST,            47,          20,              10)
**
*/

#if !defined (KI_MEM_POOL_DEF)
#   error KI_MEM_POOL_DEF must be defined
#endif

#undef KI_MEM_POOL_DEF_TYPE

/* END OF FILE */
