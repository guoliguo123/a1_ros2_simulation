// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from a1_msgs:srv/Cartesian.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__SRV__DETAIL__CARTESIAN__STRUCT_HPP_
#define A1_MSGS__SRV__DETAIL__CARTESIAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__a1_msgs__srv__Cartesian_Request __attribute__((deprecated))
#else
# define DEPRECATED__a1_msgs__srv__Cartesian_Request __declspec(deprecated)
#endif

namespace a1_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Cartesian_Request_
{
  using Type = Cartesian_Request_<ContainerAllocator>;

  explicit Cartesian_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Cartesian_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    a1_msgs::srv::Cartesian_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const a1_msgs::srv::Cartesian_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<a1_msgs::srv::Cartesian_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<a1_msgs::srv::Cartesian_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      a1_msgs::srv::Cartesian_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::srv::Cartesian_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      a1_msgs::srv::Cartesian_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::srv::Cartesian_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<a1_msgs::srv::Cartesian_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<a1_msgs::srv::Cartesian_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__a1_msgs__srv__Cartesian_Request
    std::shared_ptr<a1_msgs::srv::Cartesian_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__a1_msgs__srv__Cartesian_Request
    std::shared_ptr<a1_msgs::srv::Cartesian_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cartesian_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cartesian_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cartesian_Request_

// alias to use template instance with default allocator
using Cartesian_Request =
  a1_msgs::srv::Cartesian_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace a1_msgs


// Include directives for member types
// Member 'footposition2body'
// Member 'footspeed2body'
#include "a1_msgs/msg/detail/cartesian__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__a1_msgs__srv__Cartesian_Response __attribute__((deprecated))
#else
# define DEPRECATED__a1_msgs__srv__Cartesian_Response __declspec(deprecated)
#endif

namespace a1_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Cartesian_Response_
{
  using Type = Cartesian_Response_<ContainerAllocator>;

  explicit Cartesian_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->footposition2body.fill(a1_msgs::msg::Cartesian_<ContainerAllocator>{_init});
      this->footspeed2body.fill(a1_msgs::msg::Cartesian_<ContainerAllocator>{_init});
    }
  }

  explicit Cartesian_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : footposition2body(_alloc),
    footspeed2body(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->footposition2body.fill(a1_msgs::msg::Cartesian_<ContainerAllocator>{_alloc, _init});
      this->footspeed2body.fill(a1_msgs::msg::Cartesian_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _footposition2body_type =
    std::array<a1_msgs::msg::Cartesian_<ContainerAllocator>, 4>;
  _footposition2body_type footposition2body;
  using _footspeed2body_type =
    std::array<a1_msgs::msg::Cartesian_<ContainerAllocator>, 4>;
  _footspeed2body_type footspeed2body;

  // setters for named parameter idiom
  Type & set__footposition2body(
    const std::array<a1_msgs::msg::Cartesian_<ContainerAllocator>, 4> & _arg)
  {
    this->footposition2body = _arg;
    return *this;
  }
  Type & set__footspeed2body(
    const std::array<a1_msgs::msg::Cartesian_<ContainerAllocator>, 4> & _arg)
  {
    this->footspeed2body = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    a1_msgs::srv::Cartesian_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const a1_msgs::srv::Cartesian_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<a1_msgs::srv::Cartesian_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<a1_msgs::srv::Cartesian_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      a1_msgs::srv::Cartesian_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::srv::Cartesian_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      a1_msgs::srv::Cartesian_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::srv::Cartesian_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<a1_msgs::srv::Cartesian_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<a1_msgs::srv::Cartesian_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__a1_msgs__srv__Cartesian_Response
    std::shared_ptr<a1_msgs::srv::Cartesian_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__a1_msgs__srv__Cartesian_Response
    std::shared_ptr<a1_msgs::srv::Cartesian_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cartesian_Response_ & other) const
  {
    if (this->footposition2body != other.footposition2body) {
      return false;
    }
    if (this->footspeed2body != other.footspeed2body) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cartesian_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cartesian_Response_

// alias to use template instance with default allocator
using Cartesian_Response =
  a1_msgs::srv::Cartesian_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace a1_msgs

namespace a1_msgs
{

namespace srv
{

struct Cartesian
{
  using Request = a1_msgs::srv::Cartesian_Request;
  using Response = a1_msgs::srv::Cartesian_Response;
};

}  // namespace srv

}  // namespace a1_msgs

#endif  // A1_MSGS__SRV__DETAIL__CARTESIAN__STRUCT_HPP_
