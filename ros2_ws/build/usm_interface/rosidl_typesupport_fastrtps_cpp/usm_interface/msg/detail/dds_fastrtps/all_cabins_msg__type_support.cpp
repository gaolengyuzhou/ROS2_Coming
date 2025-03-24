// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from usm_interface:msg/AllCabinsMsg.idl
// generated code does not contain a copyright notice
#include "usm_interface/msg/detail/all_cabins_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "usm_interface/msg/detail/all_cabins_msg__struct.hpp"

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
  const communication_interfaces::msg::CabinMsg &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  communication_interfaces::msg::CabinMsg &);
size_t get_serialized_size(
  const communication_interfaces::msg::CabinMsg &,
  size_t current_alignment);
size_t
max_serialized_size_CabinMsg(
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
  const usm_interface::msg::AllCabinsMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cabin_msgs
  {
    size_t size = ros_message.cabin_msgs.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      communication_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.cabin_msgs[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usm_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  usm_interface::msg::AllCabinsMsg & ros_message)
{
  // Member: cabin_msgs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.cabin_msgs.resize(size);
    for (size_t i = 0; i < size; i++) {
      communication_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.cabin_msgs[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usm_interface
get_serialized_size(
  const usm_interface::msg::AllCabinsMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cabin_msgs
  {
    size_t array_size = ros_message.cabin_msgs.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        communication_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.cabin_msgs[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usm_interface
max_serialized_size_AllCabinsMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: cabin_msgs
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        communication_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_CabinMsg(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _AllCabinsMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const usm_interface::msg::AllCabinsMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AllCabinsMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<usm_interface::msg::AllCabinsMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AllCabinsMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const usm_interface::msg::AllCabinsMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AllCabinsMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AllCabinsMsg(full_bounded, 0);
}

static message_type_support_callbacks_t _AllCabinsMsg__callbacks = {
  "usm_interface::msg",
  "AllCabinsMsg",
  _AllCabinsMsg__cdr_serialize,
  _AllCabinsMsg__cdr_deserialize,
  _AllCabinsMsg__get_serialized_size,
  _AllCabinsMsg__max_serialized_size
};

static rosidl_message_type_support_t _AllCabinsMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AllCabinsMsg__callbacks,
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
get_message_type_support_handle<usm_interface::msg::AllCabinsMsg>()
{
  return &usm_interface::msg::typesupport_fastrtps_cpp::_AllCabinsMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, usm_interface, msg, AllCabinsMsg)() {
  return &usm_interface::msg::typesupport_fastrtps_cpp::_AllCabinsMsg__handle;
}

#ifdef __cplusplus
}
#endif
