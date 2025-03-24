// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_

#include "communication_interfaces/msg/detail/system_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication_interfaces::msg::SystemStatus>()
{
  return "communication_interfaces::msg::SystemStatus";
}

template<>
inline const char * name<communication_interfaces::msg::SystemStatus>()
{
  return "communication_interfaces/msg/SystemStatus";
}

template<>
struct has_fixed_size<communication_interfaces::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<communication_interfaces::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<communication_interfaces::msg::SystemStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
