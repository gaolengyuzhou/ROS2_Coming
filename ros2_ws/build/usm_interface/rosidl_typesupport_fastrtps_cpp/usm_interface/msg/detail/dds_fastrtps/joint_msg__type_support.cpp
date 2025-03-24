// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from usm_interface:msg/JointMsg.idl
// generated code does not contain a copyright notice
#include "usm_interface/msg/detail/joint_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "usm_interface/msg/detail/joint_msg__struct.hpp"

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
bool cdr_serialize(
  const communication_interfaces::msg::ThrusterMsg &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  communication_interfaces::msg::ThrusterMsg &);
size_t get_serialized_size(
  const communication_interfaces::msg::ThrusterMsg &,
  size_t current_alignment);
size_t
max_serialized_size_ThrusterMsg(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace communication_interfaces


namespace usm_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usm_interface
cdr_serialize(
  const usm_interface::msg::JointMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: all_controller_msg
  {
    size_t size = ros_message.all_controller_msg.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      communication_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.all_controller_msg[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usm_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  usm_interface::msg::JointMsg & ros_message)
{
  // Member: all_controller_msg
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.all_controller_msg.resize(size);
    for (size_t i = 0; i < size; i++) {
      communication_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.all_controller_msg[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usm_interface
get_serialized_size(
  const usm_interface::msg::JointMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: all_controller_msg
  {
    size_t array_size = ros_message.all_controller_msg.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        communication_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.all_controller_msg[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usm_interface
max_serialized_size_JointMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: all_controller_msg
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        communication_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_ThrusterMsg(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _JointMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const usm_interface::msg::JointMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JointMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<usm_interface::msg::JointMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JointMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const usm_interface::msg::JointMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JointMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_JointMsg(full_bounded, 0);
}

static message_type_support_callbacks_t _JointMsg__callbacks = {
  "usm_interface::msg",
  "JointMsg",
  _JointMsg__cdr_serialize,
  _JointMsg__cdr_deserialize,
  _JointMsg__get_serialized_size,
  _JointMsg__max_serialized_size
};

static rosidl_message_type_support_t _JointMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JointMsg__callbacks,
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
get_message_type_support_handle<usm_interface::msg::JointMsg>()
{
  return &usm_interface::msg::typesupport_fastrtps_cpp::_JointMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, usm_interface, msg, JointMsg)() {
  return &usm_interface::msg::typesupport_fastrtps_cpp::_JointMsg__handle;
}

#ifdef __cplusplus
}
#endif
