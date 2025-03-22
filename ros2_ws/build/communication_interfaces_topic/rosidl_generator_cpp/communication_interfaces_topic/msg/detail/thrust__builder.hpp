// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_interfaces_topic:msg/Thrust.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__THRUST__BUILDER_HPP_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__THRUST__BUILDER_HPP_

#include "communication_interfaces_topic/msg/detail/thrust__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace communication_interfaces_topic
{

namespace msg
{

namespace builder
{

class Init_Thrust_thrust_data
{
public:
  Init_Thrust_thrust_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::communication_interfaces_topic::msg::Thrust thrust_data(::communication_interfaces_topic::msg::Thrust::_thrust_data_type arg)
  {
    msg_.thrust_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Thrust msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces_topic::msg::Thrust>()
{
  return communication_interfaces_topic::msg::builder::Init_Thrust_thrust_data();
}

}  // namespace communication_interfaces_topic

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__THRUST__BUILDER_HPP_
