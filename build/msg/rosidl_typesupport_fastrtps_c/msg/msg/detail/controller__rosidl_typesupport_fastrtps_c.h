// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from msg:msg/Controller.idl
// generated code does not contain a copyright notice
#ifndef MSG__MSG__DETAIL__CONTROLLER__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MSG__MSG__DETAIL__CONTROLLER__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "msg/msg/detail/controller__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg
bool cdr_serialize_msg__msg__Controller(
  const msg__msg__Controller * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg
bool cdr_deserialize_msg__msg__Controller(
  eprosima::fastcdr::Cdr &,
  msg__msg__Controller * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg
size_t get_serialized_size_msg__msg__Controller(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg
size_t max_serialized_size_msg__msg__Controller(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg
bool cdr_serialize_key_msg__msg__Controller(
  const msg__msg__Controller * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg
size_t get_serialized_size_key_msg__msg__Controller(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg
size_t max_serialized_size_key_msg__msg__Controller(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg, msg, Controller)();

#ifdef __cplusplus
}
#endif

#endif  // MSG__MSG__DETAIL__CONTROLLER__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
