// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from communication_interfaces_topic:msg/Thrust.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "communication_interfaces_topic/msg/detail/thrust__rosidl_typesupport_introspection_c.h"
#include "communication_interfaces_topic/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "communication_interfaces_topic/msg/detail/thrust__functions.h"
#include "communication_interfaces_topic/msg/detail/thrust__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Thrust__rosidl_typesupport_introspection_c__Thrust_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication_interfaces_topic__msg__Thrust__init(message_memory);
}

void Thrust__rosidl_typesupport_introspection_c__Thrust_fini_function(void * message_memory)
{
  communication_interfaces_topic__msg__Thrust__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Thrust__rosidl_typesupport_introspection_c__Thrust_message_member_array[1] = {
  {
    "thrust_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces_topic__msg__Thrust, thrust_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Thrust__rosidl_typesupport_introspection_c__Thrust_message_members = {
  "communication_interfaces_topic__msg",  // message namespace
  "Thrust",  // message name
  1,  // number of fields
  sizeof(communication_interfaces_topic__msg__Thrust),
  Thrust__rosidl_typesupport_introspection_c__Thrust_message_member_array,  // message members
  Thrust__rosidl_typesupport_introspection_c__Thrust_init_function,  // function to initialize message memory (memory has to be allocated)
  Thrust__rosidl_typesupport_introspection_c__Thrust_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Thrust__rosidl_typesupport_introspection_c__Thrust_message_type_support_handle = {
  0,
  &Thrust__rosidl_typesupport_introspection_c__Thrust_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_interfaces_topic
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces_topic, msg, Thrust)() {
  if (!Thrust__rosidl_typesupport_introspection_c__Thrust_message_type_support_handle.typesupport_identifier) {
    Thrust__rosidl_typesupport_introspection_c__Thrust_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Thrust__rosidl_typesupport_introspection_c__Thrust_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
