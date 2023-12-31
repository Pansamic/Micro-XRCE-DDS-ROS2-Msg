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
 * @file GridCells.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _GridCells_H_
#define _GridCells_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>
#include "geometry_msgs/msg/Point.h"
#include "std_msgs/msg/Header.h"

typedef struct nav_msgs_msg_GridCells
{
    std_msgs_msg_Header header;
    float cell_width;
    float cell_height;
    uint32_t cells_size;
    geometry_msgs_msg_Point cells[100];

} nav_msgs_msg_GridCells;

struct ucdrBuffer;

bool nav_msgs_msg_GridCells_serialize_topic(struct ucdrBuffer* writer, const nav_msgs_msg_GridCells* topic);
bool nav_msgs_msg_GridCells_deserialize_topic(struct ucdrBuffer* reader, nav_msgs_msg_GridCells* topic);
uint32_t nav_msgs_msg_GridCells_size_of_topic(const nav_msgs_msg_GridCells* topic, uint32_t size);


#ifdef __cplusplus
}
#endif

#endif // _GridCells_H_