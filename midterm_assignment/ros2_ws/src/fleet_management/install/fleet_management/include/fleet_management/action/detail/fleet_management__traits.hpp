// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fleet_management:action/FleetManagement.idl
// generated code does not contain a copyright notice

#ifndef FLEET_MANAGEMENT__ACTION__DETAIL__FLEET_MANAGEMENT__TRAITS_HPP_
#define FLEET_MANAGEMENT__ACTION__DETAIL__FLEET_MANAGEMENT__TRAITS_HPP_

#include "fleet_management/action/detail/fleet_management__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fleet_management::action::FleetManagement_Goal>()
{
  return "fleet_management::action::FleetManagement_Goal";
}

template<>
inline const char * name<fleet_management::action::FleetManagement_Goal>()
{
  return "fleet_management/action/FleetManagement_Goal";
}

template<>
struct has_fixed_size<fleet_management::action::FleetManagement_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fleet_management::action::FleetManagement_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fleet_management::action::FleetManagement_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fleet_management::action::FleetManagement_Result>()
{
  return "fleet_management::action::FleetManagement_Result";
}

template<>
inline const char * name<fleet_management::action::FleetManagement_Result>()
{
  return "fleet_management/action/FleetManagement_Result";
}

template<>
struct has_fixed_size<fleet_management::action::FleetManagement_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fleet_management::action::FleetManagement_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fleet_management::action::FleetManagement_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fleet_management::action::FleetManagement_Feedback>()
{
  return "fleet_management::action::FleetManagement_Feedback";
}

template<>
inline const char * name<fleet_management::action::FleetManagement_Feedback>()
{
  return "fleet_management/action/FleetManagement_Feedback";
}

template<>
struct has_fixed_size<fleet_management::action::FleetManagement_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fleet_management::action::FleetManagement_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fleet_management::action::FleetManagement_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "fleet_management/action/detail/fleet_management__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fleet_management::action::FleetManagement_SendGoal_Request>()
{
  return "fleet_management::action::FleetManagement_SendGoal_Request";
}

template<>
inline const char * name<fleet_management::action::FleetManagement_SendGoal_Request>()
{
  return "fleet_management/action/FleetManagement_SendGoal_Request";
}

template<>
struct has_fixed_size<fleet_management::action::FleetManagement_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<fleet_management::action::FleetManagement_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<fleet_management::action::FleetManagement_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<fleet_management::action::FleetManagement_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<fleet_management::action::FleetManagement_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fleet_management::action::FleetManagement_SendGoal_Response>()
{
  return "fleet_management::action::FleetManagement_SendGoal_Response";
}

template<>
inline const char * name<fleet_management::action::FleetManagement_SendGoal_Response>()
{
  return "fleet_management/action/FleetManagement_SendGoal_Response";
}

template<>
struct has_fixed_size<fleet_management::action::FleetManagement_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<fleet_management::action::FleetManagement_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<fleet_management::action::FleetManagement_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fleet_management::action::FleetManagement_SendGoal>()
{
  return "fleet_management::action::FleetManagement_SendGoal";
}

template<>
inline const char * name<fleet_management::action::FleetManagement_SendGoal>()
{
  return "fleet_management/action/FleetManagement_SendGoal";
}

template<>
struct has_fixed_size<fleet_management::action::FleetManagement_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<fleet_management::action::FleetManagement_SendGoal_Request>::value &&
    has_fixed_size<fleet_management::action::FleetManagement_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<fleet_management::action::FleetManagement_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<fleet_management::action::FleetManagement_SendGoal_Request>::value &&
    has_bounded_size<fleet_management::action::FleetManagement_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<fleet_management::action::FleetManagement_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<fleet_management::action::FleetManagement_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<fleet_management::action::FleetManagement_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fleet_management::action::FleetManagement_GetResult_Request>()
{
  return "fleet_management::action::FleetManagement_GetResult_Request";
}

template<>
inline const char * name<fleet_management::action::FleetManagement_GetResult_Request>()
{
  return "fleet_management/action/FleetManagement_GetResult_Request";
}

template<>
struct has_fixed_size<fleet_management::action::FleetManagement_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<fleet_management::action::FleetManagement_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<fleet_management::action::FleetManagement_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "fleet_management/action/detail/fleet_management__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fleet_management::action::FleetManagement_GetResult_Response>()
{
  return "fleet_management::action::FleetManagement_GetResult_Response";
}

template<>
inline const char * name<fleet_management::action::FleetManagement_GetResult_Response>()
{
  return "fleet_management/action/FleetManagement_GetResult_Response";
}

template<>
struct has_fixed_size<fleet_management::action::FleetManagement_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<fleet_management::action::FleetManagement_Result>::value> {};

template<>
struct has_bounded_size<fleet_management::action::FleetManagement_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<fleet_management::action::FleetManagement_Result>::value> {};

template<>
struct is_message<fleet_management::action::FleetManagement_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fleet_management::action::FleetManagement_GetResult>()
{
  return "fleet_management::action::FleetManagement_GetResult";
}

template<>
inline const char * name<fleet_management::action::FleetManagement_GetResult>()
{
  return "fleet_management/action/FleetManagement_GetResult";
}

template<>
struct has_fixed_size<fleet_management::action::FleetManagement_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<fleet_management::action::FleetManagement_GetResult_Request>::value &&
    has_fixed_size<fleet_management::action::FleetManagement_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<fleet_management::action::FleetManagement_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<fleet_management::action::FleetManagement_GetResult_Request>::value &&
    has_bounded_size<fleet_management::action::FleetManagement_GetResult_Response>::value
  >
{
};

template<>
struct is_service<fleet_management::action::FleetManagement_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<fleet_management::action::FleetManagement_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<fleet_management::action::FleetManagement_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "fleet_management/action/detail/fleet_management__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fleet_management::action::FleetManagement_FeedbackMessage>()
{
  return "fleet_management::action::FleetManagement_FeedbackMessage";
}

template<>
inline const char * name<fleet_management::action::FleetManagement_FeedbackMessage>()
{
  return "fleet_management/action/FleetManagement_FeedbackMessage";
}

template<>
struct has_fixed_size<fleet_management::action::FleetManagement_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<fleet_management::action::FleetManagement_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<fleet_management::action::FleetManagement_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<fleet_management::action::FleetManagement_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<fleet_management::action::FleetManagement_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<fleet_management::action::FleetManagement>
  : std::true_type
{
};

template<>
struct is_action_goal<fleet_management::action::FleetManagement_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<fleet_management::action::FleetManagement_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<fleet_management::action::FleetManagement_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // FLEET_MANAGEMENT__ACTION__DETAIL__FLEET_MANAGEMENT__TRAITS_HPP_
