// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from usm_interface:msg/JointMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__JOINT_MSG__STRUCT_H_
#define USM_INTERFACE__MSG__DETAIL__JOINT_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'all_controller_msg'
#include "communication_interfaces/msg/detail/thruster_msg__struct.h"

// Struct defined in msg/JointMsg in the package usm_interface.
typedef struct usm_interface__msg__JointMsg
{
  communication_interfaces__msg__ThrusterMsg__Sequence all_controller_msg;
} usm_interface__msg__JointMsg;

// Struct for a sequence of usm_interface__msg__JointMsg.
typedef struct usm_interface__msg__JointMsg__Sequence
{
  usm_interface__msg__JointMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usm_interface__msg__JointMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USM_INTERFACE__MSG__DETAIL__JOINT_MSG__STRUCT_H_
