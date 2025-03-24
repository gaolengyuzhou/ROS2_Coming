// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from usm_interface:msg/ErrorMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__ERROR_MSG__STRUCT_H_
#define USM_INTERFACE__MSG__DETAIL__ERROR_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/ErrorMsg in the package usm_interface.
typedef struct usm_interface__msg__ErrorMsg
{
  std_msgs__msg__Header header;
  double x;
  double y;
  double z;
} usm_interface__msg__ErrorMsg;

// Struct for a sequence of usm_interface__msg__ErrorMsg.
typedef struct usm_interface__msg__ErrorMsg__Sequence
{
  usm_interface__msg__ErrorMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usm_interface__msg__ErrorMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USM_INTERFACE__MSG__DETAIL__ERROR_MSG__STRUCT_H_
