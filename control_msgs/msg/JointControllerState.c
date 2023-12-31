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
 * @file JointControllerState.c
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#include "control_msgs/msg/JointControllerState.h"

#include <ucdr/microcdr.h>
#include <string.h>

bool control_msgs_msg_JointControllerState_serialize_topic(ucdrBuffer* writer, const control_msgs_msg_JointControllerState* topic)
{
    bool success = true;

        success &= std_msgs_msg_Header_serialize_topic(writer, &topic->header);
        success &= ucdr_serialize_double(writer, topic->set_point);

        success &= ucdr_serialize_double(writer, topic->process_value);

        success &= ucdr_serialize_double(writer, topic->process_value_dot);

        success &= ucdr_serialize_double(writer, topic->error);

        success &= ucdr_serialize_double(writer, topic->time_step);

        success &= ucdr_serialize_double(writer, topic->command);

        success &= ucdr_serialize_double(writer, topic->p);

        success &= ucdr_serialize_double(writer, topic->i);

        success &= ucdr_serialize_double(writer, topic->d);

        success &= ucdr_serialize_double(writer, topic->i_clamp);

        success &= ucdr_serialize_bool(writer, topic->antiwindup);

    return success && !writer->error;
}

bool control_msgs_msg_JointControllerState_deserialize_topic(ucdrBuffer* reader, control_msgs_msg_JointControllerState* topic)
{
    bool success = true;

        success &= std_msgs_msg_Header_deserialize_topic(reader, &topic->header);
        success &= ucdr_deserialize_double(reader, &topic->set_point);

        success &= ucdr_deserialize_double(reader, &topic->process_value);

        success &= ucdr_deserialize_double(reader, &topic->process_value_dot);

        success &= ucdr_deserialize_double(reader, &topic->error);

        success &= ucdr_deserialize_double(reader, &topic->time_step);

        success &= ucdr_deserialize_double(reader, &topic->command);

        success &= ucdr_deserialize_double(reader, &topic->p);

        success &= ucdr_deserialize_double(reader, &topic->i);

        success &= ucdr_deserialize_double(reader, &topic->d);

        success &= ucdr_deserialize_double(reader, &topic->i_clamp);

        success &= ucdr_deserialize_bool(reader, &topic->antiwindup);

    return success && !reader->error;
}

uint32_t control_msgs_msg_JointControllerState_size_of_topic(const control_msgs_msg_JointControllerState* topic, uint32_t size)
{
    uint32_t previousSize = size;
        size += std_msgs_msg_Header_size_of_topic(&topic->header, size);
        size += ucdr_alignment(size, 8) + 8;

        size += ucdr_alignment(size, 8) + 8;

        size += ucdr_alignment(size, 8) + 8;

        size += ucdr_alignment(size, 8) + 8;

        size += ucdr_alignment(size, 8) + 8;

        size += ucdr_alignment(size, 8) + 8;

        size += ucdr_alignment(size, 8) + 8;

        size += ucdr_alignment(size, 8) + 8;

        size += ucdr_alignment(size, 8) + 8;

        size += ucdr_alignment(size, 8) + 8;

        size += ucdr_alignment(size, 1) + 1;

    return size - previousSize;
}
