// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from a1_msgs:srv/Imu.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__SRV__DETAIL__IMU__STRUCT_HPP_
#define A1_MSGS__SRV__DETAIL__IMU__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__a1_msgs__srv__Imu_Request __attribute__((deprecated))
#else
# define DEPRECATED__a1_msgs__srv__Imu_Request __declspec(deprecated)
#endif

namespace a1_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Imu_Request_
{
  using Type = Imu_Request_<ContainerAllocator>;

  explicit Imu_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Imu_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    a1_msgs::srv::Imu_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const a1_msgs::srv::Imu_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<a1_msgs::srv::Imu_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<a1_msgs::srv::Imu_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      a1_msgs::srv::Imu_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::srv::Imu_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      a1_msgs::srv::Imu_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::srv::Imu_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<a1_msgs::srv::Imu_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<a1_msgs::srv::Imu_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__a1_msgs__srv__Imu_Request
    std::shared_ptr<a1_msgs::srv::Imu_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__a1_msgs__srv__Imu_Request
    std::shared_ptr<a1_msgs::srv::Imu_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Imu_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Imu_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Imu_Request_

// alias to use template instance with default allocator
using Imu_Request =
  a1_msgs::srv::Imu_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace a1_msgs


#ifndef _WIN32
# define DEPRECATED__a1_msgs__srv__Imu_Response __attribute__((deprecated))
#else
# define DEPRECATED__a1_msgs__srv__Imu_Response __declspec(deprecated)
#endif

namespace a1_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Imu_Response_
{
  using Type = Imu_Response_<ContainerAllocator>;

  explicit Imu_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->quaternion.begin(), this->quaternion.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyroscope.begin(), this->gyroscope.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accelerometer.begin(), this->accelerometer.end(), 0.0f);
      this->temperature = 0;
    }
  }

  explicit Imu_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : quaternion(_alloc),
    gyroscope(_alloc),
    accelerometer(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->quaternion.begin(), this->quaternion.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyroscope.begin(), this->gyroscope.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accelerometer.begin(), this->accelerometer.end(), 0.0f);
      this->temperature = 0;
    }
  }

  // field types and members
  using _quaternion_type =
    std::array<float, 4>;
  _quaternion_type quaternion;
  using _gyroscope_type =
    std::array<float, 3>;
  _gyroscope_type gyroscope;
  using _accelerometer_type =
    std::array<float, 3>;
  _accelerometer_type accelerometer;
  using _temperature_type =
    int8_t;
  _temperature_type temperature;

  // setters for named parameter idiom
  Type & set__quaternion(
    const std::array<float, 4> & _arg)
  {
    this->quaternion = _arg;
    return *this;
  }
  Type & set__gyroscope(
    const std::array<float, 3> & _arg)
  {
    this->gyroscope = _arg;
    return *this;
  }
  Type & set__accelerometer(
    const std::array<float, 3> & _arg)
  {
    this->accelerometer = _arg;
    return *this;
  }
  Type & set__temperature(
    const int8_t & _arg)
  {
    this->temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    a1_msgs::srv::Imu_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const a1_msgs::srv::Imu_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<a1_msgs::srv::Imu_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<a1_msgs::srv::Imu_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      a1_msgs::srv::Imu_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::srv::Imu_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      a1_msgs::srv::Imu_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::srv::Imu_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<a1_msgs::srv::Imu_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<a1_msgs::srv::Imu_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__a1_msgs__srv__Imu_Response
    std::shared_ptr<a1_msgs::srv::Imu_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__a1_msgs__srv__Imu_Response
    std::shared_ptr<a1_msgs::srv::Imu_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Imu_Response_ & other) const
  {
    if (this->quaternion != other.quaternion) {
      return false;
    }
    if (this->gyroscope != other.gyroscope) {
      return false;
    }
    if (this->accelerometer != other.accelerometer) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const Imu_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Imu_Response_

// alias to use template instance with default allocator
using Imu_Response =
  a1_msgs::srv::Imu_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace a1_msgs

namespace a1_msgs
{

namespace srv
{

struct Imu
{
  using Request = a1_msgs::srv::Imu_Request;
  using Response = a1_msgs::srv::Imu_Response;
};

}  // namespace srv

}  // namespace a1_msgs

#endif  // A1_MSGS__SRV__DETAIL__IMU__STRUCT_HPP_
