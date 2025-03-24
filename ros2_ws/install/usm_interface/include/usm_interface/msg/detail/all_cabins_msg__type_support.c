// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from usm_interface:msg/AllCabinsMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "usm_interface/msg/detail/all_cabins_msg__rosidl_typesupport_introspection_c.h"
#include "usm_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "usm_interface/msg/detail/all_cabins_msg__functions.h"
#include "usm_interface/msg/detail/all_cabins_msg__struct.h"


// Include directives for member types
// Member `cabin_msgs`
#include "communication_interfaces/msg/cabin_msg.h"
// Member `cabin_msgs`
#include "communication_interfaces/msg/detail/cabin_msg__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AllCabinsMsg__rosidl_typesupport_introspection_c__AllCabinsMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  usm_interface__msg__AllCabinsMsg__init(message_memory);
}

void AllCabinsMsg__rosidl_typesupport_introspection_c__AllCabinsMsg_fini_function(void * message_memory)
{
  usm_interface__msg__AllCabinsMsg__fini(message_memory);
}

size_t AllCabinsMsg__rosidl_typesupport_introspection_c__size_function__CabinMsg__cabin_msgs(
  const void * untyped_member)
{
  const communication_interfaces__msg__CabinMsg__Sequence * member =
    (const communication_interfaces__msg__CabinMsg__Sequence *)(untyped_member);
  return member->size;
}

const void * AllCabinsMsg__rosidl_typesupport_introspection_c__get_const_function__CabinMsg__cabin_msgs(
  const void * untyped_member, size_t index)
{
  const communication_interfaces__msg__CabinMsg__Sequence * member =
    (const communication_interfaces__msg__CabinMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

void * AllCabinsMsg__rosidl_typesupport_introspection_c__get_function__CabinMsg__cabin_msgs(
  void * untyped_member, size_t index)
{
  communication_interfaces__msg__CabinMsg__Sequence * member =
    (communication_interfaces__msg__CabinMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

bool AllCabinsMsg__rosidl_typesupport_introspection_c__resize_function__CabinMsg__cabin_msgs(
  void * untyped_member, size_t size)
{
  communication_interfaces__msg__CabinMsg__Sequence * member =
    (communication_interfaces__msg__CabinMsg__Sequence *)(untyped_member);
  communication_interfaces__msg__CabinMsg__Sequence__fini(member);
  return communication_interfaces__msg__CabinMsg__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember AllCabinsMsg__rosidl_typesupport_introspection_c__AllCabinsMsg_message_member_array[1] = {
  {
    "cabin_msgs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usm_interface__msg__AllCabinsMsg, cabin_msgs),  // bytes offset in struct
    NULL,  // default value
    AllCabinsMsg__rosidl_typesupport_introspection_c__size_function__CabinMsg__cabin_msgs,  // size() function pointer
    AllCabinsMsg__rosidl_typesupport_introspection_c__get_const_function__CabinMsg__cabin_msgs,  // get_const(index) function pointer
    AllCabinsMsg__rosidl_typesupport_introspection_c__get_function__CabinMsg__cabin_msgs,  // get(index) function pointer
    AllCabinsMsg__rosidl_typesupport_introspection_c__resize_function__CabinMsg__cabin_msgs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AllCabinsMsg__rosidl_typesupport_introspection_c__AllCabinsMsg_message_members = {
  "usm_interface__msg",  // message namespace
  "AllCabinsMsg",  // message name
  1,  // number of fields
  sizeof(usm_interface__msg__AllCabinsMsg),
  AllCabinsMsg__rosidl_typesupport_introspection_c__AllCabinsMsg_message_member_array,  // message members
  AllCabinsMsg__rosidl_typesupport_introspection_c__AllCabinsMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  AllCabinsMsg__rosidl_typesupport_introspection_c__AllCabinsMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AllCabinsMsg__rosidl_typesupport_introspection_c__AllCabinsMsg_message_type_support_handle = {
  0,
  &AllCabinsMsg__rosidl_typesupport_introspection_c__AllCabinsMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_usm_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usm_interface, msg, AllCabinsMsg)() {
  AllCabinsMsg__rosidl_typesupport_introspection_c__AllCabinsMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces, msg, CabinMsg)();
  if (!AllCabinsMsg__rosidl_typesupport_introspection_c__AllCabinsMsg_message_type_support_handle.typesupport_identifier) {
    AllCabinsMsg__rosidl_typesupport_introspection_c__AllCabinsMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AllCabinsMsg__rosidl_typesupport_introspection_c__AllCabinsMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
