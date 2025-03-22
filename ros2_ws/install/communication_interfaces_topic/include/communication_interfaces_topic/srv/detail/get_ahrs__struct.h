// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_interfaces_topic:srv/GetAHRS.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__SRV__DETAIL__GET_AHRS__STRUCT_H_
#define COMMUNICATION_INTERFACES_TOPIC__SRV__DETAIL__GET_AHRS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetAHRS in the package communication_interfaces_topic.
typedef struct communication_interfaces_topic__srv__GetAHRS_Request
{
  uint8_t structure_needs_at_least_one_member;
} communication_interfaces_topic__srv__GetAHRS_Request;

// Struct for a sequence of communication_interfaces_topic__srv__GetAHRS_Request.
typedef struct communication_interfaces_topic__srv__GetAHRS_Request__Sequence
{
  communication_interfaces_topic__srv__GetAHRS_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces_topic__srv__GetAHRS_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'ahrs_data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/GetAHRS in the package communication_interfaces_topic.
typedef struct communication_interfaces_topic__srv__GetAHRS_Response
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__float__Sequence ahrs_data;
} communication_interfaces_topic__srv__GetAHRS_Response;

// Struct for a sequence of communication_interfaces_topic__srv__GetAHRS_Response.
typedef struct communication_interfaces_topic__srv__GetAHRS_Response__Sequence
{
  communication_interfaces_topic__srv__GetAHRS_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces_topic__srv__GetAHRS_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES_TOPIC__SRV__DETAIL__GET_AHRS__STRUCT_H_
