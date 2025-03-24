// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usm_interface:msg/ErrorMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__ERROR_MSG__BUILDER_HPP_
#define USM_INTERFACE__MSG__DETAIL__ERROR_MSG__BUILDER_HPP_

#include "usm_interface/msg/detail/error_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace usm_interface
{

namespace msg
{

namespace builder
{

class Init_ErrorMsg_z
{
public:
  explicit Init_ErrorMsg_z(::usm_interface::msg::ErrorMsg & msg)
  : msg_(msg)
  {}
  ::usm_interface::msg::ErrorMsg z(::usm_interface::msg::ErrorMsg::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usm_interface::msg::ErrorMsg msg_;
};

class Init_ErrorMsg_y
{
public:
  explicit Init_ErrorMsg_y(::usm_interface::msg::ErrorMsg & msg)
  : msg_(msg)
  {}
  Init_ErrorMsg_z y(::usm_interface::msg::ErrorMsg::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ErrorMsg_z(msg_);
  }

private:
  ::usm_interface::msg::ErrorMsg msg_;
};

class Init_ErrorMsg_x
{
public:
  explicit Init_ErrorMsg_x(::usm_interface::msg::ErrorMsg & msg)
  : msg_(msg)
  {}
  Init_ErrorMsg_y x(::usm_interface::msg::ErrorMsg::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ErrorMsg_y(msg_);
  }

private:
  ::usm_interface::msg::ErrorMsg msg_;
};

class Init_ErrorMsg_header
{
public:
  Init_ErrorMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ErrorMsg_x header(::usm_interface::msg::ErrorMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ErrorMsg_x(msg_);
  }

private:
  ::usm_interface::msg::ErrorMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::usm_interface::msg::ErrorMsg>()
{
  return usm_interface::msg::builder::Init_ErrorMsg_header();
}

}  // namespace usm_interface

#endif  // USM_INTERFACE__MSG__DETAIL__ERROR_MSG__BUILDER_HPP_
