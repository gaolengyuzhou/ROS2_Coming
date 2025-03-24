// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from usm_interface:msg/JointMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "usm_interface/msg/detail/joint_msg__rosidl_typesupport_introspection_c.h"
#include "usm_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "usm_interface/msg/detail/joint_msg__functions.h"
#include "usm_interface/msg/detail/joint_msg__struct.h"


// Include directives for member types
// Member `all_controller_msg`
#include "communication_interfaces/msg/thruster_msg.h"
// Member `all_controller_msg`
#include "communication_interfaces/msg/detail/thruster_msg__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void JointMsg__rosidl_typesupport_introspection_c__JointMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  usm_interface__msg__JointMsg__init(message_memory);
}

void JointMsg__rosidl_typesupport_introspection_c__JointMsg_fini_function(void * message_memory)
{
  usm_interface__msg__JointMsg__fini(message_memory);
}

size_t JointMsg__rosidl_typesupport_introspection_c__size_function__ThrusterMsg__all_controller_msg(
  const void * untyped_member)
{
  const communication_interfaces__msg__ThrusterMsg__Sequence * member =
    (const communication_interfaces__msg__ThrusterMsg__Sequence *)(untyped_member);
  return member->size;
}

const void * JointMsg__rosidl_typesupport_introspection_c__get_const_function__ThrusterMsg__all_controller_msg(
  const void * untyped_member, size_t index)
{
  const communication_interfaces__msg__ThrusterMsg__Sequence * member =
    (const communication_interfaces__msg__ThrusterMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

void * JointMsg__rosidl_typesupport_introspection_c__get_function__ThrusterMsg__all_controller_msg(
  void * untyped_member, size_t index)
{
  communication_interfaces__msg__ThrusterMsg__Sequence * member =
    (communication_interfaces__msg__ThrusterMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

bool JointMsg__rosidl_typesupport_introspection_c__resize_function__ThrusterMsg__all_controller_msg(
  void * untyped_member, size_t size)
{
  communication_interfaces__msg__ThrusterMsg__Sequence * member =
    (communication_interfaces__msg__ThrusterMsg__Sequence *)(untyped_member);
  communication_interfaces__msg__ThrusterMsg__Sequence__fini(member);
  return communication_interfaces__msg__ThrusterMsg__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember JointMsg__rosidl_typesupport_introspection_c__JointMsg_message_member_array[1] = {
  {
    "all_controller_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usm_interface__msg__JointMsg, all_controller_msg),  // bytes offset in struct
    NULL,  // default value
    JointMsg__rosidl_typesupport_introspection_c__size_function__ThrusterMsg__all_controller_msg,  // size() function pointer
    JointMsg__rosidl_typesupport_introspection_c__get_const_function__ThrusterMsg__all_controller_msg,  // get_const(index) function pointer
    JointMsg__rosidl_typesupport_introspection_c__get_function__ThrusterMsg__all_controller_msg,  // get(index) function pointer
    JointMsg__rosidl_typesupport_introspection_c__resize_function__ThrusterMsg__all_controller_msg  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JointMsg__rosidl_typesupport_introspection_c__JointMsg_message_members = {
  "usm_interface__msg",  // message namespace
  "JointMsg",  // message name
  1,  // number of fields
  sizeof(usm_interface__msg__JointMsg),
  JointMsg__rosidl_typesupport_introspection_c__JointMsg_message_member_array,  // message members
  JointMsg__rosidl_typesupport_introspection_c__JointMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  JointMsg__rosidl_typesupport_introspection_c__JointMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JointMsg__rosidl_typesupport_introspection_c__JointMsg_message_type_support_handle = {
  0,
  &JointMsg__rosidl_typesupport_introspection_c__JointMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_usm_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usm_interface, msg, JointMsg)() {
  JointMsg__rosidl_typesupport_introspection_c__JointMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces, msg, ThrusterMsg)();
  if (!JointMsg__rosidl_typesupport_introspection_c__JointMsg_message_type_support_handle.typesupport_identifier) {
    JointMsg__rosidl_typesupport_introspection_c__JointMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JointMsg__rosidl_typesupport_introspection_c__JointMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
