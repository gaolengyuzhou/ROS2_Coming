// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from usm_interface:msg/LocalMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "usm_interface/msg/detail/local_msg__rosidl_typesupport_introspection_c.h"
#include "usm_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "usm_interface/msg/detail/local_msg__functions.h"
#include "usm_interface/msg/detail/local_msg__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LocalMsg__rosidl_typesupport_introspection_c__LocalMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  usm_interface__msg__LocalMsg__init(message_memory);
}

void LocalMsg__rosidl_typesupport_introspection_c__LocalMsg_fini_function(void * message_memory)
{
  usm_interface__msg__LocalMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LocalMsg__rosidl_typesupport_introspection_c__LocalMsg_message_member_array[5] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usm_interface__msg__LocalMsg, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usm_interface__msg__LocalMsg, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usm_interface__msg__LocalMsg, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usm_interface__msg__LocalMsg, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usm_interface__msg__LocalMsg, depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LocalMsg__rosidl_typesupport_introspection_c__LocalMsg_message_members = {
  "usm_interface__msg",  // message namespace
  "LocalMsg",  // message name
  5,  // number of fields
  sizeof(usm_interface__msg__LocalMsg),
  LocalMsg__rosidl_typesupport_introspection_c__LocalMsg_message_member_array,  // message members
  LocalMsg__rosidl_typesupport_introspection_c__LocalMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalMsg__rosidl_typesupport_introspection_c__LocalMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LocalMsg__rosidl_typesupport_introspection_c__LocalMsg_message_type_support_handle = {
  0,
  &LocalMsg__rosidl_typesupport_introspection_c__LocalMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_usm_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usm_interface, msg, LocalMsg)() {
  if (!LocalMsg__rosidl_typesupport_introspection_c__LocalMsg_message_type_support_handle.typesupport_identifier) {
    LocalMsg__rosidl_typesupport_introspection_c__LocalMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LocalMsg__rosidl_typesupport_introspection_c__LocalMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
