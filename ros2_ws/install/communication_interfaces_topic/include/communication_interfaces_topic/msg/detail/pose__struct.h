// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_interfaces_topic:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__POSE__STRUCT_H_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose_data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Pose in the package communication_interfaces_topic.
typedef struct communication_interfaces_topic__msg__Pose
{
  rosidl_runtime_c__float__Sequence pose_data;
} communication_interfaces_topic__msg__Pose;

// Struct for a sequence of communication_interfaces_topic__msg__Pose.
typedef struct communication_interfaces_topic__msg__Pose__Sequence
{
  communication_interfaces_topic__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces_topic__msg__Pose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__POSE__STRUCT_H_
