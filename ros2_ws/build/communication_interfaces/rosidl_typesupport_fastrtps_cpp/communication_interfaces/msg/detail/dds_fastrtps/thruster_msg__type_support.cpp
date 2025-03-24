// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from communication_interfaces:msg/ThrusterMsg.idl
// generated code does not contain a copyright notice
#include "communication_interfaces/msg/detail/thruster_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "communication_interfaces/msg/detail/thruster_msg__struct.hpp"

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

namespace communication_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication_interfaces
cdr_serialize(
  const communication_interfaces::msg::ThrusterMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: controller_id
  cdr << ros_message.controller_id;
  // Member: controller_set
  cdr << ros_message.controller_set;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  communication_interfaces::msg::ThrusterMsg & ros_message)
{
  // Member: controller_id
  cdr >> ros_message.controller_id;

  // Member: controller_set
  cdr >> ros_message.controller_set;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication_interfaces
get_serialized_size(
  const communication_interfaces::msg::ThrusterMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: controller_id
  {
    size_t item_size = sizeof(ros_message.controller_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: controller_set
  {
    size_t item_size = sizeof(ros_message.controller_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication_interfaces
max_serialized_size_ThrusterMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: controller_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: controller_set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ThrusterMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const communication_interfaces::msg::ThrusterMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ThrusterMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<communication_interfaces::msg::ThrusterMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ThrusterMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const communication_interfaces::msg::ThrusterMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ThrusterMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ThrusterMsg(full_bounded, 0);
}

static message_type_support_callbacks_t _ThrusterMsg__callbacks = {
  "communication_interfaces::msg",
  "ThrusterMsg",
  _ThrusterMsg__cdr_serialize,
  _ThrusterMsg__cdr_deserialize,
  _ThrusterMsg__get_serialized_size,
  _ThrusterMsg__max_serialized_size
};

static rosidl_message_type_support_t _ThrusterMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ThrusterMsg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace communication_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_communication_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<communication_interfaces::msg::ThrusterMsg>()
{
  return &communication_interfaces::msg::typesupport_fastrtps_cpp::_ThrusterMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, communication_interfaces, msg, ThrusterMsg)() {
  return &communication_interfaces::msg::typesupport_fastrtps_cpp::_ThrusterMsg__handle;
}

#ifdef __cplusplus
}
#endif
