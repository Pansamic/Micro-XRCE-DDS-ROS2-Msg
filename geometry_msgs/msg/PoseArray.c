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
 * @file PoseArray.c
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#include "geometry_msgs/msg/PoseArray.h"

#include <ucdr/microcdr.h>
#include <string.h>

bool geometry_msgs_msg_PoseArray_serialize_topic(ucdrBuffer* writer, const geometry_msgs_msg_PoseArray* topic)
{
    bool success = true;

        success &= std_msgs_msg_Header_serialize_topic(writer, &topic->header);
        success &= ucdr_serialize_uint32_t(writer, topic->poses_size);
        for(size_t i = 0; i < topic->poses_size; ++i)
        {
            success &= geometry_msgs_msg_Pose_serialize_topic(writer, &topic->poses[i]);
        }

    return success && !writer->error;
}

bool geometry_msgs_msg_PoseArray_deserialize_topic(ucdrBuffer* reader, geometry_msgs_msg_PoseArray* topic)
{
    bool success = true;

        success &= std_msgs_msg_Header_deserialize_topic(reader, &topic->header);
        success &= ucdr_deserialize_uint32_t(reader, &topic->poses_size);
        if(topic->poses_size > 100)
        {
            reader->error = true;
        }
        else
        {
            for(size_t i = 0; i < topic->poses_size; ++i)
            {
                success &= geometry_msgs_msg_Pose_deserialize_topic(reader, &topic->poses[i]);
            }
        }

    return success && !reader->error;
}

uint32_t geometry_msgs_msg_PoseArray_size_of_topic(const geometry_msgs_msg_PoseArray* topic, uint32_t size)
{
    uint32_t previousSize = size;
        size += std_msgs_msg_Header_size_of_topic(&topic->header, size);
        size += ucdr_alignment(size, 4) + 4;
        for(size_t i = 0; i < topic->poses_size; ++i)
        {
            size += geometry_msgs_msg_Pose_size_of_topic(&topic->poses[i], size);
        }

    return size - previousSize;
}
