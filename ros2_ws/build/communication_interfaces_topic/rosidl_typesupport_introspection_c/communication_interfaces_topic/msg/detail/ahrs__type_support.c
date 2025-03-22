// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from communication_interfaces_topic:msg/AHRS.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "communication_interfaces_topic/msg/detail/ahrs__rosidl_typesupport_introspection_c.h"
#include "communication_interfaces_topic/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "communication_interfaces_topic/msg/detail/ahrs__functions.h"
#include "communication_interfaces_topic/msg/detail/ahrs__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AHRS__rosidl_typesupport_introspection_c__AHRS_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication_interfaces_topic__msg__AHRS__init(message_memory);
}

void AHRS__rosidl_typesupport_introspection_c__AHRS_fini_function(void * message_memory)
{
  communication_interfaces_topic__msg__AHRS__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AHRS__rosidl_typesupport_introspection_c__AHRS_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces_topic__msg__AHRS, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ahrs_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces_topic__msg__AHRS, ahrs_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AHRS__rosidl_typesupport_introspection_c__AHRS_message_members = {
  "communication_interfaces_topic__msg",  // message namespace
  "AHRS",  // message name
  2,  // number of fields
  sizeof(communication_interfaces_topic__msg__AHRS),
  AHRS__rosidl_typesupport_introspection_c__AHRS_message_member_array,  // message members
  AHRS__rosidl_typesupport_introspection_c__AHRS_init_function,  // function to initialize message memory (memory has to be allocated)
  AHRS__rosidl_typesupport_introspection_c__AHRS_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AHRS__rosidl_typesupport_introspection_c__AHRS_message_type_support_handle = {
  0,
  &AHRS__rosidl_typesupport_introspection_c__AHRS_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_interfaces_topic
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces_topic, msg, AHRS)() {
  AHRS__rosidl_typesupport_introspection_c__AHRS_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!AHRS__rosidl_typesupport_introspection_c__AHRS_message_type_support_handle.typesupport_identifier) {
    AHRS__rosidl_typesupport_introspection_c__AHRS_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AHRS__rosidl_typesupport_introspection_c__AHRS_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
