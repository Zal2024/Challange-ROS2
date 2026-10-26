// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_msgs:msg/Controller.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_msgs/msg/controller.h"


#ifndef CONTROLLER_MSGS__MSG__DETAIL__CONTROLLER__STRUCT_H_
#define CONTROLLER_MSGS__MSG__DETAIL__CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Controller in the package controller_msgs.
typedef struct controller_msgs__msg__Controller
{
  float velx;
  float vely;
  float angvel;
} controller_msgs__msg__Controller;

// Struct for a sequence of controller_msgs__msg__Controller.
typedef struct controller_msgs__msg__Controller__Sequence
{
  controller_msgs__msg__Controller * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_msgs__msg__Controller__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MSGS__MSG__DETAIL__CONTROLLER__STRUCT_H_
