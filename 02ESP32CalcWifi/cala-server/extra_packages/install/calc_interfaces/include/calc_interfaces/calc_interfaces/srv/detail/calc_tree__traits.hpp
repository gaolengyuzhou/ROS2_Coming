// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from calc_interfaces:srv/CalcTree.idl
// generated code does not contain a copyright notice

#ifndef CALC_INTERFACES__SRV__DETAIL__CALC_TREE__TRAITS_HPP_
#define CALC_INTERFACES__SRV__DETAIL__CALC_TREE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "calc_interfaces/srv/detail/calc_tree__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace calc_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalcTree_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalcTree_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalcTree_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace calc_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use calc_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const calc_interfaces::srv::CalcTree_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  calc_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use calc_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const calc_interfaces::srv::CalcTree_Request & msg)
{
  return calc_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<calc_interfaces::srv::CalcTree_Request>()
{
  return "calc_interfaces::srv::CalcTree_Request";
}

template<>
inline const char * name<calc_interfaces::srv::CalcTree_Request>()
{
  return "calc_interfaces/srv/CalcTree_Request";
}

template<>
struct has_fixed_size<calc_interfaces::srv::CalcTree_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<calc_interfaces::srv::CalcTree_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<calc_interfaces::srv::CalcTree_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace calc_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalcTree_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << ", ";
  }

  // member: prod
  {
    out << "prod: ";
    rosidl_generator_traits::value_to_yaml(msg.prod, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalcTree_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }

  // member: prod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prod: ";
    rosidl_generator_traits::value_to_yaml(msg.prod, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalcTree_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace calc_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use calc_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const calc_interfaces::srv::CalcTree_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  calc_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use calc_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const calc_interfaces::srv::CalcTree_Response & msg)
{
  return calc_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<calc_interfaces::srv::CalcTree_Response>()
{
  return "calc_interfaces::srv::CalcTree_Response";
}

template<>
inline const char * name<calc_interfaces::srv::CalcTree_Response>()
{
  return "calc_interfaces/srv/CalcTree_Response";
}

template<>
struct has_fixed_size<calc_interfaces::srv::CalcTree_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<calc_interfaces::srv::CalcTree_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<calc_interfaces::srv::CalcTree_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<calc_interfaces::srv::CalcTree>()
{
  return "calc_interfaces::srv::CalcTree";
}

template<>
inline const char * name<calc_interfaces::srv::CalcTree>()
{
  return "calc_interfaces/srv/CalcTree";
}

template<>
struct has_fixed_size<calc_interfaces::srv::CalcTree>
  : std::integral_constant<
    bool,
    has_fixed_size<calc_interfaces::srv::CalcTree_Request>::value &&
    has_fixed_size<calc_interfaces::srv::CalcTree_Response>::value
  >
{
};

template<>
struct has_bounded_size<calc_interfaces::srv::CalcTree>
  : std::integral_constant<
    bool,
    has_bounded_size<calc_interfaces::srv::CalcTree_Request>::value &&
    has_bounded_size<calc_interfaces::srv::CalcTree_Response>::value
  >
{
};

template<>
struct is_service<calc_interfaces::srv::CalcTree>
  : std::true_type
{
};

template<>
struct is_service_request<calc_interfaces::srv::CalcTree_Request>
  : std::true_type
{
};

template<>
struct is_service_response<calc_interfaces::srv::CalcTree_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CALC_INTERFACES__SRV__DETAIL__CALC_TREE__TRAITS_HPP_
