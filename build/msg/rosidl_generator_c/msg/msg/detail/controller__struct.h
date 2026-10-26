// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg:msg/Controller.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "msg/msg/controller.h"


#ifndef MSG__MSG__DETAIL__CONTROLLER__STRUCT_H_
#define MSG__MSG__DETAIL__CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Controller in the package msg.
typedef struct msg__msg__Controller
{
  float velx;
  float vely;
  float angvel;
} msg__msg__Controller;

// Struct for a sequence of msg__msg__Controller.
typedef struct msg__msg__Controller__Sequence
{
  msg__msg__Controller * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg__msg__Controller__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG__MSG__DETAIL__CONTROLLER__STRUCT_H_
