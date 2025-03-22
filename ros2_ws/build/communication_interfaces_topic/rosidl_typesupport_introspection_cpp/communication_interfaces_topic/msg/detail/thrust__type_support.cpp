// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from communication_interfaces_topic:msg/Thrust.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "communication_interfaces_topic/msg/detail/thrust__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace communication_interfaces_topic
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Thrust_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) communication_interfaces_topic::msg::Thrust(_init);
}

void Thrust_fini_function(void * message_memory)
{
  auto typed_message = static_cast<communication_interfaces_topic::msg::Thrust *>(message_memory);
  typed_message->~Thrust();
}

size_t size_function__Thrust__thrust_data(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__Thrust__thrust_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__Thrust__thrust_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Thrust_message_member_array[1] = {
  {
    "thrust_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces_topic::msg::Thrust, thrust_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__Thrust__thrust_data,  // size() function pointer
    get_const_function__Thrust__thrust_data,  // get_const(index) function pointer
    get_function__Thrust__thrust_data,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Thrust_message_members = {
  "communication_interfaces_topic::msg",  // message namespace
  "Thrust",  // message name
  1,  // number of fields
  sizeof(communication_interfaces_topic::msg::Thrust),
  Thrust_message_member_array,  // message members
  Thrust_init_function,  // function to initialize message memory (memory has to be allocated)
  Thrust_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Thrust_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Thrust_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace communication_interfaces_topic


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<communication_interfaces_topic::msg::Thrust>()
{
  return &::communication_interfaces_topic::msg::rosidl_typesupport_introspection_cpp::Thrust_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, communication_interfaces_topic, msg, Thrust)() {
  return &::communication_interfaces_topic::msg::rosidl_typesupport_introspection_cpp::Thrust_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
