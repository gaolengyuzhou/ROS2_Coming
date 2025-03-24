// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from usm_interface:msg/LedMsg.idl
// generated code does not contain a copyright notice
#include "usm_interface/msg/detail/led_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
usm_interface__msg__LedMsg__init(usm_interface__msg__LedMsg * msg)
{
  if (!msg) {
    return false;
  }
  // led_id
  // on
  return true;
}

void
usm_interface__msg__LedMsg__fini(usm_interface__msg__LedMsg * msg)
{
  if (!msg) {
    return;
  }
  // led_id
  // on
}

bool
usm_interface__msg__LedMsg__are_equal(const usm_interface__msg__LedMsg * lhs, const usm_interface__msg__LedMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_id
  if (lhs->led_id != rhs->led_id) {
    return false;
  }
  // on
  if (lhs->on != rhs->on) {
    return false;
  }
  return true;
}

bool
usm_interface__msg__LedMsg__copy(
  const usm_interface__msg__LedMsg * input,
  usm_interface__msg__LedMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // led_id
  output->led_id = input->led_id;
  // on
  output->on = input->on;
  return true;
}

usm_interface__msg__LedMsg *
usm_interface__msg__LedMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  usm_interface__msg__LedMsg * msg = (usm_interface__msg__LedMsg *)allocator.allocate(sizeof(usm_interface__msg__LedMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(usm_interface__msg__LedMsg));
  bool success = usm_interface__msg__LedMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
usm_interface__msg__LedMsg__destroy(usm_interface__msg__LedMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    usm_interface__msg__LedMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
usm_interface__msg__LedMsg__Sequence__init(usm_interface__msg__LedMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  usm_interface__msg__LedMsg * data = NULL;

  if (size) {
    data = (usm_interface__msg__LedMsg *)allocator.zero_allocate(size, sizeof(usm_interface__msg__LedMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = usm_interface__msg__LedMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        usm_interface__msg__LedMsg__fini(&data[i - 1]);
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
usm_interface__msg__LedMsg__Sequence__fini(usm_interface__msg__LedMsg__Sequence * array)
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
      usm_interface__msg__LedMsg__fini(&array->data[i]);
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

usm_interface__msg__LedMsg__Sequence *
usm_interface__msg__LedMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  usm_interface__msg__LedMsg__Sequence * array = (usm_interface__msg__LedMsg__Sequence *)allocator.allocate(sizeof(usm_interface__msg__LedMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = usm_interface__msg__LedMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
usm_interface__msg__LedMsg__Sequence__destroy(usm_interface__msg__LedMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    usm_interface__msg__LedMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
usm_interface__msg__LedMsg__Sequence__are_equal(const usm_interface__msg__LedMsg__Sequence * lhs, const usm_interface__msg__LedMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!usm_interface__msg__LedMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
usm_interface__msg__LedMsg__Sequence__copy(
  const usm_interface__msg__LedMsg__Sequence * input,
  usm_interface__msg__LedMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(usm_interface__msg__LedMsg);
    usm_interface__msg__LedMsg * data =
      (usm_interface__msg__LedMsg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!usm_interface__msg__LedMsg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          usm_interface__msg__LedMsg__fini(&data[i]);
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
    if (!usm_interface__msg__LedMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
