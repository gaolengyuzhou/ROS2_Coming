// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_interfaces_topic:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__POSE__BUILDER_HPP_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__POSE__BUILDER_HPP_

#include "communication_interfaces_topic/msg/detail/pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace communication_interfaces_topic
{

namespace msg
{

namespace builder
{

class Init_Pose_pose_data
{
public:
  Init_Pose_pose_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::communication_interfaces_topic::msg::Pose pose_data(::communication_interfaces_topic::msg::Pose::_pose_data_type arg)
  {
    msg_.pose_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces_topic::msg::Pose>()
{
  return communication_interfaces_topic::msg::builder::Init_Pose_pose_data();
}

}  // namespace communication_interfaces_topic

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__POSE__BUILDER_HPP_
