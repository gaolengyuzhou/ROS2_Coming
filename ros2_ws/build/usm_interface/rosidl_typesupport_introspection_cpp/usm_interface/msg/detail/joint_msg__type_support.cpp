// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from usm_interface:msg/JointMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "usm_interface/msg/detail/joint_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace usm_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) usm_interface::msg::JointMsg(_init);
}

void JointMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<usm_interface::msg::JointMsg *>(message_memory);
  typed_message->~JointMsg();
}

size_t size_function__JointMsg__all_controller_msg(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<communication_interfaces::msg::ThrusterMsg> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointMsg__all_controller_msg(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<communication_interfaces::msg::ThrusterMsg> *>(untyped_member);
  return &member[index];
}

void * get_function__JointMsg__all_controller_msg(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<communication_interfaces::msg::ThrusterMsg> *>(untyped_member);
  return &member[index];
}

void resize_function__JointMsg__all_controller_msg(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<communication_interfaces::msg::ThrusterMsg> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointMsg_message_member_array[1] = {
  {
    "all_controller_msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<communication_interfaces::msg::ThrusterMsg>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usm_interface::msg::JointMsg, all_controller_msg),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointMsg__all_controller_msg,  // size() function pointer
    get_const_function__JointMsg__all_controller_msg,  // get_const(index) function pointer
    get_function__JointMsg__all_controller_msg,  // get(index) function pointer
    resize_function__JointMsg__all_controller_msg  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointMsg_message_members = {
  "usm_interface::msg",  // message namespace
  "JointMsg",  // message name
  1,  // number of fields
  sizeof(usm_interface::msg::JointMsg),
  JointMsg_message_member_array,  // message members
  JointMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  JointMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointMsg_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace usm_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<usm_interface::msg::JointMsg>()
{
  return &::usm_interface::msg::rosidl_typesupport_introspection_cpp::JointMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, usm_interface, msg, JointMsg)() {
  return &::usm_interface::msg::rosidl_typesupport_introspection_cpp::JointMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
