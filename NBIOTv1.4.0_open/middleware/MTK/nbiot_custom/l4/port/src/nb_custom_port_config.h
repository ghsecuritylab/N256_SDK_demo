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

/********************************************************
 * Macro & Define
 *
 ********************************************************/

#ifdef MTK_PORT_SERVICE_ENABLE

#include "serial_port.h"

#if 0 // defined(MTK_BT_ENABLED) || defined(__NB_IOT_GSM_CCCI__)
#define DEFAULT_PORT_FOR_EMMI_TRACE   SERIAL_PORT_DEV_USB_COM1
#else
//tangfeng.modify 
//#define DEFAULT_PORT_FOR_EMMI_TRACE   SERIAL_PORT_DEV_UART_1
#define DEFAULT_PORT_FOR_EMMI_TRACE     SERIAL_PORT_DEV_USB_COM1
#endif

#define DEFAULT_PORT_FOR_AT_CMD       SERIAL_PORT_DEV_UART_0

#if 0 //defined (__NB_IOT_GSM_CCCI__)
#define DEFAULT_PORT_FOR_AT_CMD_2     SERIAL_PORT_DEV_UART_2
#else
//tangfeng.modify 
//#define DEFAULT_PORT_FOR_AT_CMD_2     SERIAL_PORT_DEV_UNDEFINED
#define DEFAULT_PORT_FOR_AT_CMD_2     SERIAL_PORT_DEV_UART_1
#endif


#define DEFAULT_PORT_FOR_CCCI           SERIAL_PORT_DEV_UNDEFINED
#define DEFAULT_PORT_FOR_GPS            SERIAL_PORT_DEV_UNDEFINED
#if 0 //defined (__NB_IOT_GSM_CCCI__)
#define DEFAULT_PORT_FOR_ULS_TRACE      SERIAL_PORT_DEV_USB_COM2
#else
#define DEFAULT_PORT_FOR_ULS_TRACE      SERIAL_PORT_DEV_USB_COM2
#endif

#define DEFAULT_BAUDRATE_FOR_EMMI_TRACE     HAL_UART_BAUDRATE_921600
#define DEFAULT_BAUDRATE_FOR_AT_CMD         HAL_UART_BAUDRATE_9600
#define DEFAULT_BAUDRATE_FOR_AT_CMD_2       HAL_UART_BAUDRATE_9600
#ifdef HAL_UART_FEATURE_3M_BAUDRATE
#define DEFAULT_BAUDRATE_FOR_CCCI           HAL_UART_BAUDRATE_3000000
#else
#define DEFAULT_BAUDRATE_FOR_CCCI           HAL_UART_BAUDRATE_921600
#endif
#define DEFAULT_BAUDRATE_FOR_GPS            HAL_UART_BAUDRATE_9600
#define DEFAULT_BAUDRATE_FOR_ULS_TRACE      HAL_UART_BAUDRATE_921600

#endif /* MTK_PORT_SERVICE_ENABLE */

