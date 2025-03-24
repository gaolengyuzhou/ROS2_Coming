// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_interfaces:msg/CabinMsg.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__CABIN_MSG__BUILDER_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__CABIN_MSG__BUILDER_HPP_

#include "communication_interfaces/msg/detail/cabin_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace communication_interfaces
{

namespace msg
{

namespace builder
{

class Init_CabinMsg_name
{
public:
  explicit Init_CabinMsg_name(::communication_interfaces::msg::CabinMsg & msg)
  : msg_(msg)
  {}
  ::communication_interfaces::msg::CabinMsg name(::communication_interfaces::msg::CabinMsg::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces::msg::CabinMsg msg_;
};

class Init_CabinMsg_pressure
{
public:
  explicit Init_CabinMsg_pressure(::communication_interfaces::msg::CabinMsg & msg)
  : msg_(msg)
  {}
  Init_CabinMsg_name pressure(::communication_interfaces::msg::CabinMsg::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return Init_CabinMsg_name(msg_);
  }

private:
  ::communication_interfaces::msg::CabinMsg msg_;
};

class Init_CabinMsg_humidity
{
public:
  explicit Init_CabinMsg_humidity(::communication_interfaces::msg::CabinMsg & msg)
  : msg_(msg)
  {}
  Init_CabinMsg_pressure humidity(::communication_interfaces::msg::CabinMsg::_humidity_type arg)
  {
    msg_.humidity = std::move(arg);
    return Init_CabinMsg_pressure(msg_);
  }

private:
  ::communication_interfaces::msg::CabinMsg msg_;
};

class Init_CabinMsg_temperature
{
public:
  explicit Init_CabinMsg_temperature(::communication_interfaces::msg::CabinMsg & msg)
  : msg_(msg)
  {}
  Init_CabinMsg_humidity temperature(::communication_interfaces::msg::CabinMsg::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_CabinMsg_humidity(msg_);
  }

private:
  ::communication_interfaces::msg::CabinMsg msg_;
};

class Init_CabinMsg_cabin_id
{
public:
  Init_CabinMsg_cabin_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CabinMsg_temperature cabin_id(::communication_interfaces::msg::CabinMsg::_cabin_id_type arg)
  {
    msg_.cabin_id = std::move(arg);
    return Init_CabinMsg_temperature(msg_);
  }

private:
  ::communication_interfaces::msg::CabinMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces::msg::CabinMsg>()
{
  return communication_interfaces::msg::builder::Init_CabinMsg_cabin_id();
}

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__CABIN_MSG__BUILDER_HPP_
