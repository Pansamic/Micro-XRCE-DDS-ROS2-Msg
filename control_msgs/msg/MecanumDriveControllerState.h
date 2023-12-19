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
 * @file MecanumDriveControllerState.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _MecanumDriveControllerState_H_
#define _MecanumDriveControllerState_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>
#include "geometry_msgs/msg/Twist.h"
#include "std_msgs/msg/Header.h"

typedef struct control_msgs_msg_MecanumDriveControllerState
{
    std_msgs_msg_Header header;
    double front_left_wheel_velocity;
    double back_left_wheel_velocity;
    double back_right_wheel_velocity;
    double front_right_wheel_velocity;
    geometry_msgs_msg_Twist reference_velocity;
} control_msgs_msg_MecanumDriveControllerState;

struct ucdrBuffer;

bool control_msgs_msg_MecanumDriveControllerState_serialize_topic(struct ucdrBuffer* writer, const control_msgs_msg_MecanumDriveControllerState* topic);
bool control_msgs_msg_MecanumDriveControllerState_deserialize_topic(struct ucdrBuffer* reader, control_msgs_msg_MecanumDriveControllerState* topic);
uint32_t control_msgs_msg_MecanumDriveControllerState_size_of_topic(const control_msgs_msg_MecanumDriveControllerState* topic, uint32_t size);


#ifdef __cplusplus
}
#endif

#endif // _MecanumDriveControllerState_H_