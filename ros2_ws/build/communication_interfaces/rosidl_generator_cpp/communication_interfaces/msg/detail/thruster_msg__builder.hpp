// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_interfaces:msg/ThrusterMsg.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__THRUSTER_MSG__BUILDER_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__THRUSTER_MSG__BUILDER_HPP_

#include "communication_interfaces/msg/detail/thruster_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace communication_interfaces
{

namespace msg
{

namespace builder
{

class Init_ThrusterMsg_controller_set
{
public:
  explicit Init_ThrusterMsg_controller_set(::communication_interfaces::msg::ThrusterMsg & msg)
  : msg_(msg)
  {}
  ::communication_interfaces::msg::ThrusterMsg controller_set(::communication_interfaces::msg::ThrusterMsg::_controller_set_type arg)
  {
    msg_.controller_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces::msg::ThrusterMsg msg_;
};

class Init_ThrusterMsg_controller_id
{
public:
  Init_ThrusterMsg_controller_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThrusterMsg_controller_set controller_id(::communication_interfaces::msg::ThrusterMsg::_controller_id_type arg)
  {
    msg_.controller_id = std::move(arg);
    return Init_ThrusterMsg_controller_set(msg_);
  }

private:
  ::communication_interfaces::msg::ThrusterMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces::msg::ThrusterMsg>()
{
  return communication_interfaces::msg::builder::Init_ThrusterMsg_controller_id();
}

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__THRUSTER_MSG__BUILDER_HPP_
