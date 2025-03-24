// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usm_interface:msg/LocalMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__LOCAL_MSG__BUILDER_HPP_
#define USM_INTERFACE__MSG__DETAIL__LOCAL_MSG__BUILDER_HPP_

#include "usm_interface/msg/detail/local_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace usm_interface
{

namespace msg
{

namespace builder
{

class Init_LocalMsg_depth
{
public:
  explicit Init_LocalMsg_depth(::usm_interface::msg::LocalMsg & msg)
  : msg_(msg)
  {}
  ::usm_interface::msg::LocalMsg depth(::usm_interface::msg::LocalMsg::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usm_interface::msg::LocalMsg msg_;
};

class Init_LocalMsg_height
{
public:
  explicit Init_LocalMsg_height(::usm_interface::msg::LocalMsg & msg)
  : msg_(msg)
  {}
  Init_LocalMsg_depth height(::usm_interface::msg::LocalMsg::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_LocalMsg_depth(msg_);
  }

private:
  ::usm_interface::msg::LocalMsg msg_;
};

class Init_LocalMsg_z
{
public:
  explicit Init_LocalMsg_z(::usm_interface::msg::LocalMsg & msg)
  : msg_(msg)
  {}
  Init_LocalMsg_height z(::usm_interface::msg::LocalMsg::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_LocalMsg_height(msg_);
  }

private:
  ::usm_interface::msg::LocalMsg msg_;
};

class Init_LocalMsg_y
{
public:
  explicit Init_LocalMsg_y(::usm_interface::msg::LocalMsg & msg)
  : msg_(msg)
  {}
  Init_LocalMsg_z y(::usm_interface::msg::LocalMsg::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_LocalMsg_z(msg_);
  }

private:
  ::usm_interface::msg::LocalMsg msg_;
};

class Init_LocalMsg_x
{
public:
  Init_LocalMsg_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalMsg_y x(::usm_interface::msg::LocalMsg::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_LocalMsg_y(msg_);
  }

private:
  ::usm_interface::msg::LocalMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::usm_interface::msg::LocalMsg>()
{
  return usm_interface::msg::builder::Init_LocalMsg_x();
}

}  // namespace usm_interface

#endif  // USM_INTERFACE__MSG__DETAIL__LOCAL_MSG__BUILDER_HPP_
