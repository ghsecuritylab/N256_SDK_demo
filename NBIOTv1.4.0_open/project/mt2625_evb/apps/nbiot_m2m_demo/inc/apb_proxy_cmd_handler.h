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

#include "apb_proxy.h"

#ifndef __APB_PROXY_CMD_HANDLER__H__
#define __APB_PROXY_CMD_HANDLER__H__


/*************************************************************************************************
*                             MT2625 Customed Command Handler's Declaration                      *
**************************************************************************************************/
#ifdef MTK_GNSS_ENABLE
apb_proxy_status_t gnss_test_at_handler(apb_proxy_parse_cmd_param_t *parse_cmd);
apb_proxy_status_t gnss_epo_erase_at_handler(apb_proxy_parse_cmd_param_t *parse_cmd);
apb_proxy_status_t gnss_epo_test_at_handler(apb_proxy_parse_cmd_param_t *parse_cmd);
apb_proxy_status_t gnss_epo_set_time_at_handler(apb_proxy_parse_cmd_param_t *parse_cmd);
apb_proxy_status_t gnss_loc_set_at_handler(apb_proxy_parse_cmd_param_t *parse_cmd);
apb_proxy_status_t gnss_agps_at_handler(apb_proxy_parse_cmd_param_t *parse_cmd);
apb_proxy_status_t gnss_gps_at_handler(apb_proxy_parse_cmd_param_t *parse_cmd);
#endif

apb_proxy_status_t apb_proxy_hdlr_onenet_client_cmd(apb_proxy_parse_cmd_param_t *parse_cmd);
apb_proxy_status_t apb_proxy_hdlr_lwm2m_client_create_cmd(apb_proxy_parse_cmd_param_t *parse_cmd);
apb_proxy_status_t apb_proxy_hdlr_lwm2m_client_delete_cmd(apb_proxy_parse_cmd_param_t *parse_cmd);
apb_proxy_status_t apb_proxy_hdlr_lwm2m_client_send_cmd(apb_proxy_parse_cmd_param_t *parse_cmd);


#ifdef ADUPS_FOTA_ENABLE_CT
apb_proxy_status_t abup_apb_proxy_hdlr_lwm2m_client_send_cmd(apb_proxy_parse_cmd_param_t *parse_cmd);
#endif

//xufushuai.add
apb_proxy_status_t apb_proxy_hdlr_device_gps_cmd(apb_proxy_parse_cmd_param_t *parse_cmd);
apb_proxy_status_t apb_proxy_hdlr_device_gps_state_cmd(apb_proxy_parse_cmd_param_t *parse_cmd);
apb_proxy_status_t apb_proxy_hdlr_device_gpstest_cmd(apb_proxy_parse_cmd_param_t *parse_cmd);
apb_proxy_status_t apb_proxy_hdlr_device_gpscheckcn_cmd(apb_proxy_parse_cmd_param_t *p_parse_cmd);


apb_proxy_status_t apb_proxy_hdlr_get_vbat_cmd(apb_proxy_parse_cmd_param_t *parse_cmd);
apb_proxy_status_t apb_proxy_hdlr_sendcnt_cmd(apb_proxy_parse_cmd_param_t *parse_cmd);

//tangfeng.add
apb_proxy_status_t apb_proxy_hdlr_socket_charmode_cmd(apb_proxy_parse_cmd_param_t *parse_cmd);
apb_proxy_status_t apb_proxy_hdlr_StopATLock_cmd(apb_proxy_parse_cmd_param_t *parse_cmd);


#endif /*__APB_PROXY_CMD_HANDLER__H__*/
