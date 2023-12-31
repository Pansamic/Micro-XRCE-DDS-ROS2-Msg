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
 * @file NavSatStatus.c
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#include "sensor_msgs/msg/NavSatStatus.h"

#include <ucdr/microcdr.h>
#include <string.h>









bool sensor_msgs_msg_NavSatStatus_serialize_topic(ucdrBuffer* writer, const sensor_msgs_msg_NavSatStatus* topic)
{
    bool success = true;

        success &= ucdr_serialize_int8_t(writer, topic->status);

        success &= ucdr_serialize_uint16_t(writer, topic->service);

    return success && !writer->error;
}

bool sensor_msgs_msg_NavSatStatus_deserialize_topic(ucdrBuffer* reader, sensor_msgs_msg_NavSatStatus* topic)
{
    bool success = true;

        success &= ucdr_deserialize_int8_t(reader, &topic->status);

        success &= ucdr_deserialize_uint16_t(reader, &topic->service);

    return success && !reader->error;
}

uint32_t sensor_msgs_msg_NavSatStatus_size_of_topic(const sensor_msgs_msg_NavSatStatus* topic, uint32_t size)
{
    uint32_t previousSize = size;
        size += ucdr_alignment(size, 1) + 1;

        size += ucdr_alignment(size, 2) + 2;

    return size - previousSize;
}
