// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cola2_msgs:msg/CaptainStatus.idl
// generated code does not contain a copyright notice

#ifndef COLA2_MSGS__MSG__DETAIL__CAPTAIN_STATUS__FUNCTIONS_H_
#define COLA2_MSGS__MSG__DETAIL__CAPTAIN_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cola2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cola2_msgs/msg/detail/captain_status__struct.h"

/// Initialize msg/CaptainStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cola2_msgs__msg__CaptainStatus
 * )) before or use
 * cola2_msgs__msg__CaptainStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
bool
cola2_msgs__msg__CaptainStatus__init(cola2_msgs__msg__CaptainStatus * msg);

/// Finalize msg/CaptainStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
void
cola2_msgs__msg__CaptainStatus__fini(cola2_msgs__msg__CaptainStatus * msg);

/// Create msg/CaptainStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cola2_msgs__msg__CaptainStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
cola2_msgs__msg__CaptainStatus *
cola2_msgs__msg__CaptainStatus__create();

/// Destroy msg/CaptainStatus message.
/**
 * It calls
 * cola2_msgs__msg__CaptainStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
void
cola2_msgs__msg__CaptainStatus__destroy(cola2_msgs__msg__CaptainStatus * msg);

/// Check for msg/CaptainStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
bool
cola2_msgs__msg__CaptainStatus__are_equal(const cola2_msgs__msg__CaptainStatus * lhs, const cola2_msgs__msg__CaptainStatus * rhs);

/// Copy a msg/CaptainStatus message.
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
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
bool
cola2_msgs__msg__CaptainStatus__copy(
  const cola2_msgs__msg__CaptainStatus * input,
  cola2_msgs__msg__CaptainStatus * output);

/// Initialize array of msg/CaptainStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * cola2_msgs__msg__CaptainStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
bool
cola2_msgs__msg__CaptainStatus__Sequence__init(cola2_msgs__msg__CaptainStatus__Sequence * array, size_t size);

/// Finalize array of msg/CaptainStatus messages.
/**
 * It calls
 * cola2_msgs__msg__CaptainStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
void
cola2_msgs__msg__CaptainStatus__Sequence__fini(cola2_msgs__msg__CaptainStatus__Sequence * array);

/// Create array of msg/CaptainStatus messages.
/**
 * It allocates the memory for the array and calls
 * cola2_msgs__msg__CaptainStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
cola2_msgs__msg__CaptainStatus__Sequence *
cola2_msgs__msg__CaptainStatus__Sequence__create(size_t size);

/// Destroy array of msg/CaptainStatus messages.
/**
 * It calls
 * cola2_msgs__msg__CaptainStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
void
cola2_msgs__msg__CaptainStatus__Sequence__destroy(cola2_msgs__msg__CaptainStatus__Sequence * array);

/// Check for msg/CaptainStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
bool
cola2_msgs__msg__CaptainStatus__Sequence__are_equal(const cola2_msgs__msg__CaptainStatus__Sequence * lhs, const cola2_msgs__msg__CaptainStatus__Sequence * rhs);

/// Copy an array of msg/CaptainStatus messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cola2_msgs
bool
cola2_msgs__msg__CaptainStatus__Sequence__copy(
  const cola2_msgs__msg__CaptainStatus__Sequence * input,
  cola2_msgs__msg__CaptainStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COLA2_MSGS__MSG__DETAIL__CAPTAIN_STATUS__FUNCTIONS_H_
