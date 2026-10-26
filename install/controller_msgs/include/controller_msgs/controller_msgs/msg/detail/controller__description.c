// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from controller_msgs:msg/Controller.idl
// generated code does not contain a copyright notice

#include "controller_msgs/msg/detail/controller__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_controller_msgs
const rosidl_type_hash_t *
controller_msgs__msg__Controller__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xae, 0xca, 0x62, 0x82, 0x89, 0x23, 0x56, 0x51,
      0x6a, 0x7a, 0x0b, 0xa6, 0xcd, 0x3c, 0xa9, 0xa6,
      0x45, 0x8a, 0xb9, 0x27, 0xf9, 0x5c, 0x26, 0x3e,
      0x36, 0xb2, 0x01, 0xe0, 0x7a, 0xa4, 0x08, 0x24,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char controller_msgs__msg__Controller__TYPE_NAME[] = "controller_msgs/msg/Controller";

// Define type names, field names, and default values
static char controller_msgs__msg__Controller__FIELD_NAME__velx[] = "velx";
static char controller_msgs__msg__Controller__FIELD_NAME__vely[] = "vely";
static char controller_msgs__msg__Controller__FIELD_NAME__angvel[] = "angvel";

static rosidl_runtime_c__type_description__Field controller_msgs__msg__Controller__FIELDS[] = {
  {
    {controller_msgs__msg__Controller__FIELD_NAME__velx, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_msgs__msg__Controller__FIELD_NAME__vely, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_msgs__msg__Controller__FIELD_NAME__angvel, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_msgs__msg__Controller__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_msgs__msg__Controller__TYPE_NAME, 30, 30},
      {controller_msgs__msg__Controller__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 velx\n"
  "float32 vely\n"
  "float32 angvel";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
controller_msgs__msg__Controller__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_msgs__msg__Controller__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_msgs__msg__Controller__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_msgs__msg__Controller__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
