// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_interfaces:msg/ThrusterMsg.idl
// generated code does not contain a copyright notice
#include "communication_interfaces/msg/detail/thruster_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
communication_interfaces__msg__ThrusterMsg__init(communication_interfaces__msg__ThrusterMsg * msg)
{
  if (!msg) {
    return false;
  }
  // controller_id
  // controller_set
  return true;
}

void
communication_interfaces__msg__ThrusterMsg__fini(communication_interfaces__msg__ThrusterMsg * msg)
{
  if (!msg) {
    return;
  }
  // controller_id
  // controller_set
}

bool
communication_interfaces__msg__ThrusterMsg__are_equal(const communication_interfaces__msg__ThrusterMsg * lhs, const communication_interfaces__msg__ThrusterMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // controller_id
  if (lhs->controller_id != rhs->controller_id) {
    return false;
  }
  // controller_set
  if (lhs->controller_set != rhs->controller_set) {
    return false;
  }
  return true;
}

bool
communication_interfaces__msg__ThrusterMsg__copy(
  const communication_interfaces__msg__ThrusterMsg * input,
  communication_interfaces__msg__ThrusterMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // controller_id
  output->controller_id = input->controller_id;
  // controller_set
  output->controller_set = input->controller_set;
  return true;
}

communication_interfaces__msg__ThrusterMsg *
communication_interfaces__msg__ThrusterMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces__msg__ThrusterMsg * msg = (communication_interfaces__msg__ThrusterMsg *)allocator.allocate(sizeof(communication_interfaces__msg__ThrusterMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_interfaces__msg__ThrusterMsg));
  bool success = communication_interfaces__msg__ThrusterMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication_interfaces__msg__ThrusterMsg__destroy(communication_interfaces__msg__ThrusterMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication_interfaces__msg__ThrusterMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication_interfaces__msg__ThrusterMsg__Sequence__init(communication_interfaces__msg__ThrusterMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces__msg__ThrusterMsg * data = NULL;

  if (size) {
    data = (communication_interfaces__msg__ThrusterMsg *)allocator.zero_allocate(size, sizeof(communication_interfaces__msg__ThrusterMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_interfaces__msg__ThrusterMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_interfaces__msg__ThrusterMsg__fini(&data[i - 1]);
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
communication_interfaces__msg__ThrusterMsg__Sequence__fini(communication_interfaces__msg__ThrusterMsg__Sequence * array)
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
      communication_interfaces__msg__ThrusterMsg__fini(&array->data[i]);
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

communication_interfaces__msg__ThrusterMsg__Sequence *
communication_interfaces__msg__ThrusterMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces__msg__ThrusterMsg__Sequence * array = (communication_interfaces__msg__ThrusterMsg__Sequence *)allocator.allocate(sizeof(communication_interfaces__msg__ThrusterMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication_interfaces__msg__ThrusterMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication_interfaces__msg__ThrusterMsg__Sequence__destroy(communication_interfaces__msg__ThrusterMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication_interfaces__msg__ThrusterMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication_interfaces__msg__ThrusterMsg__Sequence__are_equal(const communication_interfaces__msg__ThrusterMsg__Sequence * lhs, const communication_interfaces__msg__ThrusterMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication_interfaces__msg__ThrusterMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication_interfaces__msg__ThrusterMsg__Sequence__copy(
  const communication_interfaces__msg__ThrusterMsg__Sequence * input,
  communication_interfaces__msg__ThrusterMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication_interfaces__msg__ThrusterMsg);
    communication_interfaces__msg__ThrusterMsg * data =
      (communication_interfaces__msg__ThrusterMsg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication_interfaces__msg__ThrusterMsg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          communication_interfaces__msg__ThrusterMsg__fini(&data[i]);
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
    if (!communication_interfaces__msg__ThrusterMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
