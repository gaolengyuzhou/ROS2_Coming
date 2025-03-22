// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication_interfaces_topic:srv/GetAHRS.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__SRV__DETAIL__GET_AHRS__TRAITS_HPP_
#define COMMUNICATION_INTERFACES_TOPIC__SRV__DETAIL__GET_AHRS__TRAITS_HPP_

#include "communication_interfaces_topic/srv/detail/get_ahrs__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication_interfaces_topic::srv::GetAHRS_Request>()
{
  return "communication_interfaces_topic::srv::GetAHRS_Request";
}

template<>
inline const char * name<communication_interfaces_topic::srv::GetAHRS_Request>()
{
  return "communication_interfaces_topic/srv/GetAHRS_Request";
}

template<>
struct has_fixed_size<communication_interfaces_topic::srv::GetAHRS_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<communication_interfaces_topic::srv::GetAHRS_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<communication_interfaces_topic::srv::GetAHRS_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication_interfaces_topic::srv::GetAHRS_Response>()
{
  return "communication_interfaces_topic::srv::GetAHRS_Response";
}

template<>
inline const char * name<communication_interfaces_topic::srv::GetAHRS_Response>()
{
  return "communication_interfaces_topic/srv/GetAHRS_Response";
}

template<>
struct has_fixed_size<communication_interfaces_topic::srv::GetAHRS_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<communication_interfaces_topic::srv::GetAHRS_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<communication_interfaces_topic::srv::GetAHRS_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication_interfaces_topic::srv::GetAHRS>()
{
  return "communication_interfaces_topic::srv::GetAHRS";
}

template<>
inline const char * name<communication_interfaces_topic::srv::GetAHRS>()
{
  return "communication_interfaces_topic/srv/GetAHRS";
}

template<>
struct has_fixed_size<communication_interfaces_topic::srv::GetAHRS>
  : std::integral_constant<
    bool,
    has_fixed_size<communication_interfaces_topic::srv::GetAHRS_Request>::value &&
    has_fixed_size<communication_interfaces_topic::srv::GetAHRS_Response>::value
  >
{
};

template<>
struct has_bounded_size<communication_interfaces_topic::srv::GetAHRS>
  : std::integral_constant<
    bool,
    has_bounded_size<communication_interfaces_topic::srv::GetAHRS_Request>::value &&
    has_bounded_size<communication_interfaces_topic::srv::GetAHRS_Response>::value
  >
{
};

template<>
struct is_service<communication_interfaces_topic::srv::GetAHRS>
  : std::true_type
{
};

template<>
struct is_service_request<communication_interfaces_topic::srv::GetAHRS_Request>
  : std::true_type
{
};

template<>
struct is_service_response<communication_interfaces_topic::srv::GetAHRS_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION_INTERFACES_TOPIC__SRV__DETAIL__GET_AHRS__TRAITS_HPP_
