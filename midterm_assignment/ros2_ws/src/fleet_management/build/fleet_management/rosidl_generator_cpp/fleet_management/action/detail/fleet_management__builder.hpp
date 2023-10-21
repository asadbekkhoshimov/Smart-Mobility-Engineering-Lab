// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fleet_management:action/FleetManagement.idl
// generated code does not contain a copyright notice

#ifndef FLEET_MANAGEMENT__ACTION__DETAIL__FLEET_MANAGEMENT__BUILDER_HPP_
#define FLEET_MANAGEMENT__ACTION__DETAIL__FLEET_MANAGEMENT__BUILDER_HPP_

#include "fleet_management/action/detail/fleet_management__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fleet_management
{

namespace action
{

namespace builder
{

class Init_FleetManagement_Goal_order
{
public:
  Init_FleetManagement_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fleet_management::action::FleetManagement_Goal order(::fleet_management::action::FleetManagement_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management::action::FleetManagement_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management::action::FleetManagement_Goal>()
{
  return fleet_management::action::builder::Init_FleetManagement_Goal_order();
}

}  // namespace fleet_management


namespace fleet_management
{

namespace action
{

namespace builder
{

class Init_FleetManagement_Result_sequence
{
public:
  Init_FleetManagement_Result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fleet_management::action::FleetManagement_Result sequence(::fleet_management::action::FleetManagement_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management::action::FleetManagement_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management::action::FleetManagement_Result>()
{
  return fleet_management::action::builder::Init_FleetManagement_Result_sequence();
}

}  // namespace fleet_management


namespace fleet_management
{

namespace action
{

namespace builder
{

class Init_FleetManagement_Feedback_partial_sequence
{
public:
  Init_FleetManagement_Feedback_partial_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fleet_management::action::FleetManagement_Feedback partial_sequence(::fleet_management::action::FleetManagement_Feedback::_partial_sequence_type arg)
  {
    msg_.partial_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management::action::FleetManagement_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management::action::FleetManagement_Feedback>()
{
  return fleet_management::action::builder::Init_FleetManagement_Feedback_partial_sequence();
}

}  // namespace fleet_management


namespace fleet_management
{

namespace action
{

namespace builder
{

class Init_FleetManagement_SendGoal_Request_goal
{
public:
  explicit Init_FleetManagement_SendGoal_Request_goal(::fleet_management::action::FleetManagement_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::fleet_management::action::FleetManagement_SendGoal_Request goal(::fleet_management::action::FleetManagement_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management::action::FleetManagement_SendGoal_Request msg_;
};

class Init_FleetManagement_SendGoal_Request_goal_id
{
public:
  Init_FleetManagement_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetManagement_SendGoal_Request_goal goal_id(::fleet_management::action::FleetManagement_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FleetManagement_SendGoal_Request_goal(msg_);
  }

private:
  ::fleet_management::action::FleetManagement_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management::action::FleetManagement_SendGoal_Request>()
{
  return fleet_management::action::builder::Init_FleetManagement_SendGoal_Request_goal_id();
}

}  // namespace fleet_management


namespace fleet_management
{

namespace action
{

namespace builder
{

class Init_FleetManagement_SendGoal_Response_stamp
{
public:
  explicit Init_FleetManagement_SendGoal_Response_stamp(::fleet_management::action::FleetManagement_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::fleet_management::action::FleetManagement_SendGoal_Response stamp(::fleet_management::action::FleetManagement_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management::action::FleetManagement_SendGoal_Response msg_;
};

class Init_FleetManagement_SendGoal_Response_accepted
{
public:
  Init_FleetManagement_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetManagement_SendGoal_Response_stamp accepted(::fleet_management::action::FleetManagement_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FleetManagement_SendGoal_Response_stamp(msg_);
  }

private:
  ::fleet_management::action::FleetManagement_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management::action::FleetManagement_SendGoal_Response>()
{
  return fleet_management::action::builder::Init_FleetManagement_SendGoal_Response_accepted();
}

}  // namespace fleet_management


namespace fleet_management
{

namespace action
{

namespace builder
{

class Init_FleetManagement_GetResult_Request_goal_id
{
public:
  Init_FleetManagement_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fleet_management::action::FleetManagement_GetResult_Request goal_id(::fleet_management::action::FleetManagement_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management::action::FleetManagement_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management::action::FleetManagement_GetResult_Request>()
{
  return fleet_management::action::builder::Init_FleetManagement_GetResult_Request_goal_id();
}

}  // namespace fleet_management


namespace fleet_management
{

namespace action
{

namespace builder
{

class Init_FleetManagement_GetResult_Response_result
{
public:
  explicit Init_FleetManagement_GetResult_Response_result(::fleet_management::action::FleetManagement_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::fleet_management::action::FleetManagement_GetResult_Response result(::fleet_management::action::FleetManagement_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management::action::FleetManagement_GetResult_Response msg_;
};

class Init_FleetManagement_GetResult_Response_status
{
public:
  Init_FleetManagement_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetManagement_GetResult_Response_result status(::fleet_management::action::FleetManagement_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FleetManagement_GetResult_Response_result(msg_);
  }

private:
  ::fleet_management::action::FleetManagement_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management::action::FleetManagement_GetResult_Response>()
{
  return fleet_management::action::builder::Init_FleetManagement_GetResult_Response_status();
}

}  // namespace fleet_management


namespace fleet_management
{

namespace action
{

namespace builder
{

class Init_FleetManagement_FeedbackMessage_feedback
{
public:
  explicit Init_FleetManagement_FeedbackMessage_feedback(::fleet_management::action::FleetManagement_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::fleet_management::action::FleetManagement_FeedbackMessage feedback(::fleet_management::action::FleetManagement_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management::action::FleetManagement_FeedbackMessage msg_;
};

class Init_FleetManagement_FeedbackMessage_goal_id
{
public:
  Init_FleetManagement_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetManagement_FeedbackMessage_feedback goal_id(::fleet_management::action::FleetManagement_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FleetManagement_FeedbackMessage_feedback(msg_);
  }

private:
  ::fleet_management::action::FleetManagement_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management::action::FleetManagement_FeedbackMessage>()
{
  return fleet_management::action::builder::Init_FleetManagement_FeedbackMessage_goal_id();
}

}  // namespace fleet_management

#endif  // FLEET_MANAGEMENT__ACTION__DETAIL__FLEET_MANAGEMENT__BUILDER_HPP_
