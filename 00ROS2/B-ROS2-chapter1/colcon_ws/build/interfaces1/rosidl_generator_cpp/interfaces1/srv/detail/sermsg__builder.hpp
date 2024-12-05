// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces1:srv/Sermsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES1__SRV__DETAIL__SERMSG__BUILDER_HPP_
#define INTERFACES1__SRV__DETAIL__SERMSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces1/srv/detail/sermsg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces1
{

namespace srv
{

namespace builder
{

class Init_Sermsg_Request_c
{
public:
  explicit Init_Sermsg_Request_c(::interfaces1::srv::Sermsg_Request & msg)
  : msg_(msg)
  {}
  ::interfaces1::srv::Sermsg_Request c(::interfaces1::srv::Sermsg_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces1::srv::Sermsg_Request msg_;
};

class Init_Sermsg_Request_b
{
public:
  explicit Init_Sermsg_Request_b(::interfaces1::srv::Sermsg_Request & msg)
  : msg_(msg)
  {}
  Init_Sermsg_Request_c b(::interfaces1::srv::Sermsg_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Sermsg_Request_c(msg_);
  }

private:
  ::interfaces1::srv::Sermsg_Request msg_;
};

class Init_Sermsg_Request_a
{
public:
  Init_Sermsg_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sermsg_Request_b a(::interfaces1::srv::Sermsg_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Sermsg_Request_b(msg_);
  }

private:
  ::interfaces1::srv::Sermsg_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces1::srv::Sermsg_Request>()
{
  return interfaces1::srv::builder::Init_Sermsg_Request_a();
}

}  // namespace interfaces1


namespace interfaces1
{

namespace srv
{

namespace builder
{

class Init_Sermsg_Response_prod
{
public:
  explicit Init_Sermsg_Response_prod(::interfaces1::srv::Sermsg_Response & msg)
  : msg_(msg)
  {}
  ::interfaces1::srv::Sermsg_Response prod(::interfaces1::srv::Sermsg_Response::_prod_type arg)
  {
    msg_.prod = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces1::srv::Sermsg_Response msg_;
};

class Init_Sermsg_Response_sum
{
public:
  Init_Sermsg_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sermsg_Response_prod sum(::interfaces1::srv::Sermsg_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return Init_Sermsg_Response_prod(msg_);
  }

private:
  ::interfaces1::srv::Sermsg_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces1::srv::Sermsg_Response>()
{
  return interfaces1::srv::builder::Init_Sermsg_Response_sum();
}

}  // namespace interfaces1

#endif  // INTERFACES1__SRV__DETAIL__SERMSG__BUILDER_HPP_
