// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_interfaces_topic:srv/GetAHRS.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__SRV__DETAIL__GET_AHRS__BUILDER_HPP_
#define COMMUNICATION_INTERFACES_TOPIC__SRV__DETAIL__GET_AHRS__BUILDER_HPP_

#include "communication_interfaces_topic/srv/detail/get_ahrs__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace communication_interfaces_topic
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces_topic::srv::GetAHRS_Request>()
{
  return ::communication_interfaces_topic::srv::GetAHRS_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace communication_interfaces_topic


namespace communication_interfaces_topic
{

namespace srv
{

namespace builder
{

class Init_GetAHRS_Response_ahrs_data
{
public:
  explicit Init_GetAHRS_Response_ahrs_data(::communication_interfaces_topic::srv::GetAHRS_Response & msg)
  : msg_(msg)
  {}
  ::communication_interfaces_topic::srv::GetAHRS_Response ahrs_data(::communication_interfaces_topic::srv::GetAHRS_Response::_ahrs_data_type arg)
  {
    msg_.ahrs_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces_topic::srv::GetAHRS_Response msg_;
};

class Init_GetAHRS_Response_stamp
{
public:
  Init_GetAHRS_Response_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAHRS_Response_ahrs_data stamp(::communication_interfaces_topic::srv::GetAHRS_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_GetAHRS_Response_ahrs_data(msg_);
  }

private:
  ::communication_interfaces_topic::srv::GetAHRS_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces_topic::srv::GetAHRS_Response>()
{
  return communication_interfaces_topic::srv::builder::Init_GetAHRS_Response_stamp();
}

}  // namespace communication_interfaces_topic

#endif  // COMMUNICATION_INTERFACES_TOPIC__SRV__DETAIL__GET_AHRS__BUILDER_HPP_
