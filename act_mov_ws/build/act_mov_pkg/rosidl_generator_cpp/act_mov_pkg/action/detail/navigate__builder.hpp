// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from act_mov_pkg:action/Navigate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "act_mov_pkg/action/navigate.hpp"


#ifndef ACT_MOV_PKG__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_
#define ACT_MOV_PKG__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "act_mov_pkg/action/detail/navigate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace act_mov_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_Goal_goal_point
{
public:
  Init_Navigate_Goal_goal_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::act_mov_pkg::action::Navigate_Goal goal_point(::act_mov_pkg::action::Navigate_Goal::_goal_point_type arg)
  {
    msg_.goal_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::act_mov_pkg::action::Navigate_Goal>()
{
  return act_mov_pkg::action::builder::Init_Navigate_Goal_goal_point();
}

}  // namespace act_mov_pkg


namespace act_mov_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_Result_elpased_time
{
public:
  Init_Navigate_Result_elpased_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::act_mov_pkg::action::Navigate_Result elpased_time(::act_mov_pkg::action::Navigate_Result::_elpased_time_type arg)
  {
    msg_.elpased_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::act_mov_pkg::action::Navigate_Result>()
{
  return act_mov_pkg::action::builder::Init_Navigate_Result_elpased_time();
}

}  // namespace act_mov_pkg


namespace act_mov_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_Feedback_distance_to_point
{
public:
  Init_Navigate_Feedback_distance_to_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::act_mov_pkg::action::Navigate_Feedback distance_to_point(::act_mov_pkg::action::Navigate_Feedback::_distance_to_point_type arg)
  {
    msg_.distance_to_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::act_mov_pkg::action::Navigate_Feedback>()
{
  return act_mov_pkg::action::builder::Init_Navigate_Feedback_distance_to_point();
}

}  // namespace act_mov_pkg


namespace act_mov_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Request_goal
{
public:
  explicit Init_Navigate_SendGoal_Request_goal(::act_mov_pkg::action::Navigate_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::act_mov_pkg::action::Navigate_SendGoal_Request goal(::act_mov_pkg::action::Navigate_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_SendGoal_Request msg_;
};

class Init_Navigate_SendGoal_Request_goal_id
{
public:
  Init_Navigate_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Request_goal goal_id(::act_mov_pkg::action::Navigate_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigate_SendGoal_Request_goal(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::act_mov_pkg::action::Navigate_SendGoal_Request>()
{
  return act_mov_pkg::action::builder::Init_Navigate_SendGoal_Request_goal_id();
}

}  // namespace act_mov_pkg


namespace act_mov_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Response_stamp
{
public:
  explicit Init_Navigate_SendGoal_Response_stamp(::act_mov_pkg::action::Navigate_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::act_mov_pkg::action::Navigate_SendGoal_Response stamp(::act_mov_pkg::action::Navigate_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_SendGoal_Response msg_;
};

class Init_Navigate_SendGoal_Response_accepted
{
public:
  Init_Navigate_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Response_stamp accepted(::act_mov_pkg::action::Navigate_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Navigate_SendGoal_Response_stamp(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::act_mov_pkg::action::Navigate_SendGoal_Response>()
{
  return act_mov_pkg::action::builder::Init_Navigate_SendGoal_Response_accepted();
}

}  // namespace act_mov_pkg


namespace act_mov_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Event_response
{
public:
  explicit Init_Navigate_SendGoal_Event_response(::act_mov_pkg::action::Navigate_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::act_mov_pkg::action::Navigate_SendGoal_Event response(::act_mov_pkg::action::Navigate_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_SendGoal_Event msg_;
};

class Init_Navigate_SendGoal_Event_request
{
public:
  explicit Init_Navigate_SendGoal_Event_request(::act_mov_pkg::action::Navigate_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Navigate_SendGoal_Event_response request(::act_mov_pkg::action::Navigate_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Navigate_SendGoal_Event_response(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_SendGoal_Event msg_;
};

class Init_Navigate_SendGoal_Event_info
{
public:
  Init_Navigate_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Event_request info(::act_mov_pkg::action::Navigate_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Navigate_SendGoal_Event_request(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::act_mov_pkg::action::Navigate_SendGoal_Event>()
{
  return act_mov_pkg::action::builder::Init_Navigate_SendGoal_Event_info();
}

}  // namespace act_mov_pkg


namespace act_mov_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Request_goal_id
{
public:
  Init_Navigate_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::act_mov_pkg::action::Navigate_GetResult_Request goal_id(::act_mov_pkg::action::Navigate_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::act_mov_pkg::action::Navigate_GetResult_Request>()
{
  return act_mov_pkg::action::builder::Init_Navigate_GetResult_Request_goal_id();
}

}  // namespace act_mov_pkg


namespace act_mov_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Response_result
{
public:
  explicit Init_Navigate_GetResult_Response_result(::act_mov_pkg::action::Navigate_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::act_mov_pkg::action::Navigate_GetResult_Response result(::act_mov_pkg::action::Navigate_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_GetResult_Response msg_;
};

class Init_Navigate_GetResult_Response_status
{
public:
  Init_Navigate_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_GetResult_Response_result status(::act_mov_pkg::action::Navigate_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Navigate_GetResult_Response_result(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::act_mov_pkg::action::Navigate_GetResult_Response>()
{
  return act_mov_pkg::action::builder::Init_Navigate_GetResult_Response_status();
}

}  // namespace act_mov_pkg


namespace act_mov_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Event_response
{
public:
  explicit Init_Navigate_GetResult_Event_response(::act_mov_pkg::action::Navigate_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::act_mov_pkg::action::Navigate_GetResult_Event response(::act_mov_pkg::action::Navigate_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_GetResult_Event msg_;
};

class Init_Navigate_GetResult_Event_request
{
public:
  explicit Init_Navigate_GetResult_Event_request(::act_mov_pkg::action::Navigate_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Navigate_GetResult_Event_response request(::act_mov_pkg::action::Navigate_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Navigate_GetResult_Event_response(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_GetResult_Event msg_;
};

class Init_Navigate_GetResult_Event_info
{
public:
  Init_Navigate_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_GetResult_Event_request info(::act_mov_pkg::action::Navigate_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Navigate_GetResult_Event_request(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::act_mov_pkg::action::Navigate_GetResult_Event>()
{
  return act_mov_pkg::action::builder::Init_Navigate_GetResult_Event_info();
}

}  // namespace act_mov_pkg


namespace act_mov_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_FeedbackMessage_feedback
{
public:
  explicit Init_Navigate_FeedbackMessage_feedback(::act_mov_pkg::action::Navigate_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::act_mov_pkg::action::Navigate_FeedbackMessage feedback(::act_mov_pkg::action::Navigate_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_FeedbackMessage msg_;
};

class Init_Navigate_FeedbackMessage_goal_id
{
public:
  Init_Navigate_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_FeedbackMessage_feedback goal_id(::act_mov_pkg::action::Navigate_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigate_FeedbackMessage_feedback(msg_);
  }

private:
  ::act_mov_pkg::action::Navigate_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::act_mov_pkg::action::Navigate_FeedbackMessage>()
{
  return act_mov_pkg::action::builder::Init_Navigate_FeedbackMessage_goal_id();
}

}  // namespace act_mov_pkg

#endif  // ACT_MOV_PKG__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_
