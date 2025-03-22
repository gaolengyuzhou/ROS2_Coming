// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_interfaces_topic:msg/Depth.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__DEPTH__BUILDER_HPP_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__DEPTH__BUILDER_HPP_

#include "communication_interfaces_topic/msg/detail/depth__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace communication_interfaces_topic
{

namespace msg
{

namespace builder
{

class Init_Depth_depth_data
{
public:
  Init_Depth_depth_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::communication_interfaces_topic::msg::Depth depth_data(::communication_interfaces_topic::msg::Depth::_depth_data_type arg)
  {
    msg_.depth_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Depth msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces_topic::msg::Depth>()
{
  return communication_interfaces_topic::msg::builder::Init_Depth_depth_data();
}

}  // namespace communication_interfaces_topic

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__DEPTH__BUILDER_HPP_
