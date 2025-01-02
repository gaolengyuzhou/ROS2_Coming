// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from calc_interfaces:srv/CalcTree.idl
// generated code does not contain a copyright notice

#ifndef CALC_INTERFACES__SRV__DETAIL__CALC_TREE__STRUCT_H_
#define CALC_INTERFACES__SRV__DETAIL__CALC_TREE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CalcTree in the package calc_interfaces.
typedef struct calc_interfaces__srv__CalcTree_Request
{
  int32_t a;
  int32_t b;
  int32_t c;
} calc_interfaces__srv__CalcTree_Request;

// Struct for a sequence of calc_interfaces__srv__CalcTree_Request.
typedef struct calc_interfaces__srv__CalcTree_Request__Sequence
{
  calc_interfaces__srv__CalcTree_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calc_interfaces__srv__CalcTree_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CalcTree in the package calc_interfaces.
typedef struct calc_interfaces__srv__CalcTree_Response
{
  int32_t sum;
  int32_t prod;
} calc_interfaces__srv__CalcTree_Response;

// Struct for a sequence of calc_interfaces__srv__CalcTree_Response.
typedef struct calc_interfaces__srv__CalcTree_Response__Sequence
{
  calc_interfaces__srv__CalcTree_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calc_interfaces__srv__CalcTree_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CALC_INTERFACES__SRV__DETAIL__CALC_TREE__STRUCT_H_
