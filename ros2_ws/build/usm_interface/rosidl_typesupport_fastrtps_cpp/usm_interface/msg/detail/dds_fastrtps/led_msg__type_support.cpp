// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from usm_interface:msg/LedMsg.idl
// generated code does not contain a copyright notice
#include "usm_interface/msg/detail/led_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "usm_interface/msg/detail/led_msg__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace usm_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usm_interface
cdr_serialize(
  const usm_interface::msg::LedMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: led_id
  cdr << ros_message.led_id;
  // Member: on
  cdr << (ros_message.on ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usm_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  usm_interface::msg::LedMsg & ros_message)
{
  // Member: led_id
  cdr >> ros_message.led_id;

  // Member: on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.on = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usm_interface
get_serialized_size(
  const usm_interface::msg::LedMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: led_id
  {
    size_t item_size = sizeof(ros_message.led_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: on
  {
    size_t item_size = sizeof(ros_message.on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usm_interface
max_serialized_size_LedMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: led_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _LedMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const usm_interface::msg::LedMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LedMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<usm_interface::msg::LedMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LedMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const usm_interface::msg::LedMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LedMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LedMsg(full_bounded, 0);
}

static message_type_support_callbacks_t _LedMsg__callbacks = {
  "usm_interface::msg",
  "LedMsg",
  _LedMsg__cdr_serialize,
  _LedMsg__cdr_deserialize,
  _LedMsg__get_serialized_size,
  _LedMsg__max_serialized_size
};

static rosidl_message_type_support_t _LedMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LedMsg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace usm_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_usm_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<usm_interface::msg::LedMsg>()
{
  return &usm_interface::msg::typesupport_fastrtps_cpp::_LedMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, usm_interface, msg, LedMsg)() {
  return &usm_interface::msg::typesupport_fastrtps_cpp::_LedMsg__handle;
}

#ifdef __cplusplus
}
#endif
