/*
 * Copyright (c) 2019, Inria.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef PROJECT_CONF_H
#define PROJECT_CONF_H

#if WITH_SECURITY
#define LLSEC802154_CONF_ENABLED 1
#endif /* WITH_SECURITY */

/* Prefix all logs with file name and line-of-code */
#define LOG_CONF_WITH_LOC   1

#define LOG_CONF_LEVEL_RPL                         LOG_LEVEL_INFO
#define LOG_CONF_LEVEL_TCPIP                        LOG_LEVEL_NONE
#define LOG_CONF_LEVEL_IPV6                        LOG_LEVEL_INFO
#define LOG_CONF_LEVEL_6LOWPAN                     LOG_LEVEL_INFO
#define LOG_CONF_LEVEL_NULLNET                     LOG_LEVEL_NONE
#define LOG_CONF_LEVEL_MAC                          LOG_LEVEL_INFO
//#define LOG_CONF_LEVEL_FRAMER                      LOG_LEVEL_NONE
#define LOG_CONF_LEVEL_6TOP                        LOG_LEVEL_NONE
#define LOG_CONF_LEVEL_COAP                        LOG_LEVEL_NONE
#define LOG_CONF_LEVEL_SNMP                        LOG_LEVEL_NONE
#define LOG_CONF_LEVEL_LWM2M                       LOG_LEVEL_NONE
#define LOG_CONF_LEVEL_MAIN                        LOG_LEVEL_INFO
#define LOG_CONF_LEVEL_SYS                         LOG_LEVEL_NONE


#endif /* PROJECT_CONF_H */
