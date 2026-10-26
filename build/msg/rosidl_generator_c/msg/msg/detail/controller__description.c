// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from msg:msg/Controller.idl
// generated code does not contain a copyright notice

#include "msg/msg/detail/controller__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_msg
const rosidl_type_hash_t *
msg__msg__Controller__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb9, 0xdf, 0xf3, 0x5a, 0xa8, 0x18, 0x8e, 0xdf,
      0x20, 0x33, 0x97, 0x4d, 0x15, 0x96, 0xfe, 0xbb,
      0x43, 0x81, 0xfe, 0xd0, 0x5d, 0xff, 0x3a, 0xe2,
      0x9d, 0xb5, 0x22, 0x6d, 0xd8, 0x23, 0xc9, 0x8b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char msg__msg__Controller__TYPE_NAME[] = "msg/msg/Controller";

// Define type names, field names, and default values
static char msg__msg__Controller__FIELD_NAME__velx[] = "velx";
static char msg__msg__Controller__FIELD_NAME__vely[] = "vely";
static char msg__msg__Controller__FIELD_NAME__angvel[] = "angvel";

static rosidl_runtime_c__type_description__Field msg__msg__Controller__FIELDS[] = {
  {
    {msg__msg__Controller__FIELD_NAME__velx, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {msg__msg__Controller__FIELD_NAME__vely, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {msg__msg__Controller__FIELD_NAME__angvel, 6, 6},
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
msg__msg__Controller__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {msg__msg__Controller__TYPE_NAME, 18, 18},
      {msg__msg__Controller__FIELDS, 3, 3},
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
msg__msg__Controller__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {msg__msg__Controller__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
msg__msg__Controller__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *msg__msg__Controller__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
