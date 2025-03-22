// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_interfaces_topic:msg/AHRS.idl
// generated code does not contain a copyright notice
#include "communication_interfaces_topic/msg/detail/ahrs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
communication_interfaces_topic__msg__AHRS__init(communication_interfaces_topic__msg__AHRS * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    communication_interfaces_topic__msg__AHRS__fini(msg);
    return false;
  }
  // ahrs_data
  return true;
}

void
communication_interfaces_topic__msg__AHRS__fini(communication_interfaces_topic__msg__AHRS * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // ahrs_data
}

bool
communication_interfaces_topic__msg__AHRS__are_equal(const communication_interfaces_topic__msg__AHRS * lhs, const communication_interfaces_topic__msg__AHRS * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // ahrs_data
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->ahrs_data[i] != rhs->ahrs_data[i]) {
      return false;
    }
  }
  return true;
}

bool
communication_interfaces_topic__msg__AHRS__copy(
  const communication_interfaces_topic__msg__AHRS * input,
  communication_interfaces_topic__msg__AHRS * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // ahrs_data
  for (size_t i = 0; i < 6; ++i) {
    output->ahrs_data[i] = input->ahrs_data[i];
  }
  return true;
}

communication_interfaces_topic__msg__AHRS *
communication_interfaces_topic__msg__AHRS__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces_topic__msg__AHRS * msg = (communication_interfaces_topic__msg__AHRS *)allocator.allocate(sizeof(communication_interfaces_topic__msg__AHRS), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_interfaces_topic__msg__AHRS));
  bool success = communication_interfaces_topic__msg__AHRS__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication_interfaces_topic__msg__AHRS__destroy(communication_interfaces_topic__msg__AHRS * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication_interfaces_topic__msg__AHRS__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication_interfaces_topic__msg__AHRS__Sequence__init(communication_interfaces_topic__msg__AHRS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces_topic__msg__AHRS * data = NULL;

  if (size) {
    data = (communication_interfaces_topic__msg__AHRS *)allocator.zero_allocate(size, sizeof(communication_interfaces_topic__msg__AHRS), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_interfaces_topic__msg__AHRS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_interfaces_topic__msg__AHRS__fini(&data[i - 1]);
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
communication_interfaces_topic__msg__AHRS__Sequence__fini(communication_interfaces_topic__msg__AHRS__Sequence * array)
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
      communication_interfaces_topic__msg__AHRS__fini(&array->data[i]);
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

communication_interfaces_topic__msg__AHRS__Sequence *
communication_interfaces_topic__msg__AHRS__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces_topic__msg__AHRS__Sequence * array = (communication_interfaces_topic__msg__AHRS__Sequence *)allocator.allocate(sizeof(communication_interfaces_topic__msg__AHRS__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication_interfaces_topic__msg__AHRS__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication_interfaces_topic__msg__AHRS__Sequence__destroy(communication_interfaces_topic__msg__AHRS__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication_interfaces_topic__msg__AHRS__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication_interfaces_topic__msg__AHRS__Sequence__are_equal(const communication_interfaces_topic__msg__AHRS__Sequence * lhs, const communication_interfaces_topic__msg__AHRS__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication_interfaces_topic__msg__AHRS__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication_interfaces_topic__msg__AHRS__Sequence__copy(
  const communication_interfaces_topic__msg__AHRS__Sequence * input,
  communication_interfaces_topic__msg__AHRS__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication_interfaces_topic__msg__AHRS);
    communication_interfaces_topic__msg__AHRS * data =
      (communication_interfaces_topic__msg__AHRS *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication_interfaces_topic__msg__AHRS__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          communication_interfaces_topic__msg__AHRS__fini(&data[i]);
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
    if (!communication_interfaces_topic__msg__AHRS__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
