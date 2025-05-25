// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from service_camera_pkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "service_camera_pkg/srv/turn_camera.hpp"


#ifndef SERVICE_CAMERA_PKG__SRV__DETAIL__TURN_CAMERA__BUILDER_HPP_
#define SERVICE_CAMERA_PKG__SRV__DETAIL__TURN_CAMERA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "service_camera_pkg/srv/detail/turn_camera__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace service_camera_pkg
{

namespace srv
{

namespace builder
{

class Init_TurnCamera_Request_degree_turn
{
public:
  Init_TurnCamera_Request_degree_turn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::service_camera_pkg::srv::TurnCamera_Request degree_turn(::service_camera_pkg::srv::TurnCamera_Request::_degree_turn_type arg)
  {
    msg_.degree_turn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_camera_pkg::srv::TurnCamera_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_camera_pkg::srv::TurnCamera_Request>()
{
  return service_camera_pkg::srv::builder::Init_TurnCamera_Request_degree_turn();
}

}  // namespace service_camera_pkg


namespace service_camera_pkg
{

namespace srv
{

namespace builder
{

class Init_TurnCamera_Response_camera_image
{
public:
  Init_TurnCamera_Response_camera_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::service_camera_pkg::srv::TurnCamera_Response camera_image(::service_camera_pkg::srv::TurnCamera_Response::_camera_image_type arg)
  {
    msg_.camera_image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_camera_pkg::srv::TurnCamera_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_camera_pkg::srv::TurnCamera_Response>()
{
  return service_camera_pkg::srv::builder::Init_TurnCamera_Response_camera_image();
}

}  // namespace service_camera_pkg


namespace service_camera_pkg
{

namespace srv
{

namespace builder
{

class Init_TurnCamera_Event_response
{
public:
  explicit Init_TurnCamera_Event_response(::service_camera_pkg::srv::TurnCamera_Event & msg)
  : msg_(msg)
  {}
  ::service_camera_pkg::srv::TurnCamera_Event response(::service_camera_pkg::srv::TurnCamera_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_camera_pkg::srv::TurnCamera_Event msg_;
};

class Init_TurnCamera_Event_request
{
public:
  explicit Init_TurnCamera_Event_request(::service_camera_pkg::srv::TurnCamera_Event & msg)
  : msg_(msg)
  {}
  Init_TurnCamera_Event_response request(::service_camera_pkg::srv::TurnCamera_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TurnCamera_Event_response(msg_);
  }

private:
  ::service_camera_pkg::srv::TurnCamera_Event msg_;
};

class Init_TurnCamera_Event_info
{
public:
  Init_TurnCamera_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurnCamera_Event_request info(::service_camera_pkg::srv::TurnCamera_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TurnCamera_Event_request(msg_);
  }

private:
  ::service_camera_pkg::srv::TurnCamera_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_camera_pkg::srv::TurnCamera_Event>()
{
  return service_camera_pkg::srv::builder::Init_TurnCamera_Event_info();
}

}  // namespace service_camera_pkg

#endif  // SERVICE_CAMERA_PKG__SRV__DETAIL__TURN_CAMERA__BUILDER_HPP_
