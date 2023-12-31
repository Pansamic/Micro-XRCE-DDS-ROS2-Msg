// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file MetricsMessage.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _MetricsMessage_H_
#define _MetricsMessage_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>
#include "builtin_interfaces/msg/Time.h"
#include "StatisticDataPoint.h"

typedef struct statistics_msgs_msg_MetricsMessage
{
    char measurement_source_name[255];

    char metrics_source[255];

    char unit[255];

    builtin_interfaces_msg_Time window_start;
    builtin_interfaces_msg_Time window_stop;
    uint32_t statistics_size;
    statistics_msgs_msg_StatisticDataPoint statistics[100];

} statistics_msgs_msg_MetricsMessage;

struct ucdrBuffer;

bool statistics_msgs_msg_MetricsMessage_serialize_topic(struct ucdrBuffer* writer, const statistics_msgs_msg_MetricsMessage* topic);
bool statistics_msgs_msg_MetricsMessage_deserialize_topic(struct ucdrBuffer* reader, statistics_msgs_msg_MetricsMessage* topic);
uint32_t statistics_msgs_msg_MetricsMessage_size_of_topic(const statistics_msgs_msg_MetricsMessage* topic, uint32_t size);


#ifdef __cplusplus
}
#endif

#endif // _MetricsMessage_H_