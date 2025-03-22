// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_interfaces_topic:msg/DVL.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__DVL__STRUCT_H_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__DVL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/DVL in the package communication_interfaces_topic.
typedef struct communication_interfaces_topic__msg__DVL
{
  double dvl_data[9];
} communication_interfaces_topic__msg__DVL;

// Struct for a sequence of communication_interfaces_topic__msg__DVL.
typedef struct communication_interfaces_topic__msg__DVL__Sequence
{
  communication_interfaces_topic__msg__DVL * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces_topic__msg__DVL__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__DVL__STRUCT_H_
