// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usm_interface:msg/AllCabinsMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__ALL_CABINS_MSG__BUILDER_HPP_
#define USM_INTERFACE__MSG__DETAIL__ALL_CABINS_MSG__BUILDER_HPP_

#include "usm_interface/msg/detail/all_cabins_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace usm_interface
{

namespace msg
{

namespace builder
{

class Init_AllCabinsMsg_cabin_msgs
{
public:
  Init_AllCabinsMsg_cabin_msgs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::usm_interface::msg::AllCabinsMsg cabin_msgs(::usm_interface::msg::AllCabinsMsg::_cabin_msgs_type arg)
  {
    msg_.cabin_msgs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usm_interface::msg::AllCabinsMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::usm_interface::msg::AllCabinsMsg>()
{
  return usm_interface::msg::builder::Init_AllCabinsMsg_cabin_msgs();
}

}  // namespace usm_interface

#endif  // USM_INTERFACE__MSG__DETAIL__ALL_CABINS_MSG__BUILDER_HPP_
