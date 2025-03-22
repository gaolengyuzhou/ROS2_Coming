// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication_interfaces_topic:msg/Depth.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__DEPTH__TRAITS_HPP_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__DEPTH__TRAITS_HPP_

#include "communication_interfaces_topic/msg/detail/depth__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication_interfaces_topic::msg::Depth>()
{
  return "communication_interfaces_topic::msg::Depth";
}

template<>
inline const char * name<communication_interfaces_topic::msg::Depth>()
{
  return "communication_interfaces_topic/msg/Depth";
}

template<>
struct has_fixed_size<communication_interfaces_topic::msg::Depth>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<communication_interfaces_topic::msg::Depth>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<communication_interfaces_topic::msg::Depth>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__DEPTH__TRAITS_HPP_
