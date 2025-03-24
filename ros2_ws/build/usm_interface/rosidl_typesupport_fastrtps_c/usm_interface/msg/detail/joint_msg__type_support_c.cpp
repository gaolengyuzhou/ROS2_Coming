// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from usm_interface:msg/JointMsg.idl
// generated code does not contain a copyright notice
#include "usm_interface/msg/detail/joint_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "usm_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "usm_interface/msg/detail/joint_msg__struct.h"
#include "usm_interface/msg/detail/joint_msg__functions.h"
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

#include "communication_interfaces/msg/detail/thruster_msg__functions.h"  // all_controller_msg

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_usm_interface
size_t get_serialized_size_communication_interfaces__msg__ThrusterMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_usm_interface
size_t max_serialized_size_communication_interfaces__msg__ThrusterMsg(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_usm_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, communication_interfaces, msg, ThrusterMsg)();


using _JointMsg__ros_msg_type = usm_interface__msg__JointMsg;

static bool _JointMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointMsg__ros_msg_type * ros_message = static_cast<const _JointMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: all_controller_msg
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, communication_interfaces, msg, ThrusterMsg
      )()->data);
    size_t size = ros_message->all_controller_msg.size;
    auto array_ptr = ros_message->all_controller_msg.data;
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

static bool _JointMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointMsg__ros_msg_type * ros_message = static_cast<_JointMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: all_controller_msg
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, communication_interfaces, msg, ThrusterMsg
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->all_controller_msg.data) {
      communication_interfaces__msg__ThrusterMsg__Sequence__fini(&ros_message->all_controller_msg);
    }
    if (!communication_interfaces__msg__ThrusterMsg__Sequence__init(&ros_message->all_controller_msg, size)) {
      return "failed to create array for field 'all_controller_msg'";
    }
    auto array_ptr = ros_message->all_controller_msg.data;
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
size_t get_serialized_size_usm_interface__msg__JointMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointMsg__ros_msg_type * ros_message = static_cast<const _JointMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name all_controller_msg
  {
    size_t array_size = ros_message->all_controller_msg.size;
    auto array_ptr = ros_message->all_controller_msg.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_communication_interfaces__msg__ThrusterMsg(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JointMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_usm_interface__msg__JointMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_usm_interface
size_t max_serialized_size_usm_interface__msg__JointMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: all_controller_msg
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_communication_interfaces__msg__ThrusterMsg(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _JointMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_usm_interface__msg__JointMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_JointMsg = {
  "usm_interface::msg",
  "JointMsg",
  _JointMsg__cdr_serialize,
  _JointMsg__cdr_deserialize,
  _JointMsg__get_serialized_size,
  _JointMsg__max_serialized_size
};

static rosidl_message_type_support_t _JointMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, usm_interface, msg, JointMsg)() {
  return &_JointMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
