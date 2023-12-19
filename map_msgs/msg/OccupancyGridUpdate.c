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
 * @file OccupancyGridUpdate.c
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#include "map_msgs/msg/OccupancyGridUpdate.h"

#include <ucdr/microcdr.h>
#include <string.h>

bool map_msgs_msg_OccupancyGridUpdate_serialize_topic(ucdrBuffer* writer, const map_msgs_msg_OccupancyGridUpdate* topic)
{
    bool success = true;

        success &= std_msgs_msg_Header_serialize_topic(writer, &topic->header);
        success &= ucdr_serialize_int32_t(writer, topic->x);

        success &= ucdr_serialize_int32_t(writer, topic->y);

        success &= ucdr_serialize_uint32_t(writer, topic->width);

        success &= ucdr_serialize_uint32_t(writer, topic->height);

        success &= ucdr_serialize_sequence_int8_t(writer, topic->data, topic->data_size);

    return success && !writer->error;
}

bool map_msgs_msg_OccupancyGridUpdate_deserialize_topic(ucdrBuffer* reader, map_msgs_msg_OccupancyGridUpdate* topic)
{
    bool success = true;

        success &= std_msgs_msg_Header_deserialize_topic(reader, &topic->header);
        success &= ucdr_deserialize_int32_t(reader, &topic->x);

        success &= ucdr_deserialize_int32_t(reader, &topic->y);

        success &= ucdr_deserialize_uint32_t(reader, &topic->width);

        success &= ucdr_deserialize_uint32_t(reader, &topic->height);

        success &= ucdr_deserialize_sequence_int8_t(reader, topic->data, 100, &topic->data_size);

    return success && !reader->error;
}

uint32_t map_msgs_msg_OccupancyGridUpdate_size_of_topic(const map_msgs_msg_OccupancyGridUpdate* topic, uint32_t size)
{
    uint32_t previousSize = size;
        size += std_msgs_msg_Header_size_of_topic(&topic->header, size);
        size += ucdr_alignment(size, 4) + 4;

        size += ucdr_alignment(size, 4) + 4;

        size += ucdr_alignment(size, 4) + 4;

        size += ucdr_alignment(size, 4) + 4;

        size += ucdr_alignment(size, 4) + 4;
        size += ucdr_alignment(size, 1) + topic->data_size * 1;

    return size - previousSize;
}