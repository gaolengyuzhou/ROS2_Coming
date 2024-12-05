// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces1:srv/Sermsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES1__SRV__DETAIL__SERMSG__STRUCT_H_
#define INTERFACES1__SRV__DETAIL__SERMSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Sermsg in the package interfaces1.
typedef struct interfaces1__srv__Sermsg_Request
{
  int32_t a;
  int32_t b;
  int32_t c;
} interfaces1__srv__Sermsg_Request;

// Struct for a sequence of interfaces1__srv__Sermsg_Request.
typedef struct interfaces1__srv__Sermsg_Request__Sequence
{
  interfaces1__srv__Sermsg_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces1__srv__Sermsg_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Sermsg in the package interfaces1.
typedef struct interfaces1__srv__Sermsg_Response
{
  int32_t sum;
  int32_t prod;
} interfaces1__srv__Sermsg_Response;

// Struct for a sequence of interfaces1__srv__Sermsg_Response.
typedef struct interfaces1__srv__Sermsg_Response__Sequence
{
  interfaces1__srv__Sermsg_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces1__srv__Sermsg_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES1__SRV__DETAIL__SERMSG__STRUCT_H_
