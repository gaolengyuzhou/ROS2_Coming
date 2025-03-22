// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_interfaces_topic:msg/Altitude.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__ALTITUDE__BUILDER_HPP_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__ALTITUDE__BUILDER_HPP_

#include "communication_interfaces_topic/msg/detail/altitude__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace communication_interfaces_topic
{

namespace msg
{

namespace builder
{

class Init_Altitude_p2
{
public:
  explicit Init_Altitude_p2(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  ::communication_interfaces_topic::msg::Altitude p2(::communication_interfaces_topic::msg::Altitude::_p2_type arg)
  {
    msg_.p2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p1
{
public:
  explicit Init_Altitude_p1(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p2 p1(::communication_interfaces_topic::msg::Altitude::_p1_type arg)
  {
    msg_.p1 = std::move(arg);
    return Init_Altitude_p2(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_f_thr
{
public:
  explicit Init_Altitude_f_thr(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p1 f_thr(::communication_interfaces_topic::msg::Altitude::_f_thr_type arg)
  {
    msg_.f_thr = std::move(arg);
    return Init_Altitude_p1(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_tau
{
public:
  explicit Init_Altitude_tau(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_f_thr tau(::communication_interfaces_topic::msg::Altitude::_tau_type arg)
  {
    msg_.tau = std::move(arg);
    return Init_Altitude_f_thr(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_z_e
{
public:
  explicit Init_Altitude_p_z_e(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_tau p_z_e(::communication_interfaces_topic::msg::Altitude::_p_z_e_type arg)
  {
    msg_.p_z_e = std::move(arg);
    return Init_Altitude_tau(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_y_e
{
public:
  explicit Init_Altitude_p_y_e(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_z_e p_y_e(::communication_interfaces_topic::msg::Altitude::_p_y_e_type arg)
  {
    msg_.p_y_e = std::move(arg);
    return Init_Altitude_p_z_e(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_x_e
{
public:
  explicit Init_Altitude_p_x_e(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_y_e p_x_e(::communication_interfaces_topic::msg::Altitude::_p_x_e_type arg)
  {
    msg_.p_x_e = std::move(arg);
    return Init_Altitude_p_y_e(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_yaw_e
{
public:
  explicit Init_Altitude_p_yaw_e(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_x_e p_yaw_e(::communication_interfaces_topic::msg::Altitude::_p_yaw_e_type arg)
  {
    msg_.p_yaw_e = std::move(arg);
    return Init_Altitude_p_x_e(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_pitch_e
{
public:
  explicit Init_Altitude_p_pitch_e(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_yaw_e p_pitch_e(::communication_interfaces_topic::msg::Altitude::_p_pitch_e_type arg)
  {
    msg_.p_pitch_e = std::move(arg);
    return Init_Altitude_p_yaw_e(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_row_e
{
public:
  explicit Init_Altitude_p_row_e(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_pitch_e p_row_e(::communication_interfaces_topic::msg::Altitude::_p_row_e_type arg)
  {
    msg_.p_row_e = std::move(arg);
    return Init_Altitude_p_pitch_e(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_z_set
{
public:
  explicit Init_Altitude_p_z_set(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_row_e p_z_set(::communication_interfaces_topic::msg::Altitude::_p_z_set_type arg)
  {
    msg_.p_z_set = std::move(arg);
    return Init_Altitude_p_row_e(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_y_set
{
public:
  explicit Init_Altitude_p_y_set(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_z_set p_y_set(::communication_interfaces_topic::msg::Altitude::_p_y_set_type arg)
  {
    msg_.p_y_set = std::move(arg);
    return Init_Altitude_p_z_set(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_x_set
{
public:
  explicit Init_Altitude_p_x_set(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_y_set p_x_set(::communication_interfaces_topic::msg::Altitude::_p_x_set_type arg)
  {
    msg_.p_x_set = std::move(arg);
    return Init_Altitude_p_y_set(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_yaw_set
{
public:
  explicit Init_Altitude_p_yaw_set(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_x_set p_yaw_set(::communication_interfaces_topic::msg::Altitude::_p_yaw_set_type arg)
  {
    msg_.p_yaw_set = std::move(arg);
    return Init_Altitude_p_x_set(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_pitch_set
{
public:
  explicit Init_Altitude_p_pitch_set(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_yaw_set p_pitch_set(::communication_interfaces_topic::msg::Altitude::_p_pitch_set_type arg)
  {
    msg_.p_pitch_set = std::move(arg);
    return Init_Altitude_p_yaw_set(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_row_set
{
public:
  explicit Init_Altitude_p_row_set(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_pitch_set p_row_set(::communication_interfaces_topic::msg::Altitude::_p_row_set_type arg)
  {
    msg_.p_row_set = std::move(arg);
    return Init_Altitude_p_pitch_set(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_z
{
public:
  explicit Init_Altitude_p_z(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_row_set p_z(::communication_interfaces_topic::msg::Altitude::_p_z_type arg)
  {
    msg_.p_z = std::move(arg);
    return Init_Altitude_p_row_set(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_y
{
public:
  explicit Init_Altitude_p_y(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_z p_y(::communication_interfaces_topic::msg::Altitude::_p_y_type arg)
  {
    msg_.p_y = std::move(arg);
    return Init_Altitude_p_z(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_x
{
public:
  explicit Init_Altitude_p_x(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_y p_x(::communication_interfaces_topic::msg::Altitude::_p_x_type arg)
  {
    msg_.p_x = std::move(arg);
    return Init_Altitude_p_y(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_yaw
{
public:
  explicit Init_Altitude_p_yaw(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_x p_yaw(::communication_interfaces_topic::msg::Altitude::_p_yaw_type arg)
  {
    msg_.p_yaw = std::move(arg);
    return Init_Altitude_p_x(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_pitch
{
public:
  explicit Init_Altitude_p_pitch(::communication_interfaces_topic::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_p_yaw p_pitch(::communication_interfaces_topic::msg::Altitude::_p_pitch_type arg)
  {
    msg_.p_pitch = std::move(arg);
    return Init_Altitude_p_yaw(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

class Init_Altitude_p_row
{
public:
  Init_Altitude_p_row()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Altitude_p_pitch p_row(::communication_interfaces_topic::msg::Altitude::_p_row_type arg)
  {
    msg_.p_row = std::move(arg);
    return Init_Altitude_p_pitch(msg_);
  }

private:
  ::communication_interfaces_topic::msg::Altitude msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces_topic::msg::Altitude>()
{
  return communication_interfaces_topic::msg::builder::Init_Altitude_p_row();
}

}  // namespace communication_interfaces_topic

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__ALTITUDE__BUILDER_HPP_
