// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hydrophone_streamer_pkg:action/Hydrophoneraw.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hydrophone_streamer_pkg
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Hydrophoneraw_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hydrophone_streamer_pkg::action::Hydrophoneraw_Goal(_init);
}

void Hydrophoneraw_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal *>(message_memory);
  typed_message->~Hydrophoneraw_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Hydrophoneraw_Goal_message_member_array[1] = {
  {
    "streamseconds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg::action::Hydrophoneraw_Goal, streamseconds),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Hydrophoneraw_Goal_message_members = {
  "hydrophone_streamer_pkg::action",  // message namespace
  "Hydrophoneraw_Goal",  // message name
  1,  // number of fields
  sizeof(hydrophone_streamer_pkg::action::Hydrophoneraw_Goal),
  Hydrophoneraw_Goal_message_member_array,  // message members
  Hydrophoneraw_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Hydrophoneraw_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Hydrophoneraw_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace hydrophone_streamer_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal>()
{
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hydrophone_streamer_pkg, action, Hydrophoneraw_Goal)() {
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hydrophone_streamer_pkg
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Hydrophoneraw_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hydrophone_streamer_pkg::action::Hydrophoneraw_Result(_init);
}

void Hydrophoneraw_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hydrophone_streamer_pkg::action::Hydrophoneraw_Result *>(message_memory);
  typed_message->~Hydrophoneraw_Result();
}

size_t size_function__Hydrophoneraw_Result__rawdata(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Hydrophoneraw_Result__rawdata(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Hydrophoneraw_Result__rawdata(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Hydrophoneraw_Result__rawdata(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Hydrophoneraw_Result_message_member_array[1] = {
  {
    "rawdata",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg::action::Hydrophoneraw_Result, rawdata),  // bytes offset in struct
    nullptr,  // default value
    size_function__Hydrophoneraw_Result__rawdata,  // size() function pointer
    get_const_function__Hydrophoneraw_Result__rawdata,  // get_const(index) function pointer
    get_function__Hydrophoneraw_Result__rawdata,  // get(index) function pointer
    resize_function__Hydrophoneraw_Result__rawdata  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Hydrophoneraw_Result_message_members = {
  "hydrophone_streamer_pkg::action",  // message namespace
  "Hydrophoneraw_Result",  // message name
  1,  // number of fields
  sizeof(hydrophone_streamer_pkg::action::Hydrophoneraw_Result),
  Hydrophoneraw_Result_message_member_array,  // message members
  Hydrophoneraw_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Hydrophoneraw_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Hydrophoneraw_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace hydrophone_streamer_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_Result>()
{
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hydrophone_streamer_pkg, action, Hydrophoneraw_Result)() {
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hydrophone_streamer_pkg
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Hydrophoneraw_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback(_init);
}

void Hydrophoneraw_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback *>(message_memory);
  typed_message->~Hydrophoneraw_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Hydrophoneraw_Feedback_message_member_array[1] = {
  {
    "rawsnapshot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback, rawsnapshot),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Hydrophoneraw_Feedback_message_members = {
  "hydrophone_streamer_pkg::action",  // message namespace
  "Hydrophoneraw_Feedback",  // message name
  1,  // number of fields
  sizeof(hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback),
  Hydrophoneraw_Feedback_message_member_array,  // message members
  Hydrophoneraw_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Hydrophoneraw_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Hydrophoneraw_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace hydrophone_streamer_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback>()
{
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hydrophone_streamer_pkg, action, Hydrophoneraw_Feedback)() {
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hydrophone_streamer_pkg
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Hydrophoneraw_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request(_init);
}

void Hydrophoneraw_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request *>(message_memory);
  typed_message->~Hydrophoneraw_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Hydrophoneraw_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Hydrophoneraw_SendGoal_Request_message_members = {
  "hydrophone_streamer_pkg::action",  // message namespace
  "Hydrophoneraw_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request),
  Hydrophoneraw_SendGoal_Request_message_member_array,  // message members
  Hydrophoneraw_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Hydrophoneraw_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Hydrophoneraw_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace hydrophone_streamer_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request>()
{
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hydrophone_streamer_pkg, action, Hydrophoneraw_SendGoal_Request)() {
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hydrophone_streamer_pkg
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Hydrophoneraw_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response(_init);
}

void Hydrophoneraw_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response *>(message_memory);
  typed_message->~Hydrophoneraw_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Hydrophoneraw_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Hydrophoneraw_SendGoal_Response_message_members = {
  "hydrophone_streamer_pkg::action",  // message namespace
  "Hydrophoneraw_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response),
  Hydrophoneraw_SendGoal_Response_message_member_array,  // message members
  Hydrophoneraw_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Hydrophoneraw_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Hydrophoneraw_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace hydrophone_streamer_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response>()
{
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hydrophone_streamer_pkg, action, Hydrophoneraw_SendGoal_Response)() {
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace hydrophone_streamer_pkg
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Hydrophoneraw_SendGoal_service_members = {
  "hydrophone_streamer_pkg::action",  // service namespace
  "Hydrophoneraw_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Hydrophoneraw_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Hydrophoneraw_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace hydrophone_streamer_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hydrophone_streamer_pkg, action, Hydrophoneraw_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hydrophone_streamer_pkg
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Hydrophoneraw_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request(_init);
}

void Hydrophoneraw_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request *>(message_memory);
  typed_message->~Hydrophoneraw_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Hydrophoneraw_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Hydrophoneraw_GetResult_Request_message_members = {
  "hydrophone_streamer_pkg::action",  // message namespace
  "Hydrophoneraw_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request),
  Hydrophoneraw_GetResult_Request_message_member_array,  // message members
  Hydrophoneraw_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Hydrophoneraw_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Hydrophoneraw_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace hydrophone_streamer_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request>()
{
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hydrophone_streamer_pkg, action, Hydrophoneraw_GetResult_Request)() {
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hydrophone_streamer_pkg
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Hydrophoneraw_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response(_init);
}

void Hydrophoneraw_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response *>(message_memory);
  typed_message->~Hydrophoneraw_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Hydrophoneraw_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Hydrophoneraw_GetResult_Response_message_members = {
  "hydrophone_streamer_pkg::action",  // message namespace
  "Hydrophoneraw_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response),
  Hydrophoneraw_GetResult_Response_message_member_array,  // message members
  Hydrophoneraw_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Hydrophoneraw_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Hydrophoneraw_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace hydrophone_streamer_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response>()
{
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hydrophone_streamer_pkg, action, Hydrophoneraw_GetResult_Response)() {
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace hydrophone_streamer_pkg
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Hydrophoneraw_GetResult_service_members = {
  "hydrophone_streamer_pkg::action",  // service namespace
  "Hydrophoneraw_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Hydrophoneraw_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Hydrophoneraw_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace hydrophone_streamer_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hydrophone_streamer_pkg, action, Hydrophoneraw_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hydrophone_streamer_pkg
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Hydrophoneraw_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage(_init);
}

void Hydrophoneraw_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage *>(message_memory);
  typed_message->~Hydrophoneraw_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Hydrophoneraw_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Hydrophoneraw_FeedbackMessage_message_members = {
  "hydrophone_streamer_pkg::action",  // message namespace
  "Hydrophoneraw_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage),
  Hydrophoneraw_FeedbackMessage_message_member_array,  // message members
  Hydrophoneraw_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Hydrophoneraw_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Hydrophoneraw_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Hydrophoneraw_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace hydrophone_streamer_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage>()
{
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hydrophone_streamer_pkg, action, Hydrophoneraw_FeedbackMessage)() {
  return &::hydrophone_streamer_pkg::action::rosidl_typesupport_introspection_cpp::Hydrophoneraw_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
