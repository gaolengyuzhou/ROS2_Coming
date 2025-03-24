// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usm_interface:msg/LedMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__LED_MSG__BUILDER_HPP_
#define USM_INTERFACE__MSG__DETAIL__LED_MSG__BUILDER_HPP_

#include "usm_interface/msg/detail/led_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace usm_interface
{

namespace msg
{

namespace builder
{

class Init_LedMsg_on
{
public:
  explicit Init_LedMsg_on(::usm_interface::msg::LedMsg & msg)
  : msg_(msg)
  {}
  ::usm_interface::msg::LedMsg on(::usm_interface::msg::LedMsg::_on_type arg)
  {
    msg_.on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usm_interface::msg::LedMsg msg_;
};

class Init_LedMsg_led_id
{
public:
  Init_LedMsg_led_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedMsg_on led_id(::usm_interface::msg::LedMsg::_led_id_type arg)
  {
    msg_.led_id = std::move(arg);
    return Init_LedMsg_on(msg_);
  }

private:
  ::usm_interface::msg::LedMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::usm_interface::msg::LedMsg>()
{
  return usm_interface::msg::builder::Init_LedMsg_led_id();
}

}  // namespace usm_interface

#endif  // USM_INTERFACE__MSG__DETAIL__LED_MSG__BUILDER_HPP_
