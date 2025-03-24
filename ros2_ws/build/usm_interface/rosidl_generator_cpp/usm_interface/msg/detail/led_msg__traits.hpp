// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from usm_interface:msg/LedMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__LED_MSG__TRAITS_HPP_
#define USM_INTERFACE__MSG__DETAIL__LED_MSG__TRAITS_HPP_

#include "usm_interface/msg/detail/led_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<usm_interface::msg::LedMsg>()
{
  return "usm_interface::msg::LedMsg";
}

template<>
inline const char * name<usm_interface::msg::LedMsg>()
{
  return "usm_interface/msg/LedMsg";
}

template<>
struct has_fixed_size<usm_interface::msg::LedMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<usm_interface::msg::LedMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<usm_interface::msg::LedMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // USM_INTERFACE__MSG__DETAIL__LED_MSG__TRAITS_HPP_
