// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_

#include "communication_interfaces/msg/detail/system_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace communication_interfaces
{

namespace msg
{

namespace builder
{

class Init_SystemStatus_net_recv
{
public:
  explicit Init_SystemStatus_net_recv(::communication_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  ::communication_interfaces::msg::SystemStatus net_recv(::communication_interfaces::msg::SystemStatus::_net_recv_type arg)
  {
    msg_.net_recv = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_net_sent
{
public:
  explicit Init_SystemStatus_net_sent(::communication_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_net_recv net_sent(::communication_interfaces::msg::SystemStatus::_net_sent_type arg)
  {
    msg_.net_sent = std::move(arg);
    return Init_SystemStatus_net_recv(msg_);
  }

private:
  ::communication_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_memory_available
{
public:
  explicit Init_SystemStatus_memory_available(::communication_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_net_sent memory_available(::communication_interfaces::msg::SystemStatus::_memory_available_type arg)
  {
    msg_.memory_available = std::move(arg);
    return Init_SystemStatus_net_sent(msg_);
  }

private:
  ::communication_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_memory_total
{
public:
  explicit Init_SystemStatus_memory_total(::communication_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_memory_available memory_total(::communication_interfaces::msg::SystemStatus::_memory_total_type arg)
  {
    msg_.memory_total = std::move(arg);
    return Init_SystemStatus_memory_available(msg_);
  }

private:
  ::communication_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_memory_percent
{
public:
  explicit Init_SystemStatus_memory_percent(::communication_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_memory_total memory_percent(::communication_interfaces::msg::SystemStatus::_memory_percent_type arg)
  {
    msg_.memory_percent = std::move(arg);
    return Init_SystemStatus_memory_total(msg_);
  }

private:
  ::communication_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_cpu_percent
{
public:
  explicit Init_SystemStatus_cpu_percent(::communication_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_memory_percent cpu_percent(::communication_interfaces::msg::SystemStatus::_cpu_percent_type arg)
  {
    msg_.cpu_percent = std::move(arg);
    return Init_SystemStatus_memory_percent(msg_);
  }

private:
  ::communication_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_host_name
{
public:
  explicit Init_SystemStatus_host_name(::communication_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_cpu_percent host_name(::communication_interfaces::msg::SystemStatus::_host_name_type arg)
  {
    msg_.host_name = std::move(arg);
    return Init_SystemStatus_cpu_percent(msg_);
  }

private:
  ::communication_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_stamp
{
public:
  Init_SystemStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemStatus_host_name stamp(::communication_interfaces::msg::SystemStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_SystemStatus_host_name(msg_);
  }

private:
  ::communication_interfaces::msg::SystemStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces::msg::SystemStatus>()
{
  return communication_interfaces::msg::builder::Init_SystemStatus_stamp();
}

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
