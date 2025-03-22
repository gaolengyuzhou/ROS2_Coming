// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from communication_interfaces_topic:msg/Altitude.idl
// generated code does not contain a copyright notice
#include "communication_interfaces_topic/msg/detail/altitude__rosidl_typesupport_fastrtps_cpp.hpp"
#include "communication_interfaces_topic/msg/detail/altitude__struct.hpp"

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

namespace communication_interfaces_topic
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication_interfaces_topic
cdr_serialize(
  const communication_interfaces_topic::msg::Altitude & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: p_row
  cdr << ros_message.p_row;
  // Member: p_pitch
  cdr << ros_message.p_pitch;
  // Member: p_yaw
  cdr << ros_message.p_yaw;
  // Member: p_x
  cdr << ros_message.p_x;
  // Member: p_y
  cdr << ros_message.p_y;
  // Member: p_z
  cdr << ros_message.p_z;
  // Member: p_row_set
  cdr << ros_message.p_row_set;
  // Member: p_pitch_set
  cdr << ros_message.p_pitch_set;
  // Member: p_yaw_set
  cdr << ros_message.p_yaw_set;
  // Member: p_x_set
  cdr << ros_message.p_x_set;
  // Member: p_y_set
  cdr << ros_message.p_y_set;
  // Member: p_z_set
  cdr << ros_message.p_z_set;
  // Member: p_row_e
  cdr << ros_message.p_row_e;
  // Member: p_pitch_e
  cdr << ros_message.p_pitch_e;
  // Member: p_yaw_e
  cdr << ros_message.p_yaw_e;
  // Member: p_x_e
  cdr << ros_message.p_x_e;
  // Member: p_y_e
  cdr << ros_message.p_y_e;
  // Member: p_z_e
  cdr << ros_message.p_z_e;
  // Member: tau
  {
    cdr << ros_message.tau;
  }
  // Member: f_thr
  {
    cdr << ros_message.f_thr;
  }
  // Member: p1
  cdr << ros_message.p1;
  // Member: p2
  cdr << ros_message.p2;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication_interfaces_topic
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  communication_interfaces_topic::msg::Altitude & ros_message)
{
  // Member: p_row
  cdr >> ros_message.p_row;

  // Member: p_pitch
  cdr >> ros_message.p_pitch;

  // Member: p_yaw
  cdr >> ros_message.p_yaw;

  // Member: p_x
  cdr >> ros_message.p_x;

  // Member: p_y
  cdr >> ros_message.p_y;

  // Member: p_z
  cdr >> ros_message.p_z;

  // Member: p_row_set
  cdr >> ros_message.p_row_set;

  // Member: p_pitch_set
  cdr >> ros_message.p_pitch_set;

  // Member: p_yaw_set
  cdr >> ros_message.p_yaw_set;

  // Member: p_x_set
  cdr >> ros_message.p_x_set;

  // Member: p_y_set
  cdr >> ros_message.p_y_set;

  // Member: p_z_set
  cdr >> ros_message.p_z_set;

  // Member: p_row_e
  cdr >> ros_message.p_row_e;

  // Member: p_pitch_e
  cdr >> ros_message.p_pitch_e;

  // Member: p_yaw_e
  cdr >> ros_message.p_yaw_e;

  // Member: p_x_e
  cdr >> ros_message.p_x_e;

  // Member: p_y_e
  cdr >> ros_message.p_y_e;

  // Member: p_z_e
  cdr >> ros_message.p_z_e;

  // Member: tau
  {
    cdr >> ros_message.tau;
  }

  // Member: f_thr
  {
    cdr >> ros_message.f_thr;
  }

  // Member: p1
  cdr >> ros_message.p1;

  // Member: p2
  cdr >> ros_message.p2;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication_interfaces_topic
get_serialized_size(
  const communication_interfaces_topic::msg::Altitude & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: p_row
  {
    size_t item_size = sizeof(ros_message.p_row);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_pitch
  {
    size_t item_size = sizeof(ros_message.p_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_yaw
  {
    size_t item_size = sizeof(ros_message.p_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_x
  {
    size_t item_size = sizeof(ros_message.p_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_y
  {
    size_t item_size = sizeof(ros_message.p_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_z
  {
    size_t item_size = sizeof(ros_message.p_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_row_set
  {
    size_t item_size = sizeof(ros_message.p_row_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_pitch_set
  {
    size_t item_size = sizeof(ros_message.p_pitch_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_yaw_set
  {
    size_t item_size = sizeof(ros_message.p_yaw_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_x_set
  {
    size_t item_size = sizeof(ros_message.p_x_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_y_set
  {
    size_t item_size = sizeof(ros_message.p_y_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_z_set
  {
    size_t item_size = sizeof(ros_message.p_z_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_row_e
  {
    size_t item_size = sizeof(ros_message.p_row_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_pitch_e
  {
    size_t item_size = sizeof(ros_message.p_pitch_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_yaw_e
  {
    size_t item_size = sizeof(ros_message.p_yaw_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_x_e
  {
    size_t item_size = sizeof(ros_message.p_x_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_y_e
  {
    size_t item_size = sizeof(ros_message.p_y_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_z_e
  {
    size_t item_size = sizeof(ros_message.p_z_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tau
  {
    size_t array_size = ros_message.tau.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tau[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f_thr
  {
    size_t array_size = ros_message.f_thr.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.f_thr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p1
  {
    size_t item_size = sizeof(ros_message.p1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p2
  {
    size_t item_size = sizeof(ros_message.p2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication_interfaces_topic
max_serialized_size_Altitude(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: p_row
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_row_set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_pitch_set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_yaw_set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_x_set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_y_set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_z_set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_row_e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_pitch_e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_yaw_e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_x_e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_y_e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_z_e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tau
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: f_thr
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Altitude__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const communication_interfaces_topic::msg::Altitude *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Altitude__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<communication_interfaces_topic::msg::Altitude *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Altitude__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const communication_interfaces_topic::msg::Altitude *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Altitude__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Altitude(full_bounded, 0);
}

static message_type_support_callbacks_t _Altitude__callbacks = {
  "communication_interfaces_topic::msg",
  "Altitude",
  _Altitude__cdr_serialize,
  _Altitude__cdr_deserialize,
  _Altitude__get_serialized_size,
  _Altitude__max_serialized_size
};

static rosidl_message_type_support_t _Altitude__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Altitude__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace communication_interfaces_topic

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_communication_interfaces_topic
const rosidl_message_type_support_t *
get_message_type_support_handle<communication_interfaces_topic::msg::Altitude>()
{
  return &communication_interfaces_topic::msg::typesupport_fastrtps_cpp::_Altitude__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, communication_interfaces_topic, msg, Altitude)() {
  return &communication_interfaces_topic::msg::typesupport_fastrtps_cpp::_Altitude__handle;
}

#ifdef __cplusplus
}
#endif
