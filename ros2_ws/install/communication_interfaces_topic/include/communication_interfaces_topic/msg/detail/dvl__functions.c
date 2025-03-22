// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_interfaces_topic:msg/DVL.idl
// generated code does not contain a copyright notice
#include "communication_interfaces_topic/msg/detail/dvl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
communication_interfaces_topic__msg__DVL__init(communication_interfaces_topic__msg__DVL * msg)
{
  if (!msg) {
    return false;
  }
  // dvl_data
  return true;
}

void
communication_interfaces_topic__msg__DVL__fini(communication_interfaces_topic__msg__DVL * msg)
{
  if (!msg) {
    return;
  }
  // dvl_data
}

bool
communication_interfaces_topic__msg__DVL__are_equal(const communication_interfaces_topic__msg__DVL * lhs, const communication_interfaces_topic__msg__DVL * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dvl_data
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->dvl_data[i] != rhs->dvl_data[i]) {
      return false;
    }
  }
  return true;
}

bool
communication_interfaces_topic__msg__DVL__copy(
  const communication_interfaces_topic__msg__DVL * input,
  communication_interfaces_topic__msg__DVL * output)
{
  if (!input || !output) {
    return false;
  }
  // dvl_data
  for (size_t i = 0; i < 9; ++i) {
    output->dvl_data[i] = input->dvl_data[i];
  }
  return true;
}

communication_interfaces_topic__msg__DVL *
communication_interfaces_topic__msg__DVL__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces_topic__msg__DVL * msg = (communication_interfaces_topic__msg__DVL *)allocator.allocate(sizeof(communication_interfaces_topic__msg__DVL), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_interfaces_topic__msg__DVL));
  bool success = communication_interfaces_topic__msg__DVL__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication_interfaces_topic__msg__DVL__destroy(communication_interfaces_topic__msg__DVL * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication_interfaces_topic__msg__DVL__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication_interfaces_topic__msg__DVL__Sequence__init(communication_interfaces_topic__msg__DVL__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces_topic__msg__DVL * data = NULL;

  if (size) {
    data = (communication_interfaces_topic__msg__DVL *)allocator.zero_allocate(size, sizeof(communication_interfaces_topic__msg__DVL), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_interfaces_topic__msg__DVL__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_interfaces_topic__msg__DVL__fini(&data[i - 1]);
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
communication_interfaces_topic__msg__DVL__Sequence__fini(communication_interfaces_topic__msg__DVL__Sequence * array)
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
      communication_interfaces_topic__msg__DVL__fini(&array->data[i]);
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

communication_interfaces_topic__msg__DVL__Sequence *
communication_interfaces_topic__msg__DVL__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces_topic__msg__DVL__Sequence * array = (communication_interfaces_topic__msg__DVL__Sequence *)allocator.allocate(sizeof(communication_interfaces_topic__msg__DVL__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication_interfaces_topic__msg__DVL__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication_interfaces_topic__msg__DVL__Sequence__destroy(communication_interfaces_topic__msg__DVL__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication_interfaces_topic__msg__DVL__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication_interfaces_topic__msg__DVL__Sequence__are_equal(const communication_interfaces_topic__msg__DVL__Sequence * lhs, const communication_interfaces_topic__msg__DVL__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication_interfaces_topic__msg__DVL__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication_interfaces_topic__msg__DVL__Sequence__copy(
  const communication_interfaces_topic__msg__DVL__Sequence * input,
  communication_interfaces_topic__msg__DVL__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication_interfaces_topic__msg__DVL);
    communication_interfaces_topic__msg__DVL * data =
      (communication_interfaces_topic__msg__DVL *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication_interfaces_topic__msg__DVL__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          communication_interfaces_topic__msg__DVL__fini(&data[i]);
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
    if (!communication_interfaces_topic__msg__DVL__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
