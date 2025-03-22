// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_interfaces_topic:msg/AHRS.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__AHRS__BUILDER_HPP_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__AHRS__BUILDER_HPP_

#include "communication_interfaces_topic/msg/detail/ahrs__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace communication_interfaces_topic
{

namespace msg
{

namespace builder
{

class Init_AHRS_ahrs_data
{
public:
  explicit Init_AHRS_ahrs_data(::communication_interfaces_topic::msg::AHRS & msg)
  : msg_(msg)
  {}
  ::communication_interfaces_topic::msg::AHRS ahrs_data(::communication_interfaces_topic::msg::AHRS::_ahrs_data_type arg)
  {
    msg_.ahrs_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces_topic::msg::AHRS msg_;
};

class Init_AHRS_stamp
{
public:
  Init_AHRS_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AHRS_ahrs_data stamp(::communication_interfaces_topic::msg::AHRS::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_AHRS_ahrs_data(msg_);
  }

private:
  ::communication_interfaces_topic::msg::AHRS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces_topic::msg::AHRS>()
{
  return communication_interfaces_topic::msg::builder::Init_AHRS_stamp();
}

}  // namespace communication_interfaces_topic

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__AHRS__BUILDER_HPP_
