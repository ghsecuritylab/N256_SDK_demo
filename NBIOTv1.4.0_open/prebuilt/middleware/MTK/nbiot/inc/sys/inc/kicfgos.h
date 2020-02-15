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
 * GKI header used to check that only one RTOS GKI port has been selected.
 **************************************************************************/

#ifndef KICFGOS_H
#define KICFGOS_H

/** \addtogroup GkiOsAbs
 * @{
 */

#include <ttconfig.h>

/***************************************************************************
 * Docs
 **************************************************************************/

/** \def AMX_KERNEL
* This conditional compile enables the KADAK AMX port of the GKI. */

/** \def THREADX_KERNEL
 * This conditional compile enables the Express Logic ThreadX port of the GKI. */

/** \def NUCLEUS_KERNEL
 * This conditional compile enables the Nucleus port of the GKI. */

/** \def PTHREADS_KERNEL
 * This conditional compile enables the PThreads port of the GKI. */

/** \def RTXC_QUADROS_KERNEL
 * This conditional compile enables the RTXC QUADROS port of the GKI. */

/** \def MQX_KERNEL
 * This conditional compile enables the MQX port of the GKI. */

/** \def FJORD_KERNEL
 * This conditional compile enables the Fjord platform port of the GKI. */

/** \def PC_KERNEL
 * This conditional compile enables the PC port of the GKI. */

/** \def EX_KERNEL
 * This conditional compile enables the EX port of the GKI. This can be used by
 * terminal clients to add their own GKI ports. */

/** \def EXS_KERNEL
 * This conditional compile enables the EXS port of the GKI. This can be used
 * by silicon clients to add their own GKI ports. */

/** \def KERNEL_DEFINED
 * Internal define used to check that one and only one kernel is defined. */

/***************************************************************************
 * Check for Kernel Type
 **************************************************************************/

#if !defined (AMX_KERNEL) && \
    !defined (THREADX_KERNEL) && \
    !defined (NUCLEUS_KERNEL) && \
    !defined (PTHREADS_KERNEL) && \
    !defined (RTXC_QUADROS_KERNEL) && \
    !defined (MQX_KERNEL) && \
    !defined (FJORD_KERNEL) && \
    !defined (PC_KERNEL) && \
    !defined (EX_KERNEL) && \
    !defined (FRT_KERNEL) && \
    !defined (EXS_KERNEL)

# if defined (ON_PC) || defined (ON_TARGET_UNIT_TEST)
/*
** On PC use GENIEXEC
**
** ON_PC is slightly special as a specific platform type can be defined as
** well as ON_PC i.e. testing a platform specific bit of code on PC.
*/
#  define PC_KERNEL
# else /* ON PC */

#  if defined (UPGRADE_EX_KERNEL)
/* Enable External Kernel (Terminal Clients) */
#   define EX_KERNEL
#  else

#   if defined (UPGRADE_EXS_KERNEL)
/* Enable External Kernel (Silicon Clients) */
#    define EXS_KERNEL
#   else


/* All target OS's should be covered here. */

#   if defined (UPGRADE_PTHREADS_KERNEL)
/* Enable External Kernel (Silicon Clients) */
#    define PTHREADS_KERNEL
#   endif

#    if defined (UPGRADE_AMX_KERNEL)
/* Any platform that uses AMX from KADAK may use this #define */
#     define AMX_KERNEL
#    endif

#   if defined (UPGRADE_RTXC_QUADROS_KERNEL)
/* Any platform that uses RTXC QUADROS from QUADROS may use this #define */
#    define RTXC_QUADROS_KERNEL
#   endif

#   if defined (UPGRADE_MQX_KERNEL)
/* Any platform that uses MQX from ARC may use this #define */
#     define MQX_KERNEL
#   endif

#   if defined (UPGRADE_NUCLEUS_KERNEL)
/* Any platform that uses NUCLEUS may use this #define */
#    define NUCLEUS_KERNEL
#   endif

#   endif /* UPGRADE_EXS_KERNEL */
#  endif /* UPGRADE_EX_KERNEL */
# endif /* ON PC */
#endif /* KERNEL TYPES */

#if !defined (AMX_KERNEL) && \
    !defined (MMK_KERNEL) && \
    !defined (THREADX_KERNEL) && \
    !defined (NUCLEUS_KERNEL) && \
    !defined (RTXC_QUADROS_KERNEL) && \
    !defined (MQX_KERNEL) && \
    !defined (FJORD_KERNEL) && \
    !defined (PTHREADS_KERNEL) && \
    !defined (PC_KERNEL) && \
    !defined (EX_KERNEL) && \
    !defined (FRT_KERNEL) && \
    !defined (EXS_KERNEL)
# error "No Kernel Type Defined"
#endif

/***************************************************************************
 * Check that 2 kernel types aren't defined
 **************************************************************************/

#if defined (AMX_KERNEL)
# define KERNEL_DEFINED
#endif

#if defined (THREADX_KERNEL)
# if defined (KERNEL_DEFINED)
#  error "More than one Kernel Type defined (ThreadX + another)"
# else
#  define KERNEL_DEFINED
# endif
#endif

#if defined (NUCLEUS_KERNEL)
# if defined (KERNEL_DEFINED)
#  error "More than one Kernel Type defined (Nucleus + another)"
# else
#  define KERNEL_DEFINED
# endif
#endif

#if defined (RTXC_QUADROS_KERNEL)
# if defined (KERNEL_DEFINED)
#  error "More than one Kernel Type defined (RTXC Quadros + another)"
# else
#  define KERNEL_DEFINED
# endif
#endif

#if defined (MQX_KERNEL)
# if defined (KERNEL_DEFINED)
#  error "More than one Kernel Type defined (MQX + another)"
# else
#  define KERNEL_DEFINED
# endif
#endif

#if defined (FJORD_KERNEL)
# if defined (KERNEL_DEFINED)
#  error "More than one Kernel Type defined (Fjord platform + another)"
# else
#  define KERNEL_DEFINED
# endif
#endif

#if defined (PTHREADS_KERNEL)
# if defined (KERNEL_DEFINED)
#  error "More than one Kernel Type defined (PThreads  + another)"
# else
#  define KERNEL_DEFINED
# endif
#endif

#if defined (PC_KERNEL)
# if defined (KERNEL_DEFINED)
#  error "More than one Kernel Type defined (PC + another)"
# else
#  define KERNEL_DEFINED
# endif
#endif

#if defined (FRT_KERNEL)
# if defined (KERNEL_DEFINED)
#  error "More than one Kernel Type defined (FRT + another)"
# else
#  define KERNEL_DEFINED
# endif
#endif

#if defined (EX_KERNEL)
# if defined (KERNEL_DEFINED)
#  error "More than one Kernel Type defined (EX + another)"
# else
#  define KERNEL_DEFINED
# endif
#endif

#if defined (EXS_KERNEL)
# if defined (KERNEL_DEFINED)
#  error "More than one Kernel Type defined (EXS + another)"
# else
#  define KERNEL_DEFINED
# endif
#endif

/** @} */ /* End of GkiOsAbs group */

#endif

/* END OF FILE */

