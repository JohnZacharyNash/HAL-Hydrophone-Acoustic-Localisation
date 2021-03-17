// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hydrophone_streamer_pkg:action/Hydrophoneraw.idl
// generated code does not contain a copyright notice

#ifndef HYDROPHONE_STREAMER_PKG__ACTION__DETAIL__HYDROPHONERAW__TRAITS_HPP_
#define HYDROPHONE_STREAMER_PKG__ACTION__DETAIL__HYDROPHONERAW__TRAITS_HPP_

#include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal>()
{
  return "hydrophone_streamer_pkg::action::Hydrophoneraw_Goal";
}

template<>
inline const char * name<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal>()
{
  return "hydrophone_streamer_pkg/action/Hydrophoneraw_Goal";
}

template<>
struct has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hydrophone_streamer_pkg::action::Hydrophoneraw_Result>()
{
  return "hydrophone_streamer_pkg::action::Hydrophoneraw_Result";
}

template<>
inline const char * name<hydrophone_streamer_pkg::action::Hydrophoneraw_Result>()
{
  return "hydrophone_streamer_pkg/action/Hydrophoneraw_Result";
}

template<>
struct has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hydrophone_streamer_pkg::action::Hydrophoneraw_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback>()
{
  return "hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback";
}

template<>
inline const char * name<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback>()
{
  return "hydrophone_streamer_pkg/action/Hydrophoneraw_Feedback";
}

template<>
struct has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request>()
{
  return "hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request";
}

template<>
inline const char * name<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request>()
{
  return "hydrophone_streamer_pkg/action/Hydrophoneraw_SendGoal_Request";
}

template<>
struct has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response>()
{
  return "hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response";
}

template<>
inline const char * name<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response>()
{
  return "hydrophone_streamer_pkg/action/Hydrophoneraw_SendGoal_Response";
}

template<>
struct has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal>()
{
  return "hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal";
}

template<>
inline const char * name<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal>()
{
  return "hydrophone_streamer_pkg/action/Hydrophoneraw_SendGoal";
}

template<>
struct has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request>::value &&
    has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request>::value &&
    has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response>
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
inline const char * data_type<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request>()
{
  return "hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request";
}

template<>
inline const char * name<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request>()
{
  return "hydrophone_streamer_pkg/action/Hydrophoneraw_GetResult_Request";
}

template<>
struct has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response>()
{
  return "hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response";
}

template<>
inline const char * name<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response>()
{
  return "hydrophone_streamer_pkg/action/Hydrophoneraw_GetResult_Response";
}

template<>
struct has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_Result>::value> {};

template<>
struct has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_Result>::value> {};

template<>
struct is_message<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult>()
{
  return "hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult";
}

template<>
inline const char * name<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult>()
{
  return "hydrophone_streamer_pkg/action/Hydrophoneraw_GetResult";
}

template<>
struct has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request>::value &&
    has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request>::value &&
    has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response>::value
  >
{
};

template<>
struct is_service<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response>
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
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage>()
{
  return "hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage";
}

template<>
inline const char * name<hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage>()
{
  return "hydrophone_streamer_pkg/action/Hydrophoneraw_FeedbackMessage";
}

template<>
struct has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<hydrophone_streamer_pkg::action::Hydrophoneraw>
  : std::true_type
{
};

template<>
struct is_action_goal<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<hydrophone_streamer_pkg::action::Hydrophoneraw_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // HYDROPHONE_STREAMER_PKG__ACTION__DETAIL__HYDROPHONERAW__TRAITS_HPP_
