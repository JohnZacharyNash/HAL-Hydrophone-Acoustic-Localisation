// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hydrophone_streamer_pkg:action/Hydrophoneraw.idl
// generated code does not contain a copyright notice

#ifndef HYDROPHONE_STREAMER_PKG__ACTION__DETAIL__HYDROPHONERAW__STRUCT_H_
#define HYDROPHONE_STREAMER_PKG__ACTION__DETAIL__HYDROPHONERAW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Hydrophoneraw in the package hydrophone_streamer_pkg.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_Goal
{
  int32_t streamseconds;
} hydrophone_streamer_pkg__action__Hydrophoneraw_Goal;

// Struct for a sequence of hydrophone_streamer_pkg__action__Hydrophoneraw_Goal.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__Sequence
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'rawdata'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/Hydrophoneraw in the package hydrophone_streamer_pkg.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_Result
{
  rosidl_runtime_c__int32__Sequence rawdata;
} hydrophone_streamer_pkg__action__Hydrophoneraw_Result;

// Struct for a sequence of hydrophone_streamer_pkg__action__Hydrophoneraw_Result.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_Result__Sequence
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydrophone_streamer_pkg__action__Hydrophoneraw_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Hydrophoneraw in the package hydrophone_streamer_pkg.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback
{
  int32_t rawsnapshot;
} hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback;

// Struct for a sequence of hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__Sequence
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.h"

// Struct defined in action/Hydrophoneraw in the package hydrophone_streamer_pkg.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  hydrophone_streamer_pkg__action__Hydrophoneraw_Goal goal;
} hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request;

// Struct for a sequence of hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__Sequence
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Hydrophoneraw in the package hydrophone_streamer_pkg.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response;

// Struct for a sequence of hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__Sequence
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Hydrophoneraw in the package hydrophone_streamer_pkg.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request;

// Struct for a sequence of hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__Sequence
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.h"

// Struct defined in action/Hydrophoneraw in the package hydrophone_streamer_pkg.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response
{
  int8_t status;
  hydrophone_streamer_pkg__action__Hydrophoneraw_Result result;
} hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response;

// Struct for a sequence of hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__Sequence
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.h"

// Struct defined in action/Hydrophoneraw in the package hydrophone_streamer_pkg.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback feedback;
} hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage;

// Struct for a sequence of hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage.
typedef struct hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__Sequence
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HYDROPHONE_STREAMER_PKG__ACTION__DETAIL__HYDROPHONERAW__STRUCT_H_
