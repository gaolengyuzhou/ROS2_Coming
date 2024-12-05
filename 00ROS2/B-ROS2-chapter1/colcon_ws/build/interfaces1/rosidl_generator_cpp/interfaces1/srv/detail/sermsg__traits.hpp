// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces1:srv/Sermsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES1__SRV__DETAIL__SERMSG__TRAITS_HPP_
#define INTERFACES1__SRV__DETAIL__SERMSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces1/srv/detail/sermsg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces1
{

namespace srv
{

inline void to_flow_style_yaml(
  const Sermsg_Request & msg,
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
  const Sermsg_Request & msg,
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

inline std::string to_yaml(const Sermsg_Request & msg, bool use_flow_style = false)
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

}  // namespace interfaces1

namespace rosidl_generator_traits
{

[[deprecated("use interfaces1::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces1::srv::Sermsg_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces1::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces1::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces1::srv::Sermsg_Request & msg)
{
  return interfaces1::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces1::srv::Sermsg_Request>()
{
  return "interfaces1::srv::Sermsg_Request";
}

template<>
inline const char * name<interfaces1::srv::Sermsg_Request>()
{
  return "interfaces1/srv/Sermsg_Request";
}

template<>
struct has_fixed_size<interfaces1::srv::Sermsg_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces1::srv::Sermsg_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces1::srv::Sermsg_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces1
{

namespace srv
{

inline void to_flow_style_yaml(
  const Sermsg_Response & msg,
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
  const Sermsg_Response & msg,
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

inline std::string to_yaml(const Sermsg_Response & msg, bool use_flow_style = false)
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

}  // namespace interfaces1

namespace rosidl_generator_traits
{

[[deprecated("use interfaces1::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces1::srv::Sermsg_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces1::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces1::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces1::srv::Sermsg_Response & msg)
{
  return interfaces1::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces1::srv::Sermsg_Response>()
{
  return "interfaces1::srv::Sermsg_Response";
}

template<>
inline const char * name<interfaces1::srv::Sermsg_Response>()
{
  return "interfaces1/srv/Sermsg_Response";
}

template<>
struct has_fixed_size<interfaces1::srv::Sermsg_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces1::srv::Sermsg_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces1::srv::Sermsg_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces1::srv::Sermsg>()
{
  return "interfaces1::srv::Sermsg";
}

template<>
inline const char * name<interfaces1::srv::Sermsg>()
{
  return "interfaces1/srv/Sermsg";
}

template<>
struct has_fixed_size<interfaces1::srv::Sermsg>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces1::srv::Sermsg_Request>::value &&
    has_fixed_size<interfaces1::srv::Sermsg_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces1::srv::Sermsg>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces1::srv::Sermsg_Request>::value &&
    has_bounded_size<interfaces1::srv::Sermsg_Response>::value
  >
{
};

template<>
struct is_service<interfaces1::srv::Sermsg>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces1::srv::Sermsg_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces1::srv::Sermsg_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES1__SRV__DETAIL__SERMSG__TRAITS_HPP_
