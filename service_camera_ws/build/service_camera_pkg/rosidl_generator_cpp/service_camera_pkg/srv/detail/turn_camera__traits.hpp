// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from service_camera_pkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "service_camera_pkg/srv/turn_camera.hpp"


#ifndef SERVICE_CAMERA_PKG__SRV__DETAIL__TURN_CAMERA__TRAITS_HPP_
#define SERVICE_CAMERA_PKG__SRV__DETAIL__TURN_CAMERA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "service_camera_pkg/srv/detail/turn_camera__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace service_camera_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurnCamera_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: degree_turn
  {
    out << "degree_turn: ";
    rosidl_generator_traits::value_to_yaml(msg.degree_turn, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurnCamera_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: degree_turn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "degree_turn: ";
    rosidl_generator_traits::value_to_yaml(msg.degree_turn, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurnCamera_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace service_camera_pkg

namespace rosidl_generator_traits
{

[[deprecated("use service_camera_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const service_camera_pkg::srv::TurnCamera_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  service_camera_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use service_camera_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const service_camera_pkg::srv::TurnCamera_Request & msg)
{
  return service_camera_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<service_camera_pkg::srv::TurnCamera_Request>()
{
  return "service_camera_pkg::srv::TurnCamera_Request";
}

template<>
inline const char * name<service_camera_pkg::srv::TurnCamera_Request>()
{
  return "service_camera_pkg/srv/TurnCamera_Request";
}

template<>
struct has_fixed_size<service_camera_pkg::srv::TurnCamera_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<service_camera_pkg::srv::TurnCamera_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<service_camera_pkg::srv::TurnCamera_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'camera_image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace service_camera_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurnCamera_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: camera_image
  {
    out << "camera_image: ";
    to_flow_style_yaml(msg.camera_image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurnCamera_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: camera_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_image:\n";
    to_block_style_yaml(msg.camera_image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurnCamera_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace service_camera_pkg

namespace rosidl_generator_traits
{

[[deprecated("use service_camera_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const service_camera_pkg::srv::TurnCamera_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  service_camera_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use service_camera_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const service_camera_pkg::srv::TurnCamera_Response & msg)
{
  return service_camera_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<service_camera_pkg::srv::TurnCamera_Response>()
{
  return "service_camera_pkg::srv::TurnCamera_Response";
}

template<>
inline const char * name<service_camera_pkg::srv::TurnCamera_Response>()
{
  return "service_camera_pkg/srv/TurnCamera_Response";
}

template<>
struct has_fixed_size<service_camera_pkg::srv::TurnCamera_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<service_camera_pkg::srv::TurnCamera_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<service_camera_pkg::srv::TurnCamera_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace service_camera_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurnCamera_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurnCamera_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurnCamera_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace service_camera_pkg

namespace rosidl_generator_traits
{

[[deprecated("use service_camera_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const service_camera_pkg::srv::TurnCamera_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  service_camera_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use service_camera_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const service_camera_pkg::srv::TurnCamera_Event & msg)
{
  return service_camera_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<service_camera_pkg::srv::TurnCamera_Event>()
{
  return "service_camera_pkg::srv::TurnCamera_Event";
}

template<>
inline const char * name<service_camera_pkg::srv::TurnCamera_Event>()
{
  return "service_camera_pkg/srv/TurnCamera_Event";
}

template<>
struct has_fixed_size<service_camera_pkg::srv::TurnCamera_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<service_camera_pkg::srv::TurnCamera_Event>
  : std::integral_constant<bool, has_bounded_size<service_camera_pkg::srv::TurnCamera_Request>::value && has_bounded_size<service_camera_pkg::srv::TurnCamera_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<service_camera_pkg::srv::TurnCamera_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<service_camera_pkg::srv::TurnCamera>()
{
  return "service_camera_pkg::srv::TurnCamera";
}

template<>
inline const char * name<service_camera_pkg::srv::TurnCamera>()
{
  return "service_camera_pkg/srv/TurnCamera";
}

template<>
struct has_fixed_size<service_camera_pkg::srv::TurnCamera>
  : std::integral_constant<
    bool,
    has_fixed_size<service_camera_pkg::srv::TurnCamera_Request>::value &&
    has_fixed_size<service_camera_pkg::srv::TurnCamera_Response>::value
  >
{
};

template<>
struct has_bounded_size<service_camera_pkg::srv::TurnCamera>
  : std::integral_constant<
    bool,
    has_bounded_size<service_camera_pkg::srv::TurnCamera_Request>::value &&
    has_bounded_size<service_camera_pkg::srv::TurnCamera_Response>::value
  >
{
};

template<>
struct is_service<service_camera_pkg::srv::TurnCamera>
  : std::true_type
{
};

template<>
struct is_service_request<service_camera_pkg::srv::TurnCamera_Request>
  : std::true_type
{
};

template<>
struct is_service_response<service_camera_pkg::srv::TurnCamera_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SERVICE_CAMERA_PKG__SRV__DETAIL__TURN_CAMERA__TRAITS_HPP_
