// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hydrophone_streamer_pkg:action/Hydrophoneraw.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__rosidl_typesupport_introspection_c.h"
#include "hydrophone_streamer_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__functions.h"
#include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Hydrophoneraw_Goal__rosidl_typesupport_introspection_c__Hydrophoneraw_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__init(message_memory);
}

void Hydrophoneraw_Goal__rosidl_typesupport_introspection_c__Hydrophoneraw_Goal_fini_function(void * message_memory)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Hydrophoneraw_Goal__rosidl_typesupport_introspection_c__Hydrophoneraw_Goal_message_member_array[1] = {
  {
    "streamseconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg__action__Hydrophoneraw_Goal, streamseconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Hydrophoneraw_Goal__rosidl_typesupport_introspection_c__Hydrophoneraw_Goal_message_members = {
  "hydrophone_streamer_pkg__action",  // message namespace
  "Hydrophoneraw_Goal",  // message name
  1,  // number of fields
  sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_Goal),
  Hydrophoneraw_Goal__rosidl_typesupport_introspection_c__Hydrophoneraw_Goal_message_member_array,  // message members
  Hydrophoneraw_Goal__rosidl_typesupport_introspection_c__Hydrophoneraw_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_Goal__rosidl_typesupport_introspection_c__Hydrophoneraw_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Hydrophoneraw_Goal__rosidl_typesupport_introspection_c__Hydrophoneraw_Goal_message_type_support_handle = {
  0,
  &Hydrophoneraw_Goal__rosidl_typesupport_introspection_c__Hydrophoneraw_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hydrophone_streamer_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_Goal)() {
  if (!Hydrophoneraw_Goal__rosidl_typesupport_introspection_c__Hydrophoneraw_Goal_message_type_support_handle.typesupport_identifier) {
    Hydrophoneraw_Goal__rosidl_typesupport_introspection_c__Hydrophoneraw_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Hydrophoneraw_Goal__rosidl_typesupport_introspection_c__Hydrophoneraw_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hydrophone_streamer_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__functions.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.h"


// Include directives for member types
// Member `rawdata`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Hydrophoneraw_Result__rosidl_typesupport_introspection_c__Hydrophoneraw_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hydrophone_streamer_pkg__action__Hydrophoneraw_Result__init(message_memory);
}

void Hydrophoneraw_Result__rosidl_typesupport_introspection_c__Hydrophoneraw_Result_fini_function(void * message_memory)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Hydrophoneraw_Result__rosidl_typesupport_introspection_c__Hydrophoneraw_Result_message_member_array[1] = {
  {
    "rawdata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg__action__Hydrophoneraw_Result, rawdata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Hydrophoneraw_Result__rosidl_typesupport_introspection_c__Hydrophoneraw_Result_message_members = {
  "hydrophone_streamer_pkg__action",  // message namespace
  "Hydrophoneraw_Result",  // message name
  1,  // number of fields
  sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_Result),
  Hydrophoneraw_Result__rosidl_typesupport_introspection_c__Hydrophoneraw_Result_message_member_array,  // message members
  Hydrophoneraw_Result__rosidl_typesupport_introspection_c__Hydrophoneraw_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_Result__rosidl_typesupport_introspection_c__Hydrophoneraw_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Hydrophoneraw_Result__rosidl_typesupport_introspection_c__Hydrophoneraw_Result_message_type_support_handle = {
  0,
  &Hydrophoneraw_Result__rosidl_typesupport_introspection_c__Hydrophoneraw_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hydrophone_streamer_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_Result)() {
  if (!Hydrophoneraw_Result__rosidl_typesupport_introspection_c__Hydrophoneraw_Result_message_type_support_handle.typesupport_identifier) {
    Hydrophoneraw_Result__rosidl_typesupport_introspection_c__Hydrophoneraw_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Hydrophoneraw_Result__rosidl_typesupport_introspection_c__Hydrophoneraw_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hydrophone_streamer_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__functions.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Hydrophoneraw_Feedback__rosidl_typesupport_introspection_c__Hydrophoneraw_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__init(message_memory);
}

void Hydrophoneraw_Feedback__rosidl_typesupport_introspection_c__Hydrophoneraw_Feedback_fini_function(void * message_memory)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Hydrophoneraw_Feedback__rosidl_typesupport_introspection_c__Hydrophoneraw_Feedback_message_member_array[1] = {
  {
    "rawsnapshot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback, rawsnapshot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Hydrophoneraw_Feedback__rosidl_typesupport_introspection_c__Hydrophoneraw_Feedback_message_members = {
  "hydrophone_streamer_pkg__action",  // message namespace
  "Hydrophoneraw_Feedback",  // message name
  1,  // number of fields
  sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback),
  Hydrophoneraw_Feedback__rosidl_typesupport_introspection_c__Hydrophoneraw_Feedback_message_member_array,  // message members
  Hydrophoneraw_Feedback__rosidl_typesupport_introspection_c__Hydrophoneraw_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_Feedback__rosidl_typesupport_introspection_c__Hydrophoneraw_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Hydrophoneraw_Feedback__rosidl_typesupport_introspection_c__Hydrophoneraw_Feedback_message_type_support_handle = {
  0,
  &Hydrophoneraw_Feedback__rosidl_typesupport_introspection_c__Hydrophoneraw_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hydrophone_streamer_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_Feedback)() {
  if (!Hydrophoneraw_Feedback__rosidl_typesupport_introspection_c__Hydrophoneraw_Feedback_message_type_support_handle.typesupport_identifier) {
    Hydrophoneraw_Feedback__rosidl_typesupport_introspection_c__Hydrophoneraw_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Hydrophoneraw_Feedback__rosidl_typesupport_introspection_c__Hydrophoneraw_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hydrophone_streamer_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__functions.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "hydrophone_streamer_pkg/action/hydrophoneraw.h"
// Member `goal`
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Hydrophoneraw_SendGoal_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__init(message_memory);
}

void Hydrophoneraw_SendGoal_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Request_fini_function(void * message_memory)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Hydrophoneraw_SendGoal_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Hydrophoneraw_SendGoal_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Request_message_members = {
  "hydrophone_streamer_pkg__action",  // message namespace
  "Hydrophoneraw_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request),
  Hydrophoneraw_SendGoal_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Request_message_member_array,  // message members
  Hydrophoneraw_SendGoal_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_SendGoal_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Hydrophoneraw_SendGoal_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Request_message_type_support_handle = {
  0,
  &Hydrophoneraw_SendGoal_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hydrophone_streamer_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_SendGoal_Request)() {
  Hydrophoneraw_SendGoal_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Hydrophoneraw_SendGoal_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_Goal)();
  if (!Hydrophoneraw_SendGoal_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Hydrophoneraw_SendGoal_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Hydrophoneraw_SendGoal_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hydrophone_streamer_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__functions.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Hydrophoneraw_SendGoal_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__init(message_memory);
}

void Hydrophoneraw_SendGoal_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Response_fini_function(void * message_memory)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Hydrophoneraw_SendGoal_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Hydrophoneraw_SendGoal_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Response_message_members = {
  "hydrophone_streamer_pkg__action",  // message namespace
  "Hydrophoneraw_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response),
  Hydrophoneraw_SendGoal_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Response_message_member_array,  // message members
  Hydrophoneraw_SendGoal_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_SendGoal_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Hydrophoneraw_SendGoal_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Response_message_type_support_handle = {
  0,
  &Hydrophoneraw_SendGoal_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hydrophone_streamer_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_SendGoal_Response)() {
  Hydrophoneraw_SendGoal_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Hydrophoneraw_SendGoal_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Hydrophoneraw_SendGoal_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Hydrophoneraw_SendGoal_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hydrophone_streamer_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_service_members = {
  "hydrophone_streamer_pkg__action",  // service namespace
  "Hydrophoneraw_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_service_type_support_handle = {
  0,
  &hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hydrophone_streamer_pkg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_SendGoal)() {
  if (!hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_service_type_support_handle.typesupport_identifier) {
    hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_SendGoal_Response)()->data;
  }

  return &hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hydrophone_streamer_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__functions.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Hydrophoneraw_GetResult_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__init(message_memory);
}

void Hydrophoneraw_GetResult_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Request_fini_function(void * message_memory)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Hydrophoneraw_GetResult_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Hydrophoneraw_GetResult_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Request_message_members = {
  "hydrophone_streamer_pkg__action",  // message namespace
  "Hydrophoneraw_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request),
  Hydrophoneraw_GetResult_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Request_message_member_array,  // message members
  Hydrophoneraw_GetResult_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_GetResult_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Hydrophoneraw_GetResult_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Request_message_type_support_handle = {
  0,
  &Hydrophoneraw_GetResult_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hydrophone_streamer_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_GetResult_Request)() {
  Hydrophoneraw_GetResult_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Hydrophoneraw_GetResult_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Hydrophoneraw_GetResult_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Hydrophoneraw_GetResult_Request__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hydrophone_streamer_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__functions.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "hydrophone_streamer_pkg/action/hydrophoneraw.h"
// Member `result`
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Hydrophoneraw_GetResult_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__init(message_memory);
}

void Hydrophoneraw_GetResult_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Response_fini_function(void * message_memory)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Hydrophoneraw_GetResult_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Hydrophoneraw_GetResult_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Response_message_members = {
  "hydrophone_streamer_pkg__action",  // message namespace
  "Hydrophoneraw_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response),
  Hydrophoneraw_GetResult_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Response_message_member_array,  // message members
  Hydrophoneraw_GetResult_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_GetResult_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Hydrophoneraw_GetResult_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Response_message_type_support_handle = {
  0,
  &Hydrophoneraw_GetResult_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hydrophone_streamer_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_GetResult_Response)() {
  Hydrophoneraw_GetResult_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_Result)();
  if (!Hydrophoneraw_GetResult_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Hydrophoneraw_GetResult_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Hydrophoneraw_GetResult_Response__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hydrophone_streamer_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_service_members = {
  "hydrophone_streamer_pkg__action",  // service namespace
  "Hydrophoneraw_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_service_type_support_handle = {
  0,
  &hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hydrophone_streamer_pkg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_GetResult)() {
  if (!hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_service_type_support_handle.typesupport_identifier) {
    hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_GetResult_Response)()->data;
  }

  return &hydrophone_streamer_pkg__action__detail__hydrophoneraw__rosidl_typesupport_introspection_c__Hydrophoneraw_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hydrophone_streamer_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__functions.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "hydrophone_streamer_pkg/action/hydrophoneraw.h"
// Member `feedback`
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Hydrophoneraw_FeedbackMessage__rosidl_typesupport_introspection_c__Hydrophoneraw_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__init(message_memory);
}

void Hydrophoneraw_FeedbackMessage__rosidl_typesupport_introspection_c__Hydrophoneraw_FeedbackMessage_fini_function(void * message_memory)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Hydrophoneraw_FeedbackMessage__rosidl_typesupport_introspection_c__Hydrophoneraw_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Hydrophoneraw_FeedbackMessage__rosidl_typesupport_introspection_c__Hydrophoneraw_FeedbackMessage_message_members = {
  "hydrophone_streamer_pkg__action",  // message namespace
  "Hydrophoneraw_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage),
  Hydrophoneraw_FeedbackMessage__rosidl_typesupport_introspection_c__Hydrophoneraw_FeedbackMessage_message_member_array,  // message members
  Hydrophoneraw_FeedbackMessage__rosidl_typesupport_introspection_c__Hydrophoneraw_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_FeedbackMessage__rosidl_typesupport_introspection_c__Hydrophoneraw_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Hydrophoneraw_FeedbackMessage__rosidl_typesupport_introspection_c__Hydrophoneraw_FeedbackMessage_message_type_support_handle = {
  0,
  &Hydrophoneraw_FeedbackMessage__rosidl_typesupport_introspection_c__Hydrophoneraw_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hydrophone_streamer_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_FeedbackMessage)() {
  Hydrophoneraw_FeedbackMessage__rosidl_typesupport_introspection_c__Hydrophoneraw_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Hydrophoneraw_FeedbackMessage__rosidl_typesupport_introspection_c__Hydrophoneraw_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydrophone_streamer_pkg, action, Hydrophoneraw_Feedback)();
  if (!Hydrophoneraw_FeedbackMessage__rosidl_typesupport_introspection_c__Hydrophoneraw_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Hydrophoneraw_FeedbackMessage__rosidl_typesupport_introspection_c__Hydrophoneraw_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Hydrophoneraw_FeedbackMessage__rosidl_typesupport_introspection_c__Hydrophoneraw_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
