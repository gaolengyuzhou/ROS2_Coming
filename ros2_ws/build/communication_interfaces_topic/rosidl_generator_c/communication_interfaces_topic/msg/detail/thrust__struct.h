// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_interfaces_topic:msg/Thrust.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__THRUST__STRUCT_H_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__THRUST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Thrust in the package communication_interfaces_topic.
typedef struct communication_interfaces_topic__msg__Thrust
{
  float thrust_data[12];
} communication_interfaces_topic__msg__Thrust;

// Struct for a sequence of communication_interfaces_topic__msg__Thrust.
typedef struct communication_interfaces_topic__msg__Thrust__Sequence
{
  communication_interfaces_topic__msg__Thrust * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces_topic__msg__Thrust__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__THRUST__STRUCT_H_
