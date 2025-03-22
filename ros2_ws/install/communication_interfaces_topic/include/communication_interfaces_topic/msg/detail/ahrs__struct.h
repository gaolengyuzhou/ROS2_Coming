// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_interfaces_topic:msg/AHRS.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__AHRS__STRUCT_H_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__AHRS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/AHRS in the package communication_interfaces_topic.
typedef struct communication_interfaces_topic__msg__AHRS
{
  builtin_interfaces__msg__Time stamp;
  float ahrs_data[6];
} communication_interfaces_topic__msg__AHRS;

// Struct for a sequence of communication_interfaces_topic__msg__AHRS.
typedef struct communication_interfaces_topic__msg__AHRS__Sequence
{
  communication_interfaces_topic__msg__AHRS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces_topic__msg__AHRS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__AHRS__STRUCT_H_
