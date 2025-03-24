// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from usm_interface:msg/ErrorMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "usm_interface/msg/detail/error_msg__rosidl_typesupport_introspection_c.h"
#include "usm_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "usm_interface/msg/detail/error_msg__functions.h"
#include "usm_interface/msg/detail/error_msg__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ErrorMsg__rosidl_typesupport_introspection_c__ErrorMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  usm_interface__msg__ErrorMsg__init(message_memory);
}

void ErrorMsg__rosidl_typesupport_introspection_c__ErrorMsg_fini_function(void * message_memory)
{
  usm_interface__msg__ErrorMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ErrorMsg__rosidl_typesupport_introspection_c__ErrorMsg_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usm_interface__msg__ErrorMsg, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usm_interface__msg__ErrorMsg, x),  // bytes offset in struct
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
    offsetof(usm_interface__msg__ErrorMsg, y),  // bytes offset in struct
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
    offsetof(usm_interface__msg__ErrorMsg, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ErrorMsg__rosidl_typesupport_introspection_c__ErrorMsg_message_members = {
  "usm_interface__msg",  // message namespace
  "ErrorMsg",  // message name
  4,  // number of fields
  sizeof(usm_interface__msg__ErrorMsg),
  ErrorMsg__rosidl_typesupport_introspection_c__ErrorMsg_message_member_array,  // message members
  ErrorMsg__rosidl_typesupport_introspection_c__ErrorMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  ErrorMsg__rosidl_typesupport_introspection_c__ErrorMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ErrorMsg__rosidl_typesupport_introspection_c__ErrorMsg_message_type_support_handle = {
  0,
  &ErrorMsg__rosidl_typesupport_introspection_c__ErrorMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_usm_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usm_interface, msg, ErrorMsg)() {
  ErrorMsg__rosidl_typesupport_introspection_c__ErrorMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ErrorMsg__rosidl_typesupport_introspection_c__ErrorMsg_message_type_support_handle.typesupport_identifier) {
    ErrorMsg__rosidl_typesupport_introspection_c__ErrorMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ErrorMsg__rosidl_typesupport_introspection_c__ErrorMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
