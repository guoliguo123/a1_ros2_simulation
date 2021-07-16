// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from a1_msgs:msg/LowState.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__LOW_STATE__STRUCT_HPP_
#define A1_MSGS__MSG__DETAIL__LOW_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'imu'
#include "a1_msgs/msg/detail/imu__struct.hpp"
// Member 'motorstate'
#include "a1_msgs/msg/detail/motor_state__struct.hpp"
// Member 'eeforceraw'
// Member 'eeforce'
// Member 'position'
// Member 'velocity'
// Member 'velocity_w'
#include "a1_msgs/msg/detail/cartesian__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__a1_msgs__msg__LowState __attribute__((deprecated))
#else
# define DEPRECATED__a1_msgs__msg__LowState __declspec(deprecated)
#endif

namespace a1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LowState_
{
  using Type = LowState_<ContainerAllocator>;

  explicit LowState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu(_init),
    position(_init),
    velocity(_init),
    velocity_w(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->levelflag = 0;
      this->commversion = 0;
      this->robotid = 0;
      this->sn = 0ul;
      this->bandwidth = 0;
      this->motorstate.fill(a1_msgs::msg::MotorState_<ContainerAllocator>{_init});
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->footforce.begin(), this->footforce.end(), 0);
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->footforceest.begin(), this->footforceest.end(), 0);
      this->tick = 0ul;
      std::fill<typename std::array<uint8_t, 40>::iterator, uint8_t>(this->wirelessremote.begin(), this->wirelessremote.end(), 0);
      this->reserve = 0ul;
      this->crc = 0ul;
      this->eeforceraw.fill(a1_msgs::msg::Cartesian_<ContainerAllocator>{_init});
      this->eeforce.fill(a1_msgs::msg::Cartesian_<ContainerAllocator>{_init});
    }
  }

  explicit LowState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu(_alloc, _init),
    motorstate(_alloc),
    footforce(_alloc),
    footforceest(_alloc),
    wirelessremote(_alloc),
    eeforceraw(_alloc),
    eeforce(_alloc),
    position(_alloc, _init),
    velocity(_alloc, _init),
    velocity_w(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->levelflag = 0;
      this->commversion = 0;
      this->robotid = 0;
      this->sn = 0ul;
      this->bandwidth = 0;
      this->motorstate.fill(a1_msgs::msg::MotorState_<ContainerAllocator>{_alloc, _init});
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->footforce.begin(), this->footforce.end(), 0);
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->footforceest.begin(), this->footforceest.end(), 0);
      this->tick = 0ul;
      std::fill<typename std::array<uint8_t, 40>::iterator, uint8_t>(this->wirelessremote.begin(), this->wirelessremote.end(), 0);
      this->reserve = 0ul;
      this->crc = 0ul;
      this->eeforceraw.fill(a1_msgs::msg::Cartesian_<ContainerAllocator>{_alloc, _init});
      this->eeforce.fill(a1_msgs::msg::Cartesian_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _levelflag_type =
    uint8_t;
  _levelflag_type levelflag;
  using _commversion_type =
    uint16_t;
  _commversion_type commversion;
  using _robotid_type =
    uint16_t;
  _robotid_type robotid;
  using _sn_type =
    uint32_t;
  _sn_type sn;
  using _bandwidth_type =
    uint8_t;
  _bandwidth_type bandwidth;
  using _imu_type =
    a1_msgs::msg::IMU_<ContainerAllocator>;
  _imu_type imu;
  using _motorstate_type =
    std::array<a1_msgs::msg::MotorState_<ContainerAllocator>, 20>;
  _motorstate_type motorstate;
  using _footforce_type =
    std::array<int16_t, 4>;
  _footforce_type footforce;
  using _footforceest_type =
    std::array<int16_t, 4>;
  _footforceest_type footforceest;
  using _tick_type =
    uint32_t;
  _tick_type tick;
  using _wirelessremote_type =
    std::array<uint8_t, 40>;
  _wirelessremote_type wirelessremote;
  using _reserve_type =
    uint32_t;
  _reserve_type reserve;
  using _crc_type =
    uint32_t;
  _crc_type crc;
  using _eeforceraw_type =
    std::array<a1_msgs::msg::Cartesian_<ContainerAllocator>, 4>;
  _eeforceraw_type eeforceraw;
  using _eeforce_type =
    std::array<a1_msgs::msg::Cartesian_<ContainerAllocator>, 4>;
  _eeforce_type eeforce;
  using _position_type =
    a1_msgs::msg::Cartesian_<ContainerAllocator>;
  _position_type position;
  using _velocity_type =
    a1_msgs::msg::Cartesian_<ContainerAllocator>;
  _velocity_type velocity;
  using _velocity_w_type =
    a1_msgs::msg::Cartesian_<ContainerAllocator>;
  _velocity_w_type velocity_w;

  // setters for named parameter idiom
  Type & set__levelflag(
    const uint8_t & _arg)
  {
    this->levelflag = _arg;
    return *this;
  }
  Type & set__commversion(
    const uint16_t & _arg)
  {
    this->commversion = _arg;
    return *this;
  }
  Type & set__robotid(
    const uint16_t & _arg)
  {
    this->robotid = _arg;
    return *this;
  }
  Type & set__sn(
    const uint32_t & _arg)
  {
    this->sn = _arg;
    return *this;
  }
  Type & set__bandwidth(
    const uint8_t & _arg)
  {
    this->bandwidth = _arg;
    return *this;
  }
  Type & set__imu(
    const a1_msgs::msg::IMU_<ContainerAllocator> & _arg)
  {
    this->imu = _arg;
    return *this;
  }
  Type & set__motorstate(
    const std::array<a1_msgs::msg::MotorState_<ContainerAllocator>, 20> & _arg)
  {
    this->motorstate = _arg;
    return *this;
  }
  Type & set__footforce(
    const std::array<int16_t, 4> & _arg)
  {
    this->footforce = _arg;
    return *this;
  }
  Type & set__footforceest(
    const std::array<int16_t, 4> & _arg)
  {
    this->footforceest = _arg;
    return *this;
  }
  Type & set__tick(
    const uint32_t & _arg)
  {
    this->tick = _arg;
    return *this;
  }
  Type & set__wirelessremote(
    const std::array<uint8_t, 40> & _arg)
  {
    this->wirelessremote = _arg;
    return *this;
  }
  Type & set__reserve(
    const uint32_t & _arg)
  {
    this->reserve = _arg;
    return *this;
  }
  Type & set__crc(
    const uint32_t & _arg)
  {
    this->crc = _arg;
    return *this;
  }
  Type & set__eeforceraw(
    const std::array<a1_msgs::msg::Cartesian_<ContainerAllocator>, 4> & _arg)
  {
    this->eeforceraw = _arg;
    return *this;
  }
  Type & set__eeforce(
    const std::array<a1_msgs::msg::Cartesian_<ContainerAllocator>, 4> & _arg)
  {
    this->eeforce = _arg;
    return *this;
  }
  Type & set__position(
    const a1_msgs::msg::Cartesian_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const a1_msgs::msg::Cartesian_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__velocity_w(
    const a1_msgs::msg::Cartesian_<ContainerAllocator> & _arg)
  {
    this->velocity_w = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    a1_msgs::msg::LowState_<ContainerAllocator> *;
  using ConstRawPtr =
    const a1_msgs::msg::LowState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<a1_msgs::msg::LowState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<a1_msgs::msg::LowState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      a1_msgs::msg::LowState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::msg::LowState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      a1_msgs::msg::LowState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::msg::LowState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<a1_msgs::msg::LowState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<a1_msgs::msg::LowState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__a1_msgs__msg__LowState
    std::shared_ptr<a1_msgs::msg::LowState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__a1_msgs__msg__LowState
    std::shared_ptr<a1_msgs::msg::LowState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LowState_ & other) const
  {
    if (this->levelflag != other.levelflag) {
      return false;
    }
    if (this->commversion != other.commversion) {
      return false;
    }
    if (this->robotid != other.robotid) {
      return false;
    }
    if (this->sn != other.sn) {
      return false;
    }
    if (this->bandwidth != other.bandwidth) {
      return false;
    }
    if (this->imu != other.imu) {
      return false;
    }
    if (this->motorstate != other.motorstate) {
      return false;
    }
    if (this->footforce != other.footforce) {
      return false;
    }
    if (this->footforceest != other.footforceest) {
      return false;
    }
    if (this->tick != other.tick) {
      return false;
    }
    if (this->wirelessremote != other.wirelessremote) {
      return false;
    }
    if (this->reserve != other.reserve) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    if (this->eeforceraw != other.eeforceraw) {
      return false;
    }
    if (this->eeforce != other.eeforce) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->velocity_w != other.velocity_w) {
      return false;
    }
    return true;
  }
  bool operator!=(const LowState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LowState_

// alias to use template instance with default allocator
using LowState =
  a1_msgs::msg::LowState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace a1_msgs

#endif  // A1_MSGS__MSG__DETAIL__LOW_STATE__STRUCT_HPP_
