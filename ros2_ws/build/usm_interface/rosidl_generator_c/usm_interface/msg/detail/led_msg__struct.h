// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from usm_interface:msg/LedMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__LED_MSG__STRUCT_H_
#define USM_INTERFACE__MSG__DETAIL__LED_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/LedMsg in the package usm_interface.
typedef struct usm_interface__msg__LedMsg
{
  int32_t led_id;
  bool on;
} usm_interface__msg__LedMsg;

// Struct for a sequence of usm_interface__msg__LedMsg.
typedef struct usm_interface__msg__LedMsg__Sequence
{
  usm_interface__msg__LedMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usm_interface__msg__LedMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USM_INTERFACE__MSG__DETAIL__LED_MSG__STRUCT_H_
