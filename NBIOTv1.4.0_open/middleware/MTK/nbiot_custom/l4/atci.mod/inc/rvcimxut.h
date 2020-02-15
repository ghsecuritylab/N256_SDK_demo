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
 * File Description
 * ----------------
 *
 * RVCIMXUT.H
 * Exports the API for the MUX utilities
 **************************************************************************/

#ifndef RVCIMXUT_H
#define RVCIMXUT_H
/***************************************************************************
 * Include Files
 ***************************************************************************/
#include <system.h>
#include <ki_sigbuf.h>
#include <kitqid.h>
#include <rvutil.h>
#include <rvdata.h>
#include <ciapex_sig.h>


/***************************************************************************
 * Manifest Constants
 ***************************************************************************/

/***************************************************************************
 * Types
 ***************************************************************************/

/***************************************************************************
 * Variables
 ***************************************************************************/

/***************************************************************************
 * Macros
 ***************************************************************************/

/***************************************************************************
 * Global Function Prototypes
 ***************************************************************************/

Boolean applyDataMask        (const Char dataChar,
                               const VgmuxChannelNumber entity);
void vgSignalDelayTimerExpiry (const VgmuxChannelNumber entity);
void vgExecuteDelayedAbsmIndSignals( void);
void vgSendCiMuxChannelEnableRsp  (const VgmuxChannelNumber entity, Boolean success);
void vgSendCiMuxChannelDisabledRsp(const VgmuxChannelNumber entity);
void vgSyncWithPs (const VgmuxChannelNumber entity);
void vgSetUpMuxConfig (const VgmuxChannelNumber entity);
Boolean vgReadAbmmWritableData (const VgmuxChannelNumber entity);


void vgSendSignalToMux (const VgmuxChannelNumber entity,  SignalBuffer *sigBuf_p);

void vgCiAbortAtCommand      (const VgmuxChannelNumber channelNumber);
void setEntityState          (const VgmuxChannelNumber entity,
                               const EntityState_t  state);
EntityState_t getEntityState (const VgmuxChannelNumber  entity);
Boolean isEntityActive       (const VgmuxChannelNumber  entity);
Boolean isEntityMmiNotUnsolicited (const VgmuxChannelNumber entity);

void crManAddToAtCache       (const VgmuxChannelNumber  channelNumber,
                               SignalBuffer targetQueue [],
                                Int8         *targetQueueLength,
                                 SignalBuffer *signalBuffer_p);
void popFromAtCache (SignalBuffer targetQueue [],
                      Int8 *targetQueueLength);

void vgCiMuxCloseDataConnection     (const VgmuxChannelNumber entity);
void vgCiMuxOpenDataConnection      (const VgmuxChannelNumber entity,
                                     DataConnType             dataConnType);
void vgSendCiMuxCloseDataConnReq    (VgmuxChannelNumber       atChannel);
void vgSendCiMuxOpenDataConnReq     (VgmuxChannelNumber       atChannel,
                                     DataConnType             dataConnType);
void vgSendCiMuxSetRing             (const VgmuxChannelNumber entity, 
                                     Boolean                  startRing ); 
void vgSendCiMuxConfigureChannelReq (const VgmuxChannelNumber entity,
                                     Boolean                  forceSend); 
void vgMuxPORTSETTINGCHANGETimerExpiry
                                    (const VgmuxChannelNumber entity);
void vgSigCiMuxAtoCommandReq        (const VgmuxChannelNumber entity);
void vgGetUartPortBaudRate (const VgmuxChannelNumber entity);
void vgGetUartFlowControlMode (const VgmuxChannelNumber entity);

#endif /* RVCIMXUT_H*/
/* END OF FILE */
