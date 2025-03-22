// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from communication_interfaces_topic:msg/Altitude.idl
// generated code does not contain a copyright notice
#include "communication_interfaces_topic/msg/detail/altitude__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "communication_interfaces_topic/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "communication_interfaces_topic/msg/detail/altitude__struct.h"
#include "communication_interfaces_topic/msg/detail/altitude__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // f_thr, tau
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // f_thr, tau

// forward declare type support functions


using _Altitude__ros_msg_type = communication_interfaces_topic__msg__Altitude;

static bool _Altitude__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Altitude__ros_msg_type * ros_message = static_cast<const _Altitude__ros_msg_type *>(untyped_ros_message);
  // Field name: p_row
  {
    cdr << ros_message->p_row;
  }

  // Field name: p_pitch
  {
    cdr << ros_message->p_pitch;
  }

  // Field name: p_yaw
  {
    cdr << ros_message->p_yaw;
  }

  // Field name: p_x
  {
    cdr << ros_message->p_x;
  }

  // Field name: p_y
  {
    cdr << ros_message->p_y;
  }

  // Field name: p_z
  {
    cdr << ros_message->p_z;
  }

  // Field name: p_row_set
  {
    cdr << ros_message->p_row_set;
  }

  // Field name: p_pitch_set
  {
    cdr << ros_message->p_pitch_set;
  }

  // Field name: p_yaw_set
  {
    cdr << ros_message->p_yaw_set;
  }

  // Field name: p_x_set
  {
    cdr << ros_message->p_x_set;
  }

  // Field name: p_y_set
  {
    cdr << ros_message->p_y_set;
  }

  // Field name: p_z_set
  {
    cdr << ros_message->p_z_set;
  }

  // Field name: p_row_e
  {
    cdr << ros_message->p_row_e;
  }

  // Field name: p_pitch_e
  {
    cdr << ros_message->p_pitch_e;
  }

  // Field name: p_yaw_e
  {
    cdr << ros_message->p_yaw_e;
  }

  // Field name: p_x_e
  {
    cdr << ros_message->p_x_e;
  }

  // Field name: p_y_e
  {
    cdr << ros_message->p_y_e;
  }

  // Field name: p_z_e
  {
    cdr << ros_message->p_z_e;
  }

  // Field name: tau
  {
    size_t size = ros_message->tau.size;
    auto array_ptr = ros_message->tau.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: f_thr
  {
    size_t size = ros_message->f_thr.size;
    auto array_ptr = ros_message->f_thr.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: p1
  {
    cdr << ros_message->p1;
  }

  // Field name: p2
  {
    cdr << ros_message->p2;
  }

  return true;
}

static bool _Altitude__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Altitude__ros_msg_type * ros_message = static_cast<_Altitude__ros_msg_type *>(untyped_ros_message);
  // Field name: p_row
  {
    cdr >> ros_message->p_row;
  }

  // Field name: p_pitch
  {
    cdr >> ros_message->p_pitch;
  }

  // Field name: p_yaw
  {
    cdr >> ros_message->p_yaw;
  }

  // Field name: p_x
  {
    cdr >> ros_message->p_x;
  }

  // Field name: p_y
  {
    cdr >> ros_message->p_y;
  }

  // Field name: p_z
  {
    cdr >> ros_message->p_z;
  }

  // Field name: p_row_set
  {
    cdr >> ros_message->p_row_set;
  }

  // Field name: p_pitch_set
  {
    cdr >> ros_message->p_pitch_set;
  }

  // Field name: p_yaw_set
  {
    cdr >> ros_message->p_yaw_set;
  }

  // Field name: p_x_set
  {
    cdr >> ros_message->p_x_set;
  }

  // Field name: p_y_set
  {
    cdr >> ros_message->p_y_set;
  }

  // Field name: p_z_set
  {
    cdr >> ros_message->p_z_set;
  }

  // Field name: p_row_e
  {
    cdr >> ros_message->p_row_e;
  }

  // Field name: p_pitch_e
  {
    cdr >> ros_message->p_pitch_e;
  }

  // Field name: p_yaw_e
  {
    cdr >> ros_message->p_yaw_e;
  }

  // Field name: p_x_e
  {
    cdr >> ros_message->p_x_e;
  }

  // Field name: p_y_e
  {
    cdr >> ros_message->p_y_e;
  }

  // Field name: p_z_e
  {
    cdr >> ros_message->p_z_e;
  }

  // Field name: tau
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tau.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->tau);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->tau, size)) {
      return "failed to create array for field 'tau'";
    }
    auto array_ptr = ros_message->tau.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: f_thr
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->f_thr.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->f_thr);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->f_thr, size)) {
      return "failed to create array for field 'f_thr'";
    }
    auto array_ptr = ros_message->f_thr.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: p1
  {
    cdr >> ros_message->p1;
  }

  // Field name: p2
  {
    cdr >> ros_message->p2;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_communication_interfaces_topic
size_t get_serialized_size_communication_interfaces_topic__msg__Altitude(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Altitude__ros_msg_type * ros_message = static_cast<const _Altitude__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name p_row
  {
    size_t item_size = sizeof(ros_message->p_row);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_pitch
  {
    size_t item_size = sizeof(ros_message->p_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_yaw
  {
    size_t item_size = sizeof(ros_message->p_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_x
  {
    size_t item_size = sizeof(ros_message->p_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_y
  {
    size_t item_size = sizeof(ros_message->p_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_z
  {
    size_t item_size = sizeof(ros_message->p_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_row_set
  {
    size_t item_size = sizeof(ros_message->p_row_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_pitch_set
  {
    size_t item_size = sizeof(ros_message->p_pitch_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_yaw_set
  {
    size_t item_size = sizeof(ros_message->p_yaw_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_x_set
  {
    size_t item_size = sizeof(ros_message->p_x_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_y_set
  {
    size_t item_size = sizeof(ros_message->p_y_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_z_set
  {
    size_t item_size = sizeof(ros_message->p_z_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_row_e
  {
    size_t item_size = sizeof(ros_message->p_row_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_pitch_e
  {
    size_t item_size = sizeof(ros_message->p_pitch_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_yaw_e
  {
    size_t item_size = sizeof(ros_message->p_yaw_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_x_e
  {
    size_t item_size = sizeof(ros_message->p_x_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_y_e
  {
    size_t item_size = sizeof(ros_message->p_y_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_z_e
  {
    size_t item_size = sizeof(ros_message->p_z_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tau
  {
    size_t array_size = ros_message->tau.size;
    auto array_ptr = ros_message->tau.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f_thr
  {
    size_t array_size = ros_message->f_thr.size;
    auto array_ptr = ros_message->f_thr.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p1
  {
    size_t item_size = sizeof(ros_message->p1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p2
  {
    size_t item_size = sizeof(ros_message->p2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Altitude__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_communication_interfaces_topic__msg__Altitude(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_communication_interfaces_topic
size_t max_serialized_size_communication_interfaces_topic__msg__Altitude(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: p_row
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_row_set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_pitch_set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_yaw_set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_x_set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_y_set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_z_set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_row_e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_pitch_e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_yaw_e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_x_e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_y_e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_z_e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tau
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: f_thr
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Altitude__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_communication_interfaces_topic__msg__Altitude(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Altitude = {
  "communication_interfaces_topic::msg",
  "Altitude",
  _Altitude__cdr_serialize,
  _Altitude__cdr_deserialize,
  _Altitude__get_serialized_size,
  _Altitude__max_serialized_size
};

static rosidl_message_type_support_t _Altitude__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Altitude,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, communication_interfaces_topic, msg, Altitude)() {
  return &_Altitude__type_support;
}

#if defined(__cplusplus)
}
#endif
