// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from usm_interface:msg/AllCabinsMsg.idl
// generated code does not contain a copyright notice
#include "usm_interface/msg/detail/all_cabins_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "usm_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "usm_interface/msg/detail/all_cabins_msg__struct.h"
#include "usm_interface/msg/detail/all_cabins_msg__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "communication_interfaces/msg/detail/cabin_msg__functions.h"  // cabin_msgs

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_usm_interface
size_t get_serialized_size_communication_interfaces__msg__CabinMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_usm_interface
size_t max_serialized_size_communication_interfaces__msg__CabinMsg(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_usm_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, communication_interfaces, msg, CabinMsg)();


using _AllCabinsMsg__ros_msg_type = usm_interface__msg__AllCabinsMsg;

static bool _AllCabinsMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AllCabinsMsg__ros_msg_type * ros_message = static_cast<const _AllCabinsMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: cabin_msgs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, communication_interfaces, msg, CabinMsg
      )()->data);
    size_t size = ros_message->cabin_msgs.size;
    auto array_ptr = ros_message->cabin_msgs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _AllCabinsMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AllCabinsMsg__ros_msg_type * ros_message = static_cast<_AllCabinsMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: cabin_msgs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, communication_interfaces, msg, CabinMsg
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cabin_msgs.data) {
      communication_interfaces__msg__CabinMsg__Sequence__fini(&ros_message->cabin_msgs);
    }
    if (!communication_interfaces__msg__CabinMsg__Sequence__init(&ros_message->cabin_msgs, size)) {
      return "failed to create array for field 'cabin_msgs'";
    }
    auto array_ptr = ros_message->cabin_msgs.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_usm_interface
size_t get_serialized_size_usm_interface__msg__AllCabinsMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AllCabinsMsg__ros_msg_type * ros_message = static_cast<const _AllCabinsMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cabin_msgs
  {
    size_t array_size = ros_message->cabin_msgs.size;
    auto array_ptr = ros_message->cabin_msgs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_communication_interfaces__msg__CabinMsg(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AllCabinsMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_usm_interface__msg__AllCabinsMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_usm_interface
size_t max_serialized_size_usm_interface__msg__AllCabinsMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cabin_msgs
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_communication_interfaces__msg__CabinMsg(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AllCabinsMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_usm_interface__msg__AllCabinsMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AllCabinsMsg = {
  "usm_interface::msg",
  "AllCabinsMsg",
  _AllCabinsMsg__cdr_serialize,
  _AllCabinsMsg__cdr_deserialize,
  _AllCabinsMsg__get_serialized_size,
  _AllCabinsMsg__max_serialized_size
};

static rosidl_message_type_support_t _AllCabinsMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AllCabinsMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, usm_interface, msg, AllCabinsMsg)() {
  return &_AllCabinsMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
