/*******************************************************************************
 *
 * Copyright (c) 2013, 2014 Intel Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * and Eclipse Distribution License v1.0 which accompany this distribution.
 *
 * The Eclipse Public License is available at
 *    http://www.eclipse.org/legal/epl-v10.html
 * The Eclipse Distribution License is available at
 *    http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * Contributors:
 *    David Navarro, Intel Corporation - initial API and implementation
 *    domedambrosio - Please refer to git log
 *    Simon Bernard - Please refer to git log
 *    Toby Jaffey - Please refer to git log
 *    Julien Vermillard - Please refer to git log
 *    Bosch Software Innovations GmbH - Please refer to git log
 *    Christian Renz - Please refer to git log
 *
 *******************************************************************************/

/*
 Copyright (c) 2013, 2014 Intel Corporation

 Redistribution and use in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:

     * Redistributions of source code must retain the above copyright notice,
       this list of conditions and the following disclaimer.
     * Redistributions in binary form must reproduce the above copyright notice,
       this list of conditions and the following disclaimer in the documentation
       and/or other materials provided with the distribution.
     * Neither the name of Intel Corporation nor the names of its contributors
       may be used to endorse or promote products derived from this software
       without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 THE POSSIBILITY OF SUCH DAMAGE.

 David Navarro <david.navarro@intel.com>

*/


#include "liblwm2m.h"

#ifdef LWM2M_SERVER_MODE

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "lwip/sockets.h"
#include "lwip/stats.h"
#include "lwip/netif.h"
#include "lwip/tcpip.h"
#include "lwip/sockets.h"
//#include "ethernetif.h"
#include "lwip/sockets.h"
#include "netif/etharp.h"

#include "commandline.h"
#include "connection.h"
#include "syslog.h"

#define MAX_PACKET_SIZE 1024

static int g_quit = 0;
lwm2m_context_t *g_lwm2m_context = NULL;

log_create_module(lwm2m_s, PRINT_LEVEL_INFO);

static void prv_print_error(uint8_t status)
{
    fprintf(stdout, "Error: ");
    print_status(stdout, status);
    fprintf(stdout, "\r\n");
}

static char * prv_dump_binding(lwm2m_binding_t binding)
{
    switch (binding)
    {
    case BINDING_UNKNOWN:
        return "Not specified";
    case BINDING_U:
        return "UDP";
    case BINDING_UQ:
        return "UDP queue mode";
    case BINDING_S:
        return "SMS";
    case BINDING_SQ:
        return "SMS queue mode";
    case BINDING_US:
        return "UDP plus SMS";
    case BINDING_UQS:
        return "UDP queue mode plus SMS";
    default:
        return "";
    }
}

static void prv_dump_client(lwm2m_client_t * targetP)
{
    lwm2m_client_object_t * objectP;

    fprintf(stdout, "Client #%d:\r\n", targetP->internalID);
    fprintf(stdout, "\tname: \"%s\"\r\n", targetP->name);
    fprintf(stdout, "\tbinding: \"%s\"\r\n", prv_dump_binding(targetP->binding));
    if (targetP->msisdn) fprintf(stdout, "\tmsisdn: \"%s\"\r\n", targetP->msisdn);
    if (targetP->altPath) fprintf(stdout, "\talternative path: \"%s\"\r\n", targetP->altPath);
    fprintf(stdout, "\tlifetime: %d sec\r\n", targetP->lifetime);
    fprintf(stdout, "\tobjects: ");
    for (objectP = targetP->objectList; objectP != NULL ; objectP = objectP->next)
    {
        if (objectP->instanceList == NULL)
        {
            fprintf(stdout, "/%d, ", objectP->id);
        }
        else
        {
            lwm2m_list_t * instanceP;

            for (instanceP = objectP->instanceList; instanceP != NULL ; instanceP = instanceP->next)
            {
                fprintf(stdout, "/%d/%d, ", objectP->id, instanceP->id);
            }
        }
    }
    fprintf(stdout, "\r\n");
}

void prv_output_clients(char * buffer,
                               void * user_data)
{
    lwm2m_context_t * lwm2mH = (lwm2m_context_t *) user_data;
    lwm2m_client_t * targetP;

    targetP = lwm2mH->clientList;

    if (targetP == NULL)
    {
        fprintf(stdout, "No client.\r\n");
        return;
    }

    for (targetP = lwm2mH->clientList ; targetP != NULL ; targetP = targetP->next)
    {
        prv_dump_client(targetP);
    }
}

static int prv_read_id(char * buffer,
                       uint16_t * idP)
{
    int nb;
    int value;

    nb = sscanf(buffer, "%d", &value);
    if (nb == 1)
    {
        if (value < 0 || value > LWM2M_MAX_ID)
        {
            nb = 0;
        }
        else
        {
            *idP = value;
        }
    }

    return nb;
}


static void prv_result_callback(uint16_t clientID,
                                lwm2m_uri_t * uriP,
                                int status,
                                lwm2m_media_type_t format,
                                uint8_t * data,
                                int dataLength,
                                void * userData)
{
    fprintf(stdout, "\r\nClient #%d /%d", clientID, uriP->objectId);
    if (LWM2M_URI_IS_SET_INSTANCE(uriP))
        fprintf(stdout, "/%d", uriP->instanceId);
    else if (LWM2M_URI_IS_SET_RESOURCE(uriP))
        fprintf(stdout, "/");
    if (LWM2M_URI_IS_SET_RESOURCE(uriP))
            fprintf(stdout, "/%d", uriP->resourceId);
    fprintf(stdout, " : ");
    print_status(stdout, status);
    fprintf(stdout, "\r\n");

    output_data(stdout, format, data, dataLength, 1);

    fprintf(stdout, "\r\n> ");
    fflush(stdout);
}

static void prv_notify_callback(uint16_t clientID,
                                lwm2m_uri_t * uriP,
                                int count,
                                lwm2m_media_type_t format,
                                uint8_t * data,
                                int dataLength,
                                void * userData)
{
    fprintf(stdout, "\r\nNotify from client #%d /%d", clientID, uriP->objectId);
    if (LWM2M_URI_IS_SET_INSTANCE(uriP))
        fprintf(stdout, "/%d", uriP->instanceId);
    else if (LWM2M_URI_IS_SET_RESOURCE(uriP))
        fprintf(stdout, "/");
    if (LWM2M_URI_IS_SET_RESOURCE(uriP))
            fprintf(stdout, "/%d", uriP->resourceId);
    fprintf(stdout, " number %d\r\n", count);

    output_data(stdout, format, data, dataLength, 1);

    fprintf(stdout, "\r\n> ");
    fflush(stdout);
}

void prv_read_client(char * buffer,
                            void * user_data)
{
    lwm2m_context_t * lwm2mH = (lwm2m_context_t *) user_data;
    uint16_t clientId;
    lwm2m_uri_t uri;
    char* end = NULL;
    int result;

    result = prv_read_id(buffer, &clientId);
    if (result != 1) goto syntax_error;

    buffer = get_next_arg(buffer, &end);
    if (buffer[0] == 0) goto syntax_error;

    result = lwm2m_stringToUri(buffer, end - buffer, &uri);
    if (result == 0) goto syntax_error;

    if (!check_end_of_args(end)) goto syntax_error;

    result = lwm2m_dm_read(lwm2mH, clientId, &uri, prv_result_callback, NULL);

    if (result == 0)
    {
        fprintf(stdout, "OK");
    }
    else
    {
        prv_print_error(result);
    }
    return;

syntax_error:
    fprintf(stdout, "Syntax error !");
}

void prv_discover_client(char * buffer,
                                void * user_data)
{
    lwm2m_context_t * lwm2mH = (lwm2m_context_t *) user_data;
    uint16_t clientId;
    lwm2m_uri_t uri;
    char* end = NULL;
    int result;

    result = prv_read_id(buffer, &clientId);
    if (result != 1) goto syntax_error;

    buffer = get_next_arg(buffer, &end);
    if (buffer[0] == 0) goto syntax_error;

    result = lwm2m_stringToUri(buffer, end - buffer, &uri);
    if (result == 0) goto syntax_error;

    if (!check_end_of_args(end)) goto syntax_error;

    result = lwm2m_dm_discover(lwm2mH, clientId, &uri, prv_result_callback, NULL);

    if (result == 0)
    {
        fprintf(stdout, "OK");
    }
    else
    {
        prv_print_error(result);
    }
    return;

syntax_error:
    fprintf(stdout, "Syntax error !");
}

void prv_write_client(char * buffer,
                             void * user_data)
{
    lwm2m_context_t * lwm2mH = (lwm2m_context_t *) user_data;
    uint16_t clientId;
    lwm2m_uri_t uri;
    char * end = NULL;
    int result;

    result = prv_read_id(buffer, &clientId);
    if (result != 1) goto syntax_error;

    buffer = get_next_arg(buffer, &end);
    if (buffer[0] == 0) goto syntax_error;

    result = lwm2m_stringToUri(buffer, end - buffer, &uri);
    if (result == 0) goto syntax_error;

    buffer = get_next_arg(end, &end);
    if (buffer[0] == 0) goto syntax_error;

    if (!check_end_of_args(end)) goto syntax_error;

    result = lwm2m_dm_write(lwm2mH, clientId, &uri, LWM2M_CONTENT_TEXT, (uint8_t *)buffer, end - buffer, prv_result_callback, NULL);

    if (result == 0)
    {
        fprintf(stdout, "OK");
    }
    else
    {
        prv_print_error(result);
    }
    return;

syntax_error:
    fprintf(stdout, "Syntax error !");
}


void prv_time_client(char * buffer,
                            void * user_data)
{
    lwm2m_context_t * lwm2mH = (lwm2m_context_t *) user_data;
    uint16_t clientId;
    lwm2m_uri_t uri;
    char * end = NULL;
    int result;
    lwm2m_attributes_t attr;
    int nb;
    int value;

    result = prv_read_id(buffer, &clientId);
    if (result != 1) goto syntax_error;

    buffer = get_next_arg(buffer, &end);
    if (buffer[0] == 0) goto syntax_error;

    result = lwm2m_stringToUri(buffer, end - buffer, &uri);
    if (result == 0) goto syntax_error;

    memset(&attr, 0, sizeof(lwm2m_attributes_t));
    attr.toSet = LWM2M_ATTR_FLAG_MIN_PERIOD | LWM2M_ATTR_FLAG_MAX_PERIOD;

    buffer = get_next_arg(end, &end);
    if (buffer[0] == 0) goto syntax_error;

    nb = sscanf(buffer, "%d", &value);
    if (nb != 1) goto syntax_error;
    if (value < 0) goto syntax_error;
    attr.minPeriod = value;

    buffer = get_next_arg(end, &end);
    if (buffer[0] == 0) goto syntax_error;

    nb = sscanf(buffer, "%d", &value);
    if (nb != 1) goto syntax_error;
    if (value < 0) goto syntax_error;
    attr.maxPeriod = value;

    if (!check_end_of_args(end)) goto syntax_error;

    result = lwm2m_dm_write_attributes(lwm2mH, clientId, &uri, &attr, prv_result_callback, NULL);

    if (result == 0)
    {
        fprintf(stdout, "OK");
    }
    else
    {
        prv_print_error(result);
    }
    return;

syntax_error:
    fprintf(stdout, "Syntax error !");
}


void prv_attr_client(char * buffer,
                            void * user_data)
{
    lwm2m_context_t * lwm2mH = (lwm2m_context_t *) user_data;
    uint16_t clientId;
    lwm2m_uri_t uri;
    char * end = NULL;
    int result;
    lwm2m_attributes_t attr;
    int nb;
    float value;

    result = prv_read_id(buffer, &clientId);
    if (result != 1) goto syntax_error;

    buffer = get_next_arg(buffer, &end);
    if (buffer[0] == 0) goto syntax_error;

    result = lwm2m_stringToUri(buffer, end - buffer, &uri);
    if (result == 0) goto syntax_error;

    memset(&attr, 0, sizeof(lwm2m_attributes_t));
    attr.toSet = LWM2M_ATTR_FLAG_LESS_THAN | LWM2M_ATTR_FLAG_GREATER_THAN;

    buffer = get_next_arg(end, &end);
    if (buffer[0] == 0) goto syntax_error;

    nb = sscanf(buffer, "%f", &value);
    if (nb != 1) goto syntax_error;
    attr.lessThan = value;

    buffer = get_next_arg(end, &end);
    if (buffer[0] == 0) goto syntax_error;

    nb = sscanf(buffer, "%f", &value);
    if (nb != 1) goto syntax_error;
    attr.greaterThan = value;

    buffer = get_next_arg(end, &end);
    if (buffer[0] != 0)
    {
        nb = sscanf(buffer, "%f", &value);
        if (nb != 1) goto syntax_error;
        attr.step = value;

        attr.toSet |= LWM2M_ATTR_FLAG_STEP;
    }

    if (!check_end_of_args(end)) goto syntax_error;

    result = lwm2m_dm_write_attributes(lwm2mH, clientId, &uri, &attr, prv_result_callback, NULL);

    if (result == 0)
    {
        fprintf(stdout, "OK");
    }
    else
    {
        prv_print_error(result);
    }
    return;

syntax_error:
    fprintf(stdout, "Syntax error !");
}


void prv_clear_client(char * buffer,
                             void * user_data)
{
    lwm2m_context_t * lwm2mH = (lwm2m_context_t *) user_data;
    uint16_t clientId;
    lwm2m_uri_t uri;
    char * end = NULL;
    int result;
    lwm2m_attributes_t attr;

    result = prv_read_id(buffer, &clientId);
    if (result != 1) goto syntax_error;

    buffer = get_next_arg(buffer, &end);
    if (buffer[0] == 0) goto syntax_error;

    result = lwm2m_stringToUri(buffer, end - buffer, &uri);
    if (result == 0) goto syntax_error;

    memset(&attr, 0, sizeof(lwm2m_attributes_t));
    attr.toClear = LWM2M_ATTR_FLAG_LESS_THAN | LWM2M_ATTR_FLAG_GREATER_THAN | LWM2M_ATTR_FLAG_STEP | LWM2M_ATTR_FLAG_MIN_PERIOD | LWM2M_ATTR_FLAG_MAX_PERIOD ;

    buffer = get_next_arg(end, &end);
    if (!check_end_of_args(end)) goto syntax_error;

    result = lwm2m_dm_write_attributes(lwm2mH, clientId, &uri, &attr, prv_result_callback, NULL);

    if (result == 0)
    {
        fprintf(stdout, "OK");
    }
    else
    {
        prv_print_error(result);
    }
    return;

syntax_error:
    fprintf(stdout, "Syntax error !");
}


void prv_exec_client(char * buffer,
                            void * user_data)
{
    lwm2m_context_t * lwm2mH = (lwm2m_context_t *) user_data;
    uint16_t clientId;
    lwm2m_uri_t uri;
    char * end = NULL;
    int result;

    result = prv_read_id(buffer, &clientId);
    if (result != 1) goto syntax_error;

    buffer = get_next_arg(buffer, &end);
    if (buffer[0] == 0) goto syntax_error;

    result = lwm2m_stringToUri(buffer, end - buffer, &uri);
    if (result == 0) goto syntax_error;

    buffer = get_next_arg(end, &end);


    if (buffer[0] == 0)
    {
        result = lwm2m_dm_execute(lwm2mH, clientId, &uri, 0, NULL, 0, prv_result_callback, NULL);
    }
    else
    {
        if (!check_end_of_args(end)) goto syntax_error;

        result = lwm2m_dm_execute(lwm2mH, clientId, &uri, LWM2M_CONTENT_TEXT, (uint8_t *)buffer, end - buffer, prv_result_callback, NULL);
    }

    if (result == 0)
    {
        fprintf(stdout, "OK");
    }
    else
    {
        prv_print_error(result);
    }
    return;

syntax_error:
    fprintf(stdout, "Syntax error !");
}

void prv_create_client(char * buffer,
                              void * user_data)
{
    lwm2m_context_t * lwm2mH = (lwm2m_context_t *) user_data;
    uint16_t clientId;
    lwm2m_uri_t uri;
    char * end = NULL;
    int result;
    int64_t value;
    uint8_t * temp_buffer = NULL;
    int temp_length = 0;
    lwm2m_media_type_t format = LWM2M_CONTENT_TEXT;

    //Get Client ID
    result = prv_read_id(buffer, &clientId);
    if (result != 1) goto syntax_error;

    //Get Uri
    buffer = get_next_arg(buffer, &end);
    if (buffer[0] == 0) goto syntax_error;

    result = lwm2m_stringToUri(buffer, end - buffer, &uri);
    if (result == 0) goto syntax_error;

    //Get Data to Post
    buffer = get_next_arg(end, &end);
    if (buffer[0] == 0) goto syntax_error;

    if (!check_end_of_args(end)) goto syntax_error;

   // TLV

   /* Client dependent part   */

    if (uri.objectId == 1024)
    {
        lwm2m_data_t * dataP;

        if (1 != sscanf(buffer, "%d", &value))
        {
            fprintf(stdout, "Invalid value !");
            return;
        }

        dataP = lwm2m_data_new(1);
        if (dataP == NULL)
        {
            fprintf(stdout, "Allocation error !");
            return;
        }
        lwm2m_data_encode_int(value, dataP);
        dataP->id = 1;

        format = LWM2M_CONTENT_TLV;
        temp_length = lwm2m_data_serialize(NULL, 1, dataP, &format, &temp_buffer);
    }
   /* End Client dependent part*/

    //Create
    result = lwm2m_dm_create(lwm2mH, clientId, &uri, format, temp_buffer, temp_length, prv_result_callback, NULL);

    if (result == 0)
    {
        fprintf(stdout, "OK");
    }
    else
    {
        prv_print_error(result);
    }
    return;

syntax_error:
    fprintf(stdout, "Syntax error !");
}

void prv_delete_client(char * buffer,
                              void * user_data)
{
    lwm2m_context_t * lwm2mH = (lwm2m_context_t *) user_data;
    uint16_t clientId;
    lwm2m_uri_t uri;
    char* end = NULL;
    int result;

    result = prv_read_id(buffer, &clientId);
    if (result != 1) goto syntax_error;

    buffer = get_next_arg(buffer, &end);
    if (buffer[0] == 0) goto syntax_error;

    result = lwm2m_stringToUri(buffer, end - buffer, &uri);
    if (result == 0) goto syntax_error;

    if (!check_end_of_args(end)) goto syntax_error;

    result = lwm2m_dm_delete(lwm2mH, clientId, &uri, prv_result_callback, NULL);

    if (result == 0)
    {
        fprintf(stdout, "OK");
    }
    else
    {
        prv_print_error(result);
    }
    return;

syntax_error:
    fprintf(stdout, "Syntax error !");
}

void prv_observe_client(char * buffer,
                               void * user_data)
{
    lwm2m_context_t * lwm2mH = (lwm2m_context_t *) user_data;
    uint16_t clientId;
    lwm2m_uri_t uri;
    char* end = NULL;
    int result;

    result = prv_read_id(buffer, &clientId);
    if (result != 1) goto syntax_error;

    buffer = get_next_arg(buffer, &end);
    if (buffer[0] == 0) goto syntax_error;

    result = lwm2m_stringToUri(buffer, end - buffer, &uri);
    if (result == 0) goto syntax_error;

    if (!check_end_of_args(end)) goto syntax_error;

    result = lwm2m_observe(lwm2mH, clientId, &uri, prv_notify_callback, NULL);

    if (result == 0)
    {
        fprintf(stdout, "OK");
    }
    else
    {
        prv_print_error(result);
    }
    return;

syntax_error:
    fprintf(stdout, "Syntax error !");
}

void prv_cancel_client(char * buffer,
                              void * user_data)
{
    lwm2m_context_t * lwm2mH = (lwm2m_context_t *) user_data;
    uint16_t clientId;
    lwm2m_uri_t uri;
    char* end = NULL;
    int result;

    result = prv_read_id(buffer, &clientId);
    if (result != 1) goto syntax_error;

    buffer = get_next_arg(buffer, &end);
    if (buffer[0] == 0) goto syntax_error;

    result = lwm2m_stringToUri(buffer, end - buffer, &uri);
    if (result == 0) goto syntax_error;

    if (!check_end_of_args(end)) goto syntax_error;

    result = lwm2m_observe_cancel(lwm2mH, clientId, &uri, prv_result_callback, NULL);

    if (result == 0)
    {
        fprintf(stdout, "OK");
    }
    else
    {
        prv_print_error(result);
    }
    return;

syntax_error:
    fprintf(stdout, "Syntax error !");
}

static void prv_monitor_callback(uint16_t clientID,
                                 lwm2m_uri_t * uriP,
                                 int status,
                                 lwm2m_media_type_t format,
                                 uint8_t * data,
                                 int dataLength,
                                 void * userData)
{
    lwm2m_context_t * lwm2mH = (lwm2m_context_t *) userData;
    lwm2m_client_t * targetP;
    LOG_I(lwm2m_s, "status %d", status);

    switch (status)
    {
    case COAP_201_CREATED:
        fprintf(stdout, "\r\nNew client #%d registered.\r\n", clientID);

        targetP = (lwm2m_client_t *)lwm2m_list_find((lwm2m_list_t *)lwm2mH->clientList, clientID);

        prv_dump_client(targetP);
        break;

    case COAP_202_DELETED:
        fprintf(stdout, "\r\nClient #%d unregistered.\r\n", clientID);
        break;

    case COAP_204_CHANGED:
        fprintf(stdout, "\r\nClient #%d updated.\r\n", clientID);

        targetP = (lwm2m_client_t *)lwm2m_list_find((lwm2m_list_t *)lwm2mH->clientList, clientID);

        prv_dump_client(targetP);
        break;

    default:
        fprintf(stdout, "\r\nMonitor callback called with an unknown status: %d.\r\n", status);
        break;
    }

    fprintf(stdout, "\r\n> ");
    fflush(stdout);
}


void prv_s_quit(char * buffer,
                     void * user_data)
{
    g_quit = 1;
}

static void handle_sigint(int signum)
{
    g_quit = 2;
}

static void print_usage(void)
{
    fprintf(stderr, "Usage: lwm2mserver [OPTION]\r\n");
    fprintf(stderr, "Launch a LWM2M server on localhost.\r\n\n");
    fprintf(stdout, "Options:\r\n");
    fprintf(stdout, "  -4\t\tUse IPv4 connection. Default: IPv6 connection\r\n");
    fprintf(stdout, "  -l PORT\tSet the local UDP port of the Server. Default: "LWM2M_STANDARD_PORT_STR"\r\n");
    fprintf(stdout, "\r\n");
}


//int main(int argc, char *argv[])
int lwm2m_server()
{
    int sock;
    fd_set readfds;
    struct timeval tv;
    int result;
    lwm2m_context_t * lwm2mH = NULL;
    int i;
    connection_t * connList = NULL;
    int addressFamily = AF_INET;//AF_INET6;
    int opt;
    const char * localPort = LWM2M_STANDARD_PORT_STR;

    command_desc_t commands[] =
    {
            {"list", "List registered clients.", NULL, prv_output_clients, NULL},
            {"read", "Read from a client.", " read CLIENT# URI\r\n"
                                            "   CLIENT#: client number as returned by command 'list'\r\n"
                                            "   URI: uri to read such as /3, /3/0/2, /1024/11, /1024/0/1\r\n"
                                            "Result will be displayed asynchronously.", prv_read_client, NULL},
            {"disc", "Discover resources of a client.", " disc CLIENT# URI\r\n"
                                            "   CLIENT#: client number as returned by command 'list'\r\n"
                                            "   URI: uri to discover such as /3, /3/0/2, /1024/11, /1024/0/1\r\n"
                                            "Result will be displayed asynchronously.", prv_discover_client, NULL},
            {"write", "Write to a client.", " write CLIENT# URI DATA\r\n"
                                            "   CLIENT#: client number as returned by command 'list'\r\n"
                                            "   URI: uri to write to such as /3, /3/0/2, /1024/11, /1024/0/1\r\n"
                                            "   DATA: data to write\r\n"
                                            "Result will be displayed asynchronously.", prv_write_client, NULL},
            {"time", "Write time-related attributes to a client.", " time CLIENT# URI PMIN PMAX\r\n"
                                            "   CLIENT#: client number as returned by command 'list'\r\n"
                                            "   URI: uri to write attributes to such as /3, /3/0/2, /1024/11, /1024/0/1\r\n"
                                            "   PMIN: Minimum period\r\n"
                                            "   PMAX: Maximum period\r\n"
                                            "Result will be displayed asynchronously.", prv_time_client, NULL},
            {"attr", "Write value-related attributes to a client.", " attr CLIENT# URI LT GT [STEP]\r\n"
                                            "   CLIENT#: client number as returned by command 'list'\r\n"
                                            "   URI: uri to write attributes to such as /3, /3/0/2, /1024/11, /1024/0/1\r\n"
                                            "   LT: \"Less than\" value\r\n"
                                            "   GT: \"Greater than\" value\r\n"
                                            "   STEP: \"Step\" value\r\n"
                                            "Result will be displayed asynchronously.", prv_attr_client, NULL},
            {"clear", "Clear attributes of a client.", " clear CLIENT# URI\r\n"
                                            "   CLIENT#: client number as returned by command 'list'\r\n"
                                            "   URI: uri to clear attributes of such as /3, /3/0/2, /1024/11, /1024/0/1\r\n"
                                            "Result will be displayed asynchronously.", prv_clear_client, NULL},
            {"exec", "Execute a client resource.", " exec CLIENT# URI\r\n"
                                            "   CLIENT#: client number as returned by command 'list'\r\n"
                                            "   URI: uri of the resource to execute such as /3/0/2\r\n"
                                            "Result will be displayed asynchronously.", prv_exec_client, NULL},
            {"del", "Delete a client Object instance.", " del CLIENT# URI\r\n"
                                            "   CLIENT#: client number as returned by command 'list'\r\n"
                                            "   URI: uri of the instance to delete such as /1024/11\r\n"
                                            "Result will be displayed asynchronously.", prv_delete_client, NULL},
            {"create", "create an Object instance.", " create CLIENT# URI DATA\r\n"
                                            "   CLIENT#: client number as returned by command 'list'\r\n"
                                            "   URI: uri to which create the Object Instance such as /1024, /1024/45 \r\n"
                                            "   DATA: data to initialize the new Object Instance (0-255 for object 1024) \r\n"
                                            "Result will be displayed asynchronously.", prv_create_client, NULL},
            {"observe", "Observe from a client.", " observe CLIENT# URI\r\n"
                                            "   CLIENT#: client number as returned by command 'list'\r\n"
                                            "   URI: uri to observe such as /3, /3/0/2, /1024/11\r\n"
                                            "Result will be displayed asynchronously.", prv_observe_client, NULL},
            {"cancel", "Cancel an observe.", " cancel CLIENT# URI\r\n"
                                            "   CLIENT#: client number as returned by command 'list'\r\n"
                                            "   URI: uri on which to cancel an observe such as /3, /3/0/2, /1024/11\r\n"
                                            "Result will be displayed asynchronously.", prv_cancel_client, NULL},

            {"q", "Quit the server.", NULL, prv_s_quit, NULL},

            COMMAND_END_LIST
    };

    opt = 1;
#if 0
    while (opt < argc)
    {
        if (argv[opt] == NULL
            || argv[opt][0] != '-'
            || argv[opt][2] != 0)
        {
            print_usage();
            return 0;
        }
        switch (argv[opt][1])
        {
        case '4':
            addressFamily = AF_INET;
            break;
        case 'l':
            opt++;
            if (opt >= argc)
            {
                print_usage();
                return 0;
            }
            localPort = argv[opt];
            break;
        default:
            print_usage();
            return 0;
        }
        opt += 1;
    }
#endif
    sock = create_socket(localPort, addressFamily);
    LOG_I(lwm2m_s, "socket id %d", sock);
    if (sock < 0)
    {
        fprintf(stderr, "Error opening socket: %d\r\n", errno);
        return -1;
    }

    lwm2mH = lwm2m_init(NULL);
    LOG_I(lwm2m_s, "lwm2mH %p", lwm2mH);
    if (NULL == lwm2mH)
    {
        fprintf(stderr, "lwm2m_init() failed\r\n");
        return -1;
    }
    lwm2mH->mode = SERVER_MODE;
    //signal(SIGINT, handle_sigint);

    for (i = 0 ; commands[i].name != NULL ; i++)
    {
        commands[i].userData = (void *)lwm2mH;
    }
    //fprintf(stdout, "> "); fflush(stdout);
    g_lwm2m_context = lwm2mH;

    lwm2m_set_monitoring_callback(lwm2mH, prv_monitor_callback, lwm2mH);

    while (0 == g_quit)
    {
        FD_ZERO(&readfds);
        FD_SET(sock, &readfds);
        FD_SET(STDIN_FILENO, &readfds);

        tv.tv_sec = 60;
        tv.tv_usec = 0;

        result = lwm2m_step(lwm2mH, &(tv.tv_sec));
        if (result != 0)
        {
            LOG_I(lwm2m_s, "lwm2m_step() failed: 0x%X", result);
            fprintf(stderr, "lwm2m_step() failed: 0x%X\r\n", result);
            return -1;
        }

        result = select(FD_SETSIZE, &readfds, 0, 0, &tv);
        LOG_I(lwm2m_s, "select result %d", result);
        if ( result < 0 )
        {
            if (errno != EINTR)
            {
              fprintf(stderr, "Error in select(): %d\r\n", errno);
            }
        }
        else if (result > 0)
        {
            uint8_t buffer[MAX_PACKET_SIZE];
            int numBytes;

            if (FD_ISSET(sock, &readfds))
            {
                struct sockaddr_storage addr;
                socklen_t addrLen;

                addrLen = sizeof(addr);
                numBytes = recvfrom(sock, buffer, MAX_PACKET_SIZE, 0, (struct sockaddr *)&addr, &addrLen);

                if (numBytes == -1)
                {
                    fprintf(stderr, "Error in recvfrom(): %d\r\n", errno);
                }
                else
                {
                    char s[INET6_ADDRSTRLEN];
                    in_port_t port;
                    connection_t * connP;

					s[0] = 0;
                    if (AF_INET == addr.ss_family)
                    {
                        struct sockaddr_in *saddr = (struct sockaddr_in *)&addr;
                        inet_ntop(saddr->sin_family, &saddr->sin_addr, s, INET6_ADDRSTRLEN);
                        port = saddr->sin_port;
                    }
                    else if (AF_INET6 == addr.ss_family)
                    {
                        struct sockaddr_in6 *saddr = (struct sockaddr_in6 *)&addr;
                        inet_ntop(saddr->sin6_family, &saddr->sin6_addr, s, INET6_ADDRSTRLEN);
                        port = saddr->sin6_port;
                    }

                    fprintf(stderr, "%d bytes received from [%s]:%hu\r\n", numBytes, s, ntohs(port));
                    output_buffer(stderr, buffer, numBytes, 0);

                    connP = connection_find(connList, &addr, addrLen);
                    if (connP == NULL)
                    {
                        connP = connection_new_incoming(connList, sock, (struct sockaddr *)&addr, addrLen);
                        if (connP != NULL)
                        {
                            connList = connP;
                        }
                    }
                    if (connP != NULL)
                    {
                        lwm2m_handle_packet(lwm2mH, buffer, numBytes, connP);
                    }
                }
            }
            else if (FD_ISSET(STDIN_FILENO, &readfds))
            {
                numBytes = read(STDIN_FILENO, buffer, MAX_PACKET_SIZE - 1);

                if (numBytes > 1)
                {
                    buffer[numBytes] = 0;
                    handle_command(commands, (char*)buffer);
                    fprintf(stdout, "\r\n");
                }
                if (g_quit == 0)
                {
                    fprintf(stdout, "> ");
                    fflush(stdout);
                }
                else
                {
                    fprintf(stdout, "\r\n");
                }
            }
        }
        vTaskDelay(1000 / portTICK_RATE_MS); // release CPU
    }

    lwm2m_close(lwm2mH);
    close(sock);
    connection_free(connList);

#ifdef MEMORY_TRACE
    if (g_quit == 1)
    {
        trace_print(0, 1);
    }
#endif

    return 0;
}


void prv_output_clients_ex(uint8_t len, char *param[])
{
    prv_output_clients(NULL, (void *)g_lwm2m_context);
}


void prv_read_client_ex(uint8_t len, char *param[])
{
    char *buff = NULL;
    int buff_len, i;
    buff = (char *)pvPortMalloc(100);
    memset(buff, 0, 100);
    for(i = 0; i < len; i++) {
        buff_len = strlen(buff);
        strcpy(buff + buff_len, param[i]);
        buff_len = strlen(buff);
        buff[buff_len] = ' ';
    }
    LOG_I(lwm2m_s, "read: %s", buff);
    prv_read_client(buff, (void *)g_lwm2m_context);
    vPortFree(buff);
}

void prv_discover_client_ex(uint8_t len, char *param[])
{
    char *buff = NULL;
    int buff_len, i;
    buff = (char *)pvPortMalloc(100);
    memset(buff, 0, 100);
    for(i = 0; i < len; i++) {
        buff_len = strlen(buff);
        strcpy(buff + buff_len, param[i]);
        buff_len = strlen(buff);
        buff[buff_len] = ' ';
    }
    LOG_I(lwm2m_s, "discover: %s", buff);
    prv_discover_client(buff, (void *)g_lwm2m_context);
    vPortFree(buff);
}

extern void prv_write_client_ex(uint8_t len, char *param[])
{
    char *buff = NULL;
    int buff_len, i;
    buff = (char *)pvPortMalloc(100);
    memset(buff, 0, 100);
    for(i = 0; i < len; i++) {
        buff_len = strlen(buff);
        strcpy(buff + buff_len, param[i]);
        buff_len = strlen(buff);
        buff[buff_len] = ' ';
    }
    LOG_I(lwm2m_s, "write: %s", buff);
    prv_write_client(buff, (void *)g_lwm2m_context);
    vPortFree(buff);
}

void prv_time_client_ex(uint8_t len, char *param[])
{
    char *buff = NULL;
    int buff_len, i;
    buff = (char *)pvPortMalloc(100);
    memset(buff, 0, 100);
    for(i = 0; i < len; i++) {
        buff_len = strlen(buff);
        strcpy(buff + buff_len, param[i]);
        buff_len = strlen(buff);
        buff[buff_len] = ' ';
    }
    LOG_I(lwm2m_s, "time: %s", buff);
    prv_time_client(buff, (void *)g_lwm2m_context);
    vPortFree(buff);
}

void prv_attr_client_ex(uint8_t len, char *param[])
{
    char *buff = NULL;
    int buff_len, i;
    buff = (char *)pvPortMalloc(100);
    memset(buff, 0, 100);
    for(i = 0; i < len; i++) {
        buff_len = strlen(buff);
        strcpy(buff + buff_len, param[i]);
        buff_len = strlen(buff);
        buff[buff_len] = ' ';
    }
    LOG_I(lwm2m_s, "attr: %s", buff);
    prv_attr_client(buff, (void *)g_lwm2m_context);
    vPortFree(buff);
}

void prv_clear_client_ex(uint8_t len, char *param[])
{
    char *buff = NULL;
    int buff_len, i;
    buff = (char *)pvPortMalloc(100);
    memset(buff, 0, 100);
    for(i = 0; i < len; i++) {
        buff_len = strlen(buff);
        strcpy(buff + buff_len, param[i]);
        buff_len = strlen(buff);
        buff[buff_len] = ' ';
    }
    LOG_I(lwm2m_s, "clear: %s", buff);
    prv_clear_client(buff, (void *)g_lwm2m_context);
    vPortFree(buff);
}

void prv_exec_client_ex(uint8_t len, char *param[])
{
    char *buff = NULL;
    int buff_len, i;
    buff = (char *)pvPortMalloc(100);
    memset(buff, 0, 100);
    for(i = 0; i < len; i++) {
        buff_len = strlen(buff);
        strcpy(buff + buff_len, param[i]);
        buff_len = strlen(buff);
        buff[buff_len] = ' ';
    }
    LOG_I(lwm2m_s, "exec: %s", buff);
    prv_exec_client(buff, (void *)g_lwm2m_context);
    vPortFree(buff);
}

void prv_delete_client_ex(uint8_t len, char *param[])
{
    char *buff = NULL;
    int buff_len, i;
    buff = (char *)pvPortMalloc(100);
    memset(buff, 0, 100);
    for(i = 0; i < len; i++) {
        buff_len = strlen(buff);
        strcpy(buff + buff_len, param[i]);
        buff_len = strlen(buff);
        buff[buff_len] = ' ';
    }
    LOG_I(lwm2m_s, "delete: %s", buff);
    prv_delete_client(buff, (void *)g_lwm2m_context);
    vPortFree(buff);
}

void prv_create_client_ex(uint8_t len, char *param[])
{
    char *buff = NULL;
    int buff_len, i;
    buff = (char *)pvPortMalloc(100);
    memset(buff, 0, 100);
    for(i = 0; i < len; i++) {
        buff_len = strlen(buff);
        strcpy(buff + buff_len, param[i]);
        buff_len = strlen(buff);
        buff[buff_len] = ' ';
    }
    LOG_I(lwm2m_s, "create: %s", buff);
    prv_create_client(buff, (void *)g_lwm2m_context);
    vPortFree(buff);
}

void prv_observe_client_ex(uint8_t len, char *param[])
{
    char *buff = NULL;
    int buff_len, i;
    buff = (char *)pvPortMalloc(100);
    memset(buff, 0, 100);
    for(i = 0; i < len; i++) {
        buff_len = strlen(buff);
        strcpy(buff + buff_len, param[i]);
        buff_len = strlen(buff);
        buff[buff_len] = ' ';
    }
    LOG_I(lwm2m_s, "observe: %s", buff);
    prv_observe_client(buff, (void *)g_lwm2m_context);
    vPortFree(buff);
}

void prv_cancel_client_ex(uint8_t len, char *param[])
{
    char *buff = NULL;
    int buff_len, i;
    buff = (char *)pvPortMalloc(100);
    memset(buff, 0, 100);
    for(i = 0; i < len; i++) {
        buff_len = strlen(buff);
        strcpy(buff + buff_len, param[i]);
        buff_len = strlen(buff);
        buff[buff_len] = ' ';
    }
    LOG_I(lwm2m_s, "cancel: %s", buff);
    prv_cancel_client(buff, (void *)g_lwm2m_context);
    vPortFree(buff);
}


#endif /* LWM2M_SERVER_MODE */
