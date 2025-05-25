// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from service_camera_pkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice

#include "service_camera_pkg/srv/detail/turn_camera__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_service_camera_pkg
const rosidl_type_hash_t *
service_camera_pkg__srv__TurnCamera__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x26, 0x23, 0x16, 0x33, 0xc8, 0x6d, 0x32, 0xde,
      0x70, 0x5e, 0x06, 0xe2, 0x13, 0xae, 0xaa, 0x8d,
      0x6c, 0xf7, 0x30, 0x1f, 0x18, 0x26, 0x31, 0x95,
      0x16, 0x73, 0x6c, 0xb3, 0x71, 0xee, 0x0d, 0xfc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_service_camera_pkg
const rosidl_type_hash_t *
service_camera_pkg__srv__TurnCamera_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe5, 0x28, 0xba, 0x1b, 0x6b, 0x2f, 0xa9, 0x4c,
      0x72, 0xaa, 0xd1, 0x3b, 0xf5, 0x9b, 0x0f, 0xd0,
      0x82, 0xc0, 0x78, 0x89, 0x2d, 0x75, 0x2f, 0x9f,
      0x6d, 0xec, 0xe7, 0xca, 0xd5, 0x89, 0xa5, 0x00,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_service_camera_pkg
const rosidl_type_hash_t *
service_camera_pkg__srv__TurnCamera_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xab, 0x28, 0xeb, 0x20, 0x87, 0x6e, 0xab, 0xc0,
      0xfc, 0x6b, 0x58, 0xb4, 0x1d, 0x6c, 0x9e, 0x73,
      0x76, 0xbc, 0x4d, 0x89, 0x09, 0x41, 0xcb, 0x46,
      0xb6, 0x0b, 0xfc, 0x97, 0x7c, 0x9a, 0x10, 0x5e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_service_camera_pkg
const rosidl_type_hash_t *
service_camera_pkg__srv__TurnCamera_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8a, 0x29, 0x2a, 0xa0, 0xe7, 0x27, 0xc3, 0x86,
      0x54, 0x5c, 0x1c, 0x09, 0x33, 0x89, 0xa7, 0xfa,
      0x63, 0x52, 0x8c, 0xb2, 0xb9, 0x3e, 0xcb, 0x39,
      0x3a, 0x15, 0xb3, 0x77, 0xf8, 0x3f, 0xe3, 0x4d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "sensor_msgs/msg/detail/image__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__Image__EXPECTED_HASH = {1, {
    0xd3, 0x1d, 0x41, 0xa9, 0xa4, 0xc4, 0xbc, 0x8e,
    0xae, 0x9b, 0xe7, 0x57, 0xb0, 0xbe, 0xed, 0x30,
    0x65, 0x64, 0xf7, 0x52, 0x6c, 0x88, 0xea, 0x6a,
    0x45, 0x88, 0xfb, 0x95, 0x82, 0x52, 0x7d, 0x47,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char service_camera_pkg__srv__TurnCamera__TYPE_NAME[] = "service_camera_pkg/srv/TurnCamera";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char sensor_msgs__msg__Image__TYPE_NAME[] = "sensor_msgs/msg/Image";
static char service_camera_pkg__srv__TurnCamera_Event__TYPE_NAME[] = "service_camera_pkg/srv/TurnCamera_Event";
static char service_camera_pkg__srv__TurnCamera_Request__TYPE_NAME[] = "service_camera_pkg/srv/TurnCamera_Request";
static char service_camera_pkg__srv__TurnCamera_Response__TYPE_NAME[] = "service_camera_pkg/srv/TurnCamera_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char service_camera_pkg__srv__TurnCamera__FIELD_NAME__request_message[] = "request_message";
static char service_camera_pkg__srv__TurnCamera__FIELD_NAME__response_message[] = "response_message";
static char service_camera_pkg__srv__TurnCamera__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field service_camera_pkg__srv__TurnCamera__FIELDS[] = {
  {
    {service_camera_pkg__srv__TurnCamera__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_camera_pkg__srv__TurnCamera_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {service_camera_pkg__srv__TurnCamera__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_camera_pkg__srv__TurnCamera_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {service_camera_pkg__srv__TurnCamera__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_camera_pkg__srv__TurnCamera_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription service_camera_pkg__srv__TurnCamera__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {service_camera_pkg__srv__TurnCamera_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {service_camera_pkg__srv__TurnCamera_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_camera_pkg__srv__TurnCamera_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
service_camera_pkg__srv__TurnCamera__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {service_camera_pkg__srv__TurnCamera__TYPE_NAME, 33, 33},
      {service_camera_pkg__srv__TurnCamera__FIELDS, 3, 3},
    },
    {service_camera_pkg__srv__TurnCamera__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__Image__EXPECTED_HASH, sensor_msgs__msg__Image__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sensor_msgs__msg__Image__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = service_camera_pkg__srv__TurnCamera_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = service_camera_pkg__srv__TurnCamera_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = service_camera_pkg__srv__TurnCamera_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char service_camera_pkg__srv__TurnCamera_Request__FIELD_NAME__degree_turn[] = "degree_turn";

static rosidl_runtime_c__type_description__Field service_camera_pkg__srv__TurnCamera_Request__FIELDS[] = {
  {
    {service_camera_pkg__srv__TurnCamera_Request__FIELD_NAME__degree_turn, 11, 11},
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
service_camera_pkg__srv__TurnCamera_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {service_camera_pkg__srv__TurnCamera_Request__TYPE_NAME, 41, 41},
      {service_camera_pkg__srv__TurnCamera_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char service_camera_pkg__srv__TurnCamera_Response__FIELD_NAME__camera_image[] = "camera_image";

static rosidl_runtime_c__type_description__Field service_camera_pkg__srv__TurnCamera_Response__FIELDS[] = {
  {
    {service_camera_pkg__srv__TurnCamera_Response__FIELD_NAME__camera_image, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription service_camera_pkg__srv__TurnCamera_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
service_camera_pkg__srv__TurnCamera_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {service_camera_pkg__srv__TurnCamera_Response__TYPE_NAME, 42, 42},
      {service_camera_pkg__srv__TurnCamera_Response__FIELDS, 1, 1},
    },
    {service_camera_pkg__srv__TurnCamera_Response__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__Image__EXPECTED_HASH, sensor_msgs__msg__Image__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sensor_msgs__msg__Image__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char service_camera_pkg__srv__TurnCamera_Event__FIELD_NAME__info[] = "info";
static char service_camera_pkg__srv__TurnCamera_Event__FIELD_NAME__request[] = "request";
static char service_camera_pkg__srv__TurnCamera_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field service_camera_pkg__srv__TurnCamera_Event__FIELDS[] = {
  {
    {service_camera_pkg__srv__TurnCamera_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {service_camera_pkg__srv__TurnCamera_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {service_camera_pkg__srv__TurnCamera_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {service_camera_pkg__srv__TurnCamera_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {service_camera_pkg__srv__TurnCamera_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription service_camera_pkg__srv__TurnCamera_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {service_camera_pkg__srv__TurnCamera_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_camera_pkg__srv__TurnCamera_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
service_camera_pkg__srv__TurnCamera_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {service_camera_pkg__srv__TurnCamera_Event__TYPE_NAME, 39, 39},
      {service_camera_pkg__srv__TurnCamera_Event__FIELDS, 3, 3},
    },
    {service_camera_pkg__srv__TurnCamera_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__Image__EXPECTED_HASH, sensor_msgs__msg__Image__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sensor_msgs__msg__Image__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = service_camera_pkg__srv__TurnCamera_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = service_camera_pkg__srv__TurnCamera_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 degree_turn\n"
  "\n"
  "---\n"
  "\n"
  "sensor_msgs/Image camera_image";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
service_camera_pkg__srv__TurnCamera__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {service_camera_pkg__srv__TurnCamera__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 56, 56},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
service_camera_pkg__srv__TurnCamera_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {service_camera_pkg__srv__TurnCamera_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
service_camera_pkg__srv__TurnCamera_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {service_camera_pkg__srv__TurnCamera_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
service_camera_pkg__srv__TurnCamera_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {service_camera_pkg__srv__TurnCamera_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
service_camera_pkg__srv__TurnCamera__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *service_camera_pkg__srv__TurnCamera__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_msgs__msg__Image__get_individual_type_description_source(NULL);
    sources[3] = *service_camera_pkg__srv__TurnCamera_Event__get_individual_type_description_source(NULL);
    sources[4] = *service_camera_pkg__srv__TurnCamera_Request__get_individual_type_description_source(NULL);
    sources[5] = *service_camera_pkg__srv__TurnCamera_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
service_camera_pkg__srv__TurnCamera_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *service_camera_pkg__srv__TurnCamera_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
service_camera_pkg__srv__TurnCamera_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *service_camera_pkg__srv__TurnCamera_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_msgs__msg__Image__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
service_camera_pkg__srv__TurnCamera_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *service_camera_pkg__srv__TurnCamera_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_msgs__msg__Image__get_individual_type_description_source(NULL);
    sources[3] = *service_camera_pkg__srv__TurnCamera_Request__get_individual_type_description_source(NULL);
    sources[4] = *service_camera_pkg__srv__TurnCamera_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
