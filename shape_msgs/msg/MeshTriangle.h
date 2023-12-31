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
 * @file MeshTriangle.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _MeshTriangle_H_
#define _MeshTriangle_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>


typedef struct shape_msgs_msg_MeshTriangle
{
    uint32_t vertex_indices[3];} shape_msgs_msg_MeshTriangle;

struct ucdrBuffer;

bool shape_msgs_msg_MeshTriangle_serialize_topic(struct ucdrBuffer* writer, const shape_msgs_msg_MeshTriangle* topic);
bool shape_msgs_msg_MeshTriangle_deserialize_topic(struct ucdrBuffer* reader, shape_msgs_msg_MeshTriangle* topic);
uint32_t shape_msgs_msg_MeshTriangle_size_of_topic(const shape_msgs_msg_MeshTriangle* topic, uint32_t size);


#ifdef __cplusplus
}
#endif

#endif // _MeshTriangle_H_