// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from usm_interface:msg/ErrorMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__ERROR_MSG__TRAITS_HPP_
#define USM_INTERFACE__MSG__DETAIL__ERROR_MSG__TRAITS_HPP_

#include "usm_interface/msg/detail/error_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<usm_interface::msg::ErrorMsg>()
{
  return "usm_interface::msg::ErrorMsg";
}

template<>
inline const char * name<usm_interface::msg::ErrorMsg>()
{
  return "usm_interface/msg/ErrorMsg";
}

template<>
struct has_fixed_size<usm_interface::msg::ErrorMsg>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<usm_interface::msg::ErrorMsg>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<usm_interface::msg::ErrorMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // USM_INTERFACE__MSG__DETAIL__ERROR_MSG__TRAITS_HPP_
