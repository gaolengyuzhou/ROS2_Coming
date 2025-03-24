// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usm_interface:msg/JointMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__JOINT_MSG__BUILDER_HPP_
#define USM_INTERFACE__MSG__DETAIL__JOINT_MSG__BUILDER_HPP_

#include "usm_interface/msg/detail/joint_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace usm_interface
{

namespace msg
{

namespace builder
{

class Init_JointMsg_all_controller_msg
{
public:
  Init_JointMsg_all_controller_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::usm_interface::msg::JointMsg all_controller_msg(::usm_interface::msg::JointMsg::_all_controller_msg_type arg)
  {
    msg_.all_controller_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usm_interface::msg::JointMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::usm_interface::msg::JointMsg>()
{
  return usm_interface::msg::builder::Init_JointMsg_all_controller_msg();
}

}  // namespace usm_interface

#endif  // USM_INTERFACE__MSG__DETAIL__JOINT_MSG__BUILDER_HPP_
