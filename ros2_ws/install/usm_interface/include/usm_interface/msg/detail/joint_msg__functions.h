// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from usm_interface:msg/JointMsg.idl
// generated code does not contain a copyright notice

#ifndef USM_INTERFACE__MSG__DETAIL__JOINT_MSG__FUNCTIONS_H_
#define USM_INTERFACE__MSG__DETAIL__JOINT_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "usm_interface/msg/rosidl_generator_c__visibility_control.h"

#include "usm_interface/msg/detail/joint_msg__struct.h"

/// Initialize msg/JointMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * usm_interface__msg__JointMsg
 * )) before or use
 * usm_interface__msg__JointMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_usm_interface
bool
usm_interface__msg__JointMsg__init(usm_interface__msg__JointMsg * msg);

/// Finalize msg/JointMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usm_interface
void
usm_interface__msg__JointMsg__fini(usm_interface__msg__JointMsg * msg);

/// Create msg/JointMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * usm_interface__msg__JointMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_usm_interface
usm_interface__msg__JointMsg *
usm_interface__msg__JointMsg__create();

/// Destroy msg/JointMsg message.
/**
 * It calls
 * usm_interface__msg__JointMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usm_interface
void
usm_interface__msg__JointMsg__destroy(usm_interface__msg__JointMsg * msg);

/// Check for msg/JointMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_usm_interface
bool
usm_interface__msg__JointMsg__are_equal(const usm_interface__msg__JointMsg * lhs, const usm_interface__msg__JointMsg * rhs);

/// Copy a msg/JointMsg message.
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
ROSIDL_GENERATOR_C_PUBLIC_usm_interface
bool
usm_interface__msg__JointMsg__copy(
  const usm_interface__msg__JointMsg * input,
  usm_interface__msg__JointMsg * output);

/// Initialize array of msg/JointMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * usm_interface__msg__JointMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_usm_interface
bool
usm_interface__msg__JointMsg__Sequence__init(usm_interface__msg__JointMsg__Sequence * array, size_t size);

/// Finalize array of msg/JointMsg messages.
/**
 * It calls
 * usm_interface__msg__JointMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usm_interface
void
usm_interface__msg__JointMsg__Sequence__fini(usm_interface__msg__JointMsg__Sequence * array);

/// Create array of msg/JointMsg messages.
/**
 * It allocates the memory for the array and calls
 * usm_interface__msg__JointMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_usm_interface
usm_interface__msg__JointMsg__Sequence *
usm_interface__msg__JointMsg__Sequence__create(size_t size);

/// Destroy array of msg/JointMsg messages.
/**
 * It calls
 * usm_interface__msg__JointMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usm_interface
void
usm_interface__msg__JointMsg__Sequence__destroy(usm_interface__msg__JointMsg__Sequence * array);

/// Check for msg/JointMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_usm_interface
bool
usm_interface__msg__JointMsg__Sequence__are_equal(const usm_interface__msg__JointMsg__Sequence * lhs, const usm_interface__msg__JointMsg__Sequence * rhs);

/// Copy an array of msg/JointMsg messages.
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
ROSIDL_GENERATOR_C_PUBLIC_usm_interface
bool
usm_interface__msg__JointMsg__Sequence__copy(
  const usm_interface__msg__JointMsg__Sequence * input,
  usm_interface__msg__JointMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // USM_INTERFACE__MSG__DETAIL__JOINT_MSG__FUNCTIONS_H_
