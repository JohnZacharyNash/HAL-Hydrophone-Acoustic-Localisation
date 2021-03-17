// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hydrophone_streamer_pkg:action/Hydrophoneraw.idl
// generated code does not contain a copyright notice

#ifndef HYDROPHONE_STREAMER_PKG__ACTION__DETAIL__HYDROPHONERAW__STRUCT_HPP_
#define HYDROPHONE_STREAMER_PKG__ACTION__DETAIL__HYDROPHONERAW__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_Goal __attribute__((deprecated))
#else
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_Goal __declspec(deprecated)
#endif

namespace hydrophone_streamer_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Hydrophoneraw_Goal_
{
  using Type = Hydrophoneraw_Goal_<ContainerAllocator>;

  explicit Hydrophoneraw_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->streamseconds = 0l;
    }
  }

  explicit Hydrophoneraw_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->streamseconds = 0l;
    }
  }

  // field types and members
  using _streamseconds_type =
    int32_t;
  _streamseconds_type streamseconds;

  // setters for named parameter idiom
  Type & set__streamseconds(
    const int32_t & _arg)
  {
    this->streamseconds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hydrophone_streamer_pkg::action::Hydrophoneraw_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const hydrophone_streamer_pkg::action::Hydrophoneraw_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_Goal
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_Goal
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hydrophoneraw_Goal_ & other) const
  {
    if (this->streamseconds != other.streamseconds) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hydrophoneraw_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hydrophoneraw_Goal_

// alias to use template instance with default allocator
using Hydrophoneraw_Goal =
  hydrophone_streamer_pkg::action::Hydrophoneraw_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hydrophone_streamer_pkg


#ifndef _WIN32
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_Result __attribute__((deprecated))
#else
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_Result __declspec(deprecated)
#endif

namespace hydrophone_streamer_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Hydrophoneraw_Result_
{
  using Type = Hydrophoneraw_Result_<ContainerAllocator>;

  explicit Hydrophoneraw_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Hydrophoneraw_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _rawdata_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _rawdata_type rawdata;

  // setters for named parameter idiom
  Type & set__rawdata(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->rawdata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hydrophone_streamer_pkg::action::Hydrophoneraw_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const hydrophone_streamer_pkg::action::Hydrophoneraw_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_Result
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_Result
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hydrophoneraw_Result_ & other) const
  {
    if (this->rawdata != other.rawdata) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hydrophoneraw_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hydrophoneraw_Result_

// alias to use template instance with default allocator
using Hydrophoneraw_Result =
  hydrophone_streamer_pkg::action::Hydrophoneraw_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hydrophone_streamer_pkg


#ifndef _WIN32
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback __declspec(deprecated)
#endif

namespace hydrophone_streamer_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Hydrophoneraw_Feedback_
{
  using Type = Hydrophoneraw_Feedback_<ContainerAllocator>;

  explicit Hydrophoneraw_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rawsnapshot = 0l;
    }
  }

  explicit Hydrophoneraw_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rawsnapshot = 0l;
    }
  }

  // field types and members
  using _rawsnapshot_type =
    int32_t;
  _rawsnapshot_type rawsnapshot;

  // setters for named parameter idiom
  Type & set__rawsnapshot(
    const int32_t & _arg)
  {
    this->rawsnapshot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hydrophoneraw_Feedback_ & other) const
  {
    if (this->rawsnapshot != other.rawsnapshot) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hydrophoneraw_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hydrophoneraw_Feedback_

// alias to use template instance with default allocator
using Hydrophoneraw_Feedback =
  hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hydrophone_streamer_pkg


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request __declspec(deprecated)
#endif

namespace hydrophone_streamer_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Hydrophoneraw_SendGoal_Request_
{
  using Type = Hydrophoneraw_SendGoal_Request_<ContainerAllocator>;

  explicit Hydrophoneraw_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Hydrophoneraw_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    hydrophone_streamer_pkg::action::Hydrophoneraw_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const hydrophone_streamer_pkg::action::Hydrophoneraw_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hydrophoneraw_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hydrophoneraw_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hydrophoneraw_SendGoal_Request_

// alias to use template instance with default allocator
using Hydrophoneraw_SendGoal_Request =
  hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hydrophone_streamer_pkg


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response __declspec(deprecated)
#endif

namespace hydrophone_streamer_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Hydrophoneraw_SendGoal_Response_
{
  using Type = Hydrophoneraw_SendGoal_Response_<ContainerAllocator>;

  explicit Hydrophoneraw_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Hydrophoneraw_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hydrophoneraw_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hydrophoneraw_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hydrophoneraw_SendGoal_Response_

// alias to use template instance with default allocator
using Hydrophoneraw_SendGoal_Response =
  hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hydrophone_streamer_pkg

namespace hydrophone_streamer_pkg
{

namespace action
{

struct Hydrophoneraw_SendGoal
{
  using Request = hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Request;
  using Response = hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal_Response;
};

}  // namespace action

}  // namespace hydrophone_streamer_pkg


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request __declspec(deprecated)
#endif

namespace hydrophone_streamer_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Hydrophoneraw_GetResult_Request_
{
  using Type = Hydrophoneraw_GetResult_Request_<ContainerAllocator>;

  explicit Hydrophoneraw_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Hydrophoneraw_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hydrophoneraw_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hydrophoneraw_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hydrophoneraw_GetResult_Request_

// alias to use template instance with default allocator
using Hydrophoneraw_GetResult_Request =
  hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hydrophone_streamer_pkg


// Include directives for member types
// Member 'result'
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response __declspec(deprecated)
#endif

namespace hydrophone_streamer_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Hydrophoneraw_GetResult_Response_
{
  using Type = Hydrophoneraw_GetResult_Response_<ContainerAllocator>;

  explicit Hydrophoneraw_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Hydrophoneraw_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    hydrophone_streamer_pkg::action::Hydrophoneraw_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const hydrophone_streamer_pkg::action::Hydrophoneraw_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hydrophoneraw_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hydrophoneraw_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hydrophoneraw_GetResult_Response_

// alias to use template instance with default allocator
using Hydrophoneraw_GetResult_Response =
  hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hydrophone_streamer_pkg

namespace hydrophone_streamer_pkg
{

namespace action
{

struct Hydrophoneraw_GetResult
{
  using Request = hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Request;
  using Response = hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult_Response;
};

}  // namespace action

}  // namespace hydrophone_streamer_pkg


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage __declspec(deprecated)
#endif

namespace hydrophone_streamer_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Hydrophoneraw_FeedbackMessage_
{
  using Type = Hydrophoneraw_FeedbackMessage_<ContainerAllocator>;

  explicit Hydrophoneraw_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Hydrophoneraw_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage
    std::shared_ptr<hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hydrophoneraw_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hydrophoneraw_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hydrophoneraw_FeedbackMessage_

// alias to use template instance with default allocator
using Hydrophoneraw_FeedbackMessage =
  hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hydrophone_streamer_pkg

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace hydrophone_streamer_pkg
{

namespace action
{

struct Hydrophoneraw
{
  /// The goal message defined in the action definition.
  using Goal = hydrophone_streamer_pkg::action::Hydrophoneraw_Goal;
  /// The result message defined in the action definition.
  using Result = hydrophone_streamer_pkg::action::Hydrophoneraw_Result;
  /// The feedback message defined in the action definition.
  using Feedback = hydrophone_streamer_pkg::action::Hydrophoneraw_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = hydrophone_streamer_pkg::action::Hydrophoneraw_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = hydrophone_streamer_pkg::action::Hydrophoneraw_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = hydrophone_streamer_pkg::action::Hydrophoneraw_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Hydrophoneraw Hydrophoneraw;

}  // namespace action

}  // namespace hydrophone_streamer_pkg

#endif  // HYDROPHONE_STREAMER_PKG__ACTION__DETAIL__HYDROPHONERAW__STRUCT_HPP_
