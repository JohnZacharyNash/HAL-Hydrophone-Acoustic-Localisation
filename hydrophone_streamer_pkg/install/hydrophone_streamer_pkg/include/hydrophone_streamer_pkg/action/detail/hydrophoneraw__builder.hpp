// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hydrophone_streamer_pkg:action/Hydrophoneraw.idl
// generated code does not contain a copyright notice

#ifndef HYDROPHONE_STREAMER_PKG__ACTION__DETAIL__HYDROPHONERAW__BUILDER_HPP_
#define HYDROPHONE_STREAMER_PKG__ACTION__DETAIL__HYDROPHONERAW__BUILDER_HPP_

#include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hydrophone_streamer_pkg
{

namespace action
{

namespace builder
{

class Init_Hydrophoneraw_Goal_streamseconds
{
public:
  Init_Hydrophoneraw_Goal_streamseconds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_Goal streamseconds(::hydrophone_streamer_pkg::action::Hydrophoneraw_Goal::_streamseconds_type arg)
  {
    msg_.streamseconds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydrophone_streamer_pkg::action::Hydrophoneraw_Goal>()
{
  return hydrophone_streamer_pkg::action::builder::Init_Hydrophoneraw_Goal_streamseconds();
}

}  // namespace hydrophone_streamer_pkg


namespace hydrophone_streamer_pkg
{

namespace action
{

namespace builder
{

class Init_Hydrophoneraw_Result_rawdata
{
public:
  Init_Hydrophoneraw_Result_rawdata()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_Result rawdata(::hydrophone_streamer_pkg::action::Hydrophoneraw_Result::_rawdata_type arg)
  {
    msg_.rawdata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydrophone_streamer_pkg::action::Hydrophoneraw_Result>()
{
  return hydrophone_streamer_pkg::action::builder::Init_Hydrophoneraw_Result_rawdata();
}

}  // namespace hydrophone_streamer_pkg


namespace hydrophone_streamer_pkg
{

namespace action
{

namespace builder
{

class Init_Hydrophoneraw_Feedback_rawsnapshot
{
public:
  Init_Hydrophoneraw_Feedback_rawsnapshot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback rawsnapshot(::hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback::_rawsnapshot_type arg)
  {
    msg_.rawsnapshot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback>()
{
  return hydrophone_streamer_pkg::action::builder::Init_Hydrophoneraw_Feedback_rawsnapshot();
}

}  // namespace hydrophone_streamer_pkg


namespace hydrophone_streamer_pkg
{

namespace action
{

namespace builder
{

class Init_Hydrophoneraw_SendGoal_Request_goal
{
public:
  explicit Init_Hydrophoneraw_SendGoal_Request_goal(::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request goal(::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request msg_;
};

class Init_Hydrophoneraw_SendGoal_Request_goal_id
{
public:
  Init_Hydrophoneraw_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Hydrophoneraw_SendGoal_Request_goal goal_id(::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Hydrophoneraw_SendGoal_Request_goal(msg_);
  }

private:
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request>()
{
  return hydrophone_streamer_pkg::action::builder::Init_Hydrophoneraw_SendGoal_Request_goal_id();
}

}  // namespace hydrophone_streamer_pkg


namespace hydrophone_streamer_pkg
{

namespace action
{

namespace builder
{

class Init_Hydrophoneraw_SendGoal_Response_stamp
{
public:
  explicit Init_Hydrophoneraw_SendGoal_Response_stamp(::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response stamp(::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response msg_;
};

class Init_Hydrophoneraw_SendGoal_Response_accepted
{
public:
  Init_Hydrophoneraw_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Hydrophoneraw_SendGoal_Response_stamp accepted(::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Hydrophoneraw_SendGoal_Response_stamp(msg_);
  }

private:
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response>()
{
  return hydrophone_streamer_pkg::action::builder::Init_Hydrophoneraw_SendGoal_Response_accepted();
}

}  // namespace hydrophone_streamer_pkg


namespace hydrophone_streamer_pkg
{

namespace action
{

namespace builder
{

class Init_Hydrophoneraw_GetResult_Request_goal_id
{
public:
  Init_Hydrophoneraw_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request goal_id(::hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request>()
{
  return hydrophone_streamer_pkg::action::builder::Init_Hydrophoneraw_GetResult_Request_goal_id();
}

}  // namespace hydrophone_streamer_pkg


namespace hydrophone_streamer_pkg
{

namespace action
{

namespace builder
{

class Init_Hydrophoneraw_GetResult_Response_result
{
public:
  explicit Init_Hydrophoneraw_GetResult_Response_result(::hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response result(::hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response msg_;
};

class Init_Hydrophoneraw_GetResult_Response_status
{
public:
  Init_Hydrophoneraw_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Hydrophoneraw_GetResult_Response_result status(::hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Hydrophoneraw_GetResult_Response_result(msg_);
  }

private:
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response>()
{
  return hydrophone_streamer_pkg::action::builder::Init_Hydrophoneraw_GetResult_Response_status();
}

}  // namespace hydrophone_streamer_pkg


namespace hydrophone_streamer_pkg
{

namespace action
{

namespace builder
{

class Init_Hydrophoneraw_FeedbackMessage_feedback
{
public:
  explicit Init_Hydrophoneraw_FeedbackMessage_feedback(::hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage feedback(::hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage msg_;
};

class Init_Hydrophoneraw_FeedbackMessage_goal_id
{
public:
  Init_Hydrophoneraw_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Hydrophoneraw_FeedbackMessage_feedback goal_id(::hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Hydrophoneraw_FeedbackMessage_feedback(msg_);
  }

private:
  ::hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage>()
{
  return hydrophone_streamer_pkg::action::builder::Init_Hydrophoneraw_FeedbackMessage_goal_id();
}

}  // namespace hydrophone_streamer_pkg

#endif  // HYDROPHONE_STREAMER_PKG__ACTION__DETAIL__HYDROPHONERAW__BUILDER_HPP_
