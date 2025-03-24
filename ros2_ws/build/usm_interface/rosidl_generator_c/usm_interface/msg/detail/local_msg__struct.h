// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from usm_interface:msg/LocalMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__LOCAL_MSG__STRUCT_H_
#define USM_INTERFACE__MSG__DETAIL__LOCAL_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/LocalMsg in the package usm_interface.
typedef struct usm_interface__msg__LocalMsg
{
  double x;
  double y;
  double z;
  double height;
  double depth;
} usm_interface__msg__LocalMsg;

// Struct for a sequence of usm_interface__msg__LocalMsg.
typedef struct usm_interface__msg__LocalMsg__Sequence
{
  usm_interface__msg__LocalMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usm_interface__msg__LocalMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USM_INTERFACE__MSG__DETAIL__LOCAL_MSG__STRUCT_H_
