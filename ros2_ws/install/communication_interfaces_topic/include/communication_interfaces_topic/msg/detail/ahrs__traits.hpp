// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication_interfaces_topic:msg/AHRS.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__AHRS__TRAITS_HPP_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__AHRS__TRAITS_HPP_

#include "communication_interfaces_topic/msg/detail/ahrs__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication_interfaces_topic::msg::AHRS>()
{
  return "communication_interfaces_topic::msg::AHRS";
}

template<>
inline const char * name<communication_interfaces_topic::msg::AHRS>()
{
  return "communication_interfaces_topic/msg/AHRS";
}

template<>
struct has_fixed_size<communication_interfaces_topic::msg::AHRS>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<communication_interfaces_topic::msg::AHRS>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<communication_interfaces_topic::msg::AHRS>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__AHRS__TRAITS_HPP_
