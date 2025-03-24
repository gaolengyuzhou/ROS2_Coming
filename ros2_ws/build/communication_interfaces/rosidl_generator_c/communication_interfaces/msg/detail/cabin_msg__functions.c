// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_interfaces:msg/CabinMsg.idl
// generated code does not contain a copyright notice
#include "communication_interfaces/msg/detail/cabin_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
communication_interfaces__msg__CabinMsg__init(communication_interfaces__msg__CabinMsg * msg)
{
  if (!msg) {
    return false;
  }
  // cabin_id
  // temperature
  // humidity
  // pressure
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    communication_interfaces__msg__CabinMsg__fini(msg);
    return false;
  }
  return true;
}

void
communication_interfaces__msg__CabinMsg__fini(communication_interfaces__msg__CabinMsg * msg)
{
  if (!msg) {
    return;
  }
  // cabin_id
  // temperature
  // humidity
  // pressure
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
communication_interfaces__msg__CabinMsg__are_equal(const communication_interfaces__msg__CabinMsg * lhs, const communication_interfaces__msg__CabinMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cabin_id
  if (lhs->cabin_id != rhs->cabin_id) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // humidity
  if (lhs->humidity != rhs->humidity) {
    return false;
  }
  // pressure
  if (lhs->pressure != rhs->pressure) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
communication_interfaces__msg__CabinMsg__copy(
  const communication_interfaces__msg__CabinMsg * input,
  communication_interfaces__msg__CabinMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // cabin_id
  output->cabin_id = input->cabin_id;
  // temperature
  output->temperature = input->temperature;
  // humidity
  output->humidity = input->humidity;
  // pressure
  output->pressure = input->pressure;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

communication_interfaces__msg__CabinMsg *
communication_interfaces__msg__CabinMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces__msg__CabinMsg * msg = (communication_interfaces__msg__CabinMsg *)allocator.allocate(sizeof(communication_interfaces__msg__CabinMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_interfaces__msg__CabinMsg));
  bool success = communication_interfaces__msg__CabinMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication_interfaces__msg__CabinMsg__destroy(communication_interfaces__msg__CabinMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication_interfaces__msg__CabinMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication_interfaces__msg__CabinMsg__Sequence__init(communication_interfaces__msg__CabinMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces__msg__CabinMsg * data = NULL;

  if (size) {
    data = (communication_interfaces__msg__CabinMsg *)allocator.zero_allocate(size, sizeof(communication_interfaces__msg__CabinMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_interfaces__msg__CabinMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_interfaces__msg__CabinMsg__fini(&data[i - 1]);
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
communication_interfaces__msg__CabinMsg__Sequence__fini(communication_interfaces__msg__CabinMsg__Sequence * array)
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
      communication_interfaces__msg__CabinMsg__fini(&array->data[i]);
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

communication_interfaces__msg__CabinMsg__Sequence *
communication_interfaces__msg__CabinMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces__msg__CabinMsg__Sequence * array = (communication_interfaces__msg__CabinMsg__Sequence *)allocator.allocate(sizeof(communication_interfaces__msg__CabinMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication_interfaces__msg__CabinMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication_interfaces__msg__CabinMsg__Sequence__destroy(communication_interfaces__msg__CabinMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication_interfaces__msg__CabinMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication_interfaces__msg__CabinMsg__Sequence__are_equal(const communication_interfaces__msg__CabinMsg__Sequence * lhs, const communication_interfaces__msg__CabinMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication_interfaces__msg__CabinMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication_interfaces__msg__CabinMsg__Sequence__copy(
  const communication_interfaces__msg__CabinMsg__Sequence * input,
  communication_interfaces__msg__CabinMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication_interfaces__msg__CabinMsg);
    communication_interfaces__msg__CabinMsg * data =
      (communication_interfaces__msg__CabinMsg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication_interfaces__msg__CabinMsg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          communication_interfaces__msg__CabinMsg__fini(&data[i]);
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
    if (!communication_interfaces__msg__CabinMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
