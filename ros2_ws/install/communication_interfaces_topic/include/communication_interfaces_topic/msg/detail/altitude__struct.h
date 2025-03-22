// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_interfaces_topic:msg/Altitude.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__ALTITUDE__STRUCT_H_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__ALTITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tau'
// Member 'f_thr'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Altitude in the package communication_interfaces_topic.
typedef struct communication_interfaces_topic__msg__Altitude
{
  float p_row;
  float p_pitch;
  float p_yaw;
  float p_x;
  float p_y;
  float p_z;
  float p_row_set;
  float p_pitch_set;
  float p_yaw_set;
  float p_x_set;
  float p_y_set;
  float p_z_set;
  float p_row_e;
  float p_pitch_e;
  float p_yaw_e;
  float p_x_e;
  float p_y_e;
  float p_z_e;
  rosidl_runtime_c__float__Sequence tau;
  rosidl_runtime_c__float__Sequence f_thr;
  float p1;
  float p2;
} communication_interfaces_topic__msg__Altitude;

// Struct for a sequence of communication_interfaces_topic__msg__Altitude.
typedef struct communication_interfaces_topic__msg__Altitude__Sequence
{
  communication_interfaces_topic__msg__Altitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces_topic__msg__Altitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__ALTITUDE__STRUCT_H_
