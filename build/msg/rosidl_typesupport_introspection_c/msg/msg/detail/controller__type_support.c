// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg:msg/Controller.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg/msg/detail/controller__rosidl_typesupport_introspection_c.h"
#include "msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg/msg/detail/controller__functions.h"
#include "msg/msg/detail/controller__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void msg__msg__Controller__rosidl_typesupport_introspection_c__Controller_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg__msg__Controller__init(message_memory);
}

void msg__msg__Controller__rosidl_typesupport_introspection_c__Controller_fini_function(void * message_memory)
{
  msg__msg__Controller__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msg__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_member_array[3] = {
  {
    "velx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg__msg__Controller, velx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vely",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg__msg__Controller, vely),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angvel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg__msg__Controller, angvel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_members = {
  "msg__msg",  // message namespace
  "Controller",  // message name
  3,  // number of fields
  sizeof(msg__msg__Controller),
  false,  // has_any_key_member_
  msg__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_member_array,  // message members
  msg__msg__Controller__rosidl_typesupport_introspection_c__Controller_init_function,  // function to initialize message memory (memory has to be allocated)
  msg__msg__Controller__rosidl_typesupport_introspection_c__Controller_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle = {
  0,
  &msg__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_members,
  get_message_typesupport_handle_function,
  &msg__msg__Controller__get_type_hash,
  &msg__msg__Controller__get_type_description,
  &msg__msg__Controller__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg, msg, Controller)() {
  if (!msg__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle.typesupport_identifier) {
    msg__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
