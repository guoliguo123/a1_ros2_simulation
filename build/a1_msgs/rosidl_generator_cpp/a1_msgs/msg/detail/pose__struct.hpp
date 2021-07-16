// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from a1_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__POSE__STRUCT_HPP_
#define A1_MSGS__MSG__DETAIL__POSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__a1_msgs__msg__Pose __attribute__((deprecated))
#else
# define DEPRECATED__a1_msgs__msg__Pose __declspec(deprecated)
#endif

namespace a1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pose_
{
  using Type = Pose_<ContainerAllocator>;

  explicit Pose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->bodyheight = 0.0f;
    }
  }

  explicit Pose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->bodyheight = 0.0f;
    }
  }

  // field types and members
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _roll_type =
    float;
  _roll_type roll;
  using _bodyheight_type =
    float;
  _bodyheight_type bodyheight;

  // setters for named parameter idiom
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__bodyheight(
    const float & _arg)
  {
    this->bodyheight = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    a1_msgs::msg::Pose_<ContainerAllocator> *;
  using ConstRawPtr =
    const a1_msgs::msg::Pose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<a1_msgs::msg::Pose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<a1_msgs::msg::Pose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      a1_msgs::msg::Pose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::msg::Pose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      a1_msgs::msg::Pose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::msg::Pose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<a1_msgs::msg::Pose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<a1_msgs::msg::Pose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__a1_msgs__msg__Pose
    std::shared_ptr<a1_msgs::msg::Pose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__a1_msgs__msg__Pose
    std::shared_ptr<a1_msgs::msg::Pose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pose_ & other) const
  {
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->bodyheight != other.bodyheight) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pose_

// alias to use template instance with default allocator
using Pose =
  a1_msgs::msg::Pose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace a1_msgs

#endif  // A1_MSGS__MSG__DETAIL__POSE__STRUCT_HPP_
