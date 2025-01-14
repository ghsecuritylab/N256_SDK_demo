/* Copyright Statement:
 *
 * (C) 2005-2016  MediaTek Inc. All rights reserved.
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

#ifndef __RIL_CMDS_COMMON_H__
#define __RIL_CMDS_COMMON_H__
#include "ril_general_types.h"

#include "ril.h"
#include "ril_cmds_def.h"
#include "ril_utils.h"

extern ril_status_t ril_request_send(
    ril_request_mode_t mode,
    ril_cmd_id_t cmd_id,
    ril_param_node_t *param,
    void *callback,
    void *user_data);
extern ril_status_t ril_request_send_via_channel(
    ril_request_mode_t mode,
    ril_cmd_id_t cmd_id,
    ril_param_node_t *param,
    void *callback,
    void *user_data,
    int32_t channel_id);
extern int32_t ril_param_list_add_int_optional(const ril_param_node_t *list_head, int32_t param, int32_t can_be_empty);
extern int32_t ril_param_list_add_hexint_optional(const ril_param_node_t *list_head, int32_t param, int32_t can_be_empty);
extern int32_t ril_param_list_add_string_optional(const ril_param_node_t *list_head, char *param, int32_t can_be_empty);
extern int32_t ril_param_list_add_digital_string_optional(const ril_param_node_t *list_head, char *param, int32_t can_be_empty);

extern int32_t ril_cmd_send_common_hdlr(uint32_t channel_id, char *buf, ril_request_info_t *info);
extern int32_t ril_response_common_no_parameter(uint32_t channel_id, char *cmd_buf, uint32_t cmd_buf_len);
extern int32_t ril_urc_dummy_hdlr(ril_urc_id_t event_id, char *cmd_buf, uint32_t cmd_buf_len);
extern void remove_redundant_comma_space(char *buf);
extern int32_t ril_cmd_send_custom_command(uint32_t channel_id, char *buf, ril_request_info_t *info);
extern int32_t ril_response_custom_command(uint32_t channel_id, char *cmd_buf, uint32_t cmd_buf_len);
extern int32_t ril_response_ut_callback_custom_command(char *rsp_str, uint32_t rsp_str_len, void *user_data);


/* internal use */
extern int32_t ril_urc_cpin_indication(ril_urc_id_t cmd_id, char *cmd_buf, uint32_t cmd_buf_len);

#define UT_OMITTED_PARAM    ("(omitted)")
/* construct command response structure */
#define RIL_CONSTRUCT_RESPONSE(cmd_response)       do { \
                                                       cmd_response.cmd_id = (ril_cmd_id_t)(channel_p->curr_request_id); \
                                                       cmd_response.mode = (ril_request_mode_t)(channel_p->curr_request_mode); \
                                                       cmd_response.res_code = res_code; \
                                                       cmd_response.cmd_param = ret < 0 ? NULL: &response; \
                                                       cmd_response.user_data = channel_p->usr_data; \
                                                       cmd_response.test_mode_str = (need_parse == true) ? NULL : cmd_buf; \
                                                       cmd_response.test_mode_str_len = (need_parse == true) ? 0 : cmd_buf_len; \
                                                   } while (0);


#define RIL_CONSTRUCT_ERROR_RESPONSE(cmd_response, _cmd_id, _request_mode, _user_data, _res_code)  do { \
                                                                        cmd_response.cmd_id = (ril_cmd_id_t)(_cmd_id); \
                                                                        cmd_response.mode = (ril_request_mode_t)(_request_mode); \
                                                                        cmd_response.res_code = _res_code; \
                                                                        cmd_response.cmd_param = NULL; \
                                                                        cmd_response.user_data = _user_data; \
                                                                        cmd_response.test_mode_str = NULL; \
                                                                        cmd_response.test_mode_str_len = 0; \
                                                                    } while (0);


#endif /* __RIL_CMDS_COMMON_H__ */

