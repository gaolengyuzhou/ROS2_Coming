// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_interfaces_topic:msg/Altitude.idl
// generated code does not contain a copyright notice
#include "communication_interfaces_topic/msg/detail/altitude__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tau`
// Member `f_thr`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
communication_interfaces_topic__msg__Altitude__init(communication_interfaces_topic__msg__Altitude * msg)
{
  if (!msg) {
    return false;
  }
  // p_row
  // p_pitch
  // p_yaw
  // p_x
  // p_y
  // p_z
  // p_row_set
  // p_pitch_set
  // p_yaw_set
  // p_x_set
  // p_y_set
  // p_z_set
  // p_row_e
  // p_pitch_e
  // p_yaw_e
  // p_x_e
  // p_y_e
  // p_z_e
  // tau
  if (!rosidl_runtime_c__float__Sequence__init(&msg->tau, 0)) {
    communication_interfaces_topic__msg__Altitude__fini(msg);
    return false;
  }
  // f_thr
  if (!rosidl_runtime_c__float__Sequence__init(&msg->f_thr, 0)) {
    communication_interfaces_topic__msg__Altitude__fini(msg);
    return false;
  }
  // p1
  // p2
  return true;
}

void
communication_interfaces_topic__msg__Altitude__fini(communication_interfaces_topic__msg__Altitude * msg)
{
  if (!msg) {
    return;
  }
  // p_row
  // p_pitch
  // p_yaw
  // p_x
  // p_y
  // p_z
  // p_row_set
  // p_pitch_set
  // p_yaw_set
  // p_x_set
  // p_y_set
  // p_z_set
  // p_row_e
  // p_pitch_e
  // p_yaw_e
  // p_x_e
  // p_y_e
  // p_z_e
  // tau
  rosidl_runtime_c__float__Sequence__fini(&msg->tau);
  // f_thr
  rosidl_runtime_c__float__Sequence__fini(&msg->f_thr);
  // p1
  // p2
}

bool
communication_interfaces_topic__msg__Altitude__are_equal(const communication_interfaces_topic__msg__Altitude * lhs, const communication_interfaces_topic__msg__Altitude * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // p_row
  if (lhs->p_row != rhs->p_row) {
    return false;
  }
  // p_pitch
  if (lhs->p_pitch != rhs->p_pitch) {
    return false;
  }
  // p_yaw
  if (lhs->p_yaw != rhs->p_yaw) {
    return false;
  }
  // p_x
  if (lhs->p_x != rhs->p_x) {
    return false;
  }
  // p_y
  if (lhs->p_y != rhs->p_y) {
    return false;
  }
  // p_z
  if (lhs->p_z != rhs->p_z) {
    return false;
  }
  // p_row_set
  if (lhs->p_row_set != rhs->p_row_set) {
    return false;
  }
  // p_pitch_set
  if (lhs->p_pitch_set != rhs->p_pitch_set) {
    return false;
  }
  // p_yaw_set
  if (lhs->p_yaw_set != rhs->p_yaw_set) {
    return false;
  }
  // p_x_set
  if (lhs->p_x_set != rhs->p_x_set) {
    return false;
  }
  // p_y_set
  if (lhs->p_y_set != rhs->p_y_set) {
    return false;
  }
  // p_z_set
  if (lhs->p_z_set != rhs->p_z_set) {
    return false;
  }
  // p_row_e
  if (lhs->p_row_e != rhs->p_row_e) {
    return false;
  }
  // p_pitch_e
  if (lhs->p_pitch_e != rhs->p_pitch_e) {
    return false;
  }
  // p_yaw_e
  if (lhs->p_yaw_e != rhs->p_yaw_e) {
    return false;
  }
  // p_x_e
  if (lhs->p_x_e != rhs->p_x_e) {
    return false;
  }
  // p_y_e
  if (lhs->p_y_e != rhs->p_y_e) {
    return false;
  }
  // p_z_e
  if (lhs->p_z_e != rhs->p_z_e) {
    return false;
  }
  // tau
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->tau), &(rhs->tau)))
  {
    return false;
  }
  // f_thr
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->f_thr), &(rhs->f_thr)))
  {
    return false;
  }
  // p1
  if (lhs->p1 != rhs->p1) {
    return false;
  }
  // p2
  if (lhs->p2 != rhs->p2) {
    return false;
  }
  return true;
}

bool
communication_interfaces_topic__msg__Altitude__copy(
  const communication_interfaces_topic__msg__Altitude * input,
  communication_interfaces_topic__msg__Altitude * output)
{
  if (!input || !output) {
    return false;
  }
  // p_row
  output->p_row = input->p_row;
  // p_pitch
  output->p_pitch = input->p_pitch;
  // p_yaw
  output->p_yaw = input->p_yaw;
  // p_x
  output->p_x = input->p_x;
  // p_y
  output->p_y = input->p_y;
  // p_z
  output->p_z = input->p_z;
  // p_row_set
  output->p_row_set = input->p_row_set;
  // p_pitch_set
  output->p_pitch_set = input->p_pitch_set;
  // p_yaw_set
  output->p_yaw_set = input->p_yaw_set;
  // p_x_set
  output->p_x_set = input->p_x_set;
  // p_y_set
  output->p_y_set = input->p_y_set;
  // p_z_set
  output->p_z_set = input->p_z_set;
  // p_row_e
  output->p_row_e = input->p_row_e;
  // p_pitch_e
  output->p_pitch_e = input->p_pitch_e;
  // p_yaw_e
  output->p_yaw_e = input->p_yaw_e;
  // p_x_e
  output->p_x_e = input->p_x_e;
  // p_y_e
  output->p_y_e = input->p_y_e;
  // p_z_e
  output->p_z_e = input->p_z_e;
  // tau
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->tau), &(output->tau)))
  {
    return false;
  }
  // f_thr
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->f_thr), &(output->f_thr)))
  {
    return false;
  }
  // p1
  output->p1 = input->p1;
  // p2
  output->p2 = input->p2;
  return true;
}

communication_interfaces_topic__msg__Altitude *
communication_interfaces_topic__msg__Altitude__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces_topic__msg__Altitude * msg = (communication_interfaces_topic__msg__Altitude *)allocator.allocate(sizeof(communication_interfaces_topic__msg__Altitude), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_interfaces_topic__msg__Altitude));
  bool success = communication_interfaces_topic__msg__Altitude__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication_interfaces_topic__msg__Altitude__destroy(communication_interfaces_topic__msg__Altitude * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication_interfaces_topic__msg__Altitude__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication_interfaces_topic__msg__Altitude__Sequence__init(communication_interfaces_topic__msg__Altitude__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces_topic__msg__Altitude * data = NULL;

  if (size) {
    data = (communication_interfaces_topic__msg__Altitude *)allocator.zero_allocate(size, sizeof(communication_interfaces_topic__msg__Altitude), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_interfaces_topic__msg__Altitude__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_interfaces_topic__msg__Altitude__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
communication_interfaces_topic__msg__Altitude__Sequence__fini(communication_interfaces_topic__msg__Altitude__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      communication_interfaces_topic__msg__Altitude__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

communication_interfaces_topic__msg__Altitude__Sequence *
communication_interfaces_topic__msg__Altitude__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces_topic__msg__Altitude__Sequence * array = (communication_interfaces_topic__msg__Altitude__Sequence *)allocator.allocate(sizeof(communication_interfaces_topic__msg__Altitude__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication_interfaces_topic__msg__Altitude__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication_interfaces_topic__msg__Altitude__Sequence__destroy(communication_interfaces_topic__msg__Altitude__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication_interfaces_topic__msg__Altitude__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication_interfaces_topic__msg__Altitude__Sequence__are_equal(const communication_interfaces_topic__msg__Altitude__Sequence * lhs, const communication_interfaces_topic__msg__Altitude__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication_interfaces_topic__msg__Altitude__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication_interfaces_topic__msg__Altitude__Sequence__copy(
  const communication_interfaces_topic__msg__Altitude__Sequence * input,
  communication_interfaces_topic__msg__Altitude__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication_interfaces_topic__msg__Altitude);
    communication_interfaces_topic__msg__Altitude * data =
      (communication_interfaces_topic__msg__Altitude *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication_interfaces_topic__msg__Altitude__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          communication_interfaces_topic__msg__Altitude__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication_interfaces_topic__msg__Altitude__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
