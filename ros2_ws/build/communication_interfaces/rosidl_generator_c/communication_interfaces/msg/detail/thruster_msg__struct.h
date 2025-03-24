// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_interfaces:msg/ThrusterMsg.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__THRUSTER_MSG__STRUCT_H_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__THRUSTER_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ThrusterMsg in the package communication_interfaces.
typedef struct communication_interfaces__msg__ThrusterMsg
{
  int32_t controller_id;
  double controller_set;
} communication_interfaces__msg__ThrusterMsg;

// Struct for a sequence of communication_interfaces__msg__ThrusterMsg.
typedef struct communication_interfaces__msg__ThrusterMsg__Sequence
{
  communication_interfaces__msg__ThrusterMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces__msg__ThrusterMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__THRUSTER_MSG__STRUCT_H_
