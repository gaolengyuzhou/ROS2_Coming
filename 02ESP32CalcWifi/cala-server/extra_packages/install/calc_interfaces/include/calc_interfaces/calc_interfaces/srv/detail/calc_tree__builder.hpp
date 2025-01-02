// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from calc_interfaces:srv/CalcTree.idl
// generated code does not contain a copyright notice

#ifndef CALC_INTERFACES__SRV__DETAIL__CALC_TREE__BUILDER_HPP_
#define CALC_INTERFACES__SRV__DETAIL__CALC_TREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "calc_interfaces/srv/detail/calc_tree__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace calc_interfaces
{

namespace srv
{

namespace builder
{

class Init_CalcTree_Request_c
{
public:
  explicit Init_CalcTree_Request_c(::calc_interfaces::srv::CalcTree_Request & msg)
  : msg_(msg)
  {}
  ::calc_interfaces::srv::CalcTree_Request c(::calc_interfaces::srv::CalcTree_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::calc_interfaces::srv::CalcTree_Request msg_;
};

class Init_CalcTree_Request_b
{
public:
  explicit Init_CalcTree_Request_b(::calc_interfaces::srv::CalcTree_Request & msg)
  : msg_(msg)
  {}
  Init_CalcTree_Request_c b(::calc_interfaces::srv::CalcTree_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_CalcTree_Request_c(msg_);
  }

private:
  ::calc_interfaces::srv::CalcTree_Request msg_;
};

class Init_CalcTree_Request_a
{
public:
  Init_CalcTree_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalcTree_Request_b a(::calc_interfaces::srv::CalcTree_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_CalcTree_Request_b(msg_);
  }

private:
  ::calc_interfaces::srv::CalcTree_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::calc_interfaces::srv::CalcTree_Request>()
{
  return calc_interfaces::srv::builder::Init_CalcTree_Request_a();
}

}  // namespace calc_interfaces


namespace calc_interfaces
{

namespace srv
{

namespace builder
{

class Init_CalcTree_Response_prod
{
public:
  explicit Init_CalcTree_Response_prod(::calc_interfaces::srv::CalcTree_Response & msg)
  : msg_(msg)
  {}
  ::calc_interfaces::srv::CalcTree_Response prod(::calc_interfaces::srv::CalcTree_Response::_prod_type arg)
  {
    msg_.prod = std::move(arg);
    return std::move(msg_);
  }

private:
  ::calc_interfaces::srv::CalcTree_Response msg_;
};

class Init_CalcTree_Response_sum
{
public:
  Init_CalcTree_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalcTree_Response_prod sum(::calc_interfaces::srv::CalcTree_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return Init_CalcTree_Response_prod(msg_);
  }

private:
  ::calc_interfaces::srv::CalcTree_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::calc_interfaces::srv::CalcTree_Response>()
{
  return calc_interfaces::srv::builder::Init_CalcTree_Response_sum();
}

}  // namespace calc_interfaces

#endif  // CALC_INTERFACES__SRV__DETAIL__CALC_TREE__BUILDER_HPP_
