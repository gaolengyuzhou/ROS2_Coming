// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from communication_interfaces_topic:msg/AHRS.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__AHRS__FUNCTIONS_H_
#define COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__AHRS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "communication_interfaces_topic/msg/rosidl_generator_c__visibility_control.h"

#include "communication_interfaces_topic/msg/detail/ahrs__struct.h"

/// Initialize msg/AHRS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * communication_interfaces_topic__msg__AHRS
 * )) before or use
 * communication_interfaces_topic__msg__AHRS__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_interfaces_topic
bool
communication_interfaces_topic__msg__AHRS__init(communication_interfaces_topic__msg__AHRS * msg);

/// Finalize msg/AHRS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_interfaces_topic
void
communication_interfaces_topic__msg__AHRS__fini(communication_interfaces_topic__msg__AHRS * msg);

/// Create msg/AHRS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * communication_interfaces_topic__msg__AHRS__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_interfaces_topic
communication_interfaces_topic__msg__AHRS *
communication_interfaces_topic__msg__AHRS__create();

/// Destroy msg/AHRS message.
/**
 * It calls
 * communication_interfaces_topic__msg__AHRS__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_interfaces_topic
void
communication_interfaces_topic__msg__AHRS__destroy(communication_interfaces_topic__msg__AHRS * msg);

/// Check for msg/AHRS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_interfaces_topic
bool
communication_interfaces_topic__msg__AHRS__are_equal(const communication_interfaces_topic__msg__AHRS * lhs, const communication_interfaces_topic__msg__AHRS * rhs);

/// Copy a msg/AHRS message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_interfaces_topic
bool
communication_interfaces_topic__msg__AHRS__copy(
  const communication_interfaces_topic__msg__AHRS * input,
  communication_interfaces_topic__msg__AHRS * output);

/// Initialize array of msg/AHRS messages.
/**
 * It allocates the memory for the number of elements and calls
 * communication_interfaces_topic__msg__AHRS__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_interfaces_topic
bool
communication_interfaces_topic__msg__AHRS__Sequence__init(communication_interfaces_topic__msg__AHRS__Sequence * array, size_t size);

/// Finalize array of msg/AHRS messages.
/**
 * It calls
 * communication_interfaces_topic__msg__AHRS__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_interfaces_topic
void
communication_interfaces_topic__msg__AHRS__Sequence__fini(communication_interfaces_topic__msg__AHRS__Sequence * array);

/// Create array of msg/AHRS messages.
/**
 * It allocates the memory for the array and calls
 * communication_interfaces_topic__msg__AHRS__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_interfaces_topic
communication_interfaces_topic__msg__AHRS__Sequence *
communication_interfaces_topic__msg__AHRS__Sequence__create(size_t size);

/// Destroy array of msg/AHRS messages.
/**
 * It calls
 * communication_interfaces_topic__msg__AHRS__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_interfaces_topic
void
communication_interfaces_topic__msg__AHRS__Sequence__destroy(communication_interfaces_topic__msg__AHRS__Sequence * array);

/// Check for msg/AHRS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_interfaces_topic
bool
communication_interfaces_topic__msg__AHRS__Sequence__are_equal(const communication_interfaces_topic__msg__AHRS__Sequence * lhs, const communication_interfaces_topic__msg__AHRS__Sequence * rhs);

/// Copy an array of msg/AHRS messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_interfaces_topic
bool
communication_interfaces_topic__msg__AHRS__Sequence__copy(
  const communication_interfaces_topic__msg__AHRS__Sequence * input,
  communication_interfaces_topic__msg__AHRS__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES_TOPIC__MSG__DETAIL__AHRS__FUNCTIONS_H_
