// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from a1_msgs:msg/HighState.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__HIGH_STATE__STRUCT_HPP_
#define A1_MSGS__MSG__DETAIL__HIGH_STATE__STRUCT_HPP_

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
// Member 'footposition2body'
// Member 'footspeed2body'
// Member 'eeforce'
#include "a1_msgs/msg/detail/cartesian__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__a1_msgs__msg__HighState __attribute__((deprecated))
#else
# define DEPRECATED__a1_msgs__msg__HighState __declspec(deprecated)
#endif

namespace a1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HighState_
{
  using Type = HighState_<ContainerAllocator>;

  explicit HighState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->levelflag = 0;
      this->commversion = 0;
      this->robotid = 0;
      this->sn = 0ul;
      this->bandwidth = 0;
      this->mode = 0;
      this->forwardspeed = 0.0f;
      this->sidespeed = 0.0f;
      this->rotatespeed = 0.0f;
      this->bodyheight = 0.0f;
      this->updownspeed = 0.0f;
      this->forwardposition = 0.0f;
      this->sideposition = 0.0f;
      this->footposition2body.fill(a1_msgs::msg::Cartesian_<ContainerAllocator>{_init});
      this->footspeed2body.fill(a1_msgs::msg::Cartesian_<ContainerAllocator>{_init});
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->footforce.begin(), this->footforce.end(), 0);
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->footforceest.begin(), this->footforceest.end(), 0);
      this->tick = 0ul;
      std::fill<typename std::array<uint8_t, 40>::iterator, uint8_t>(this->wirelessremote.begin(), this->wirelessremote.end(), 0);
      this->reserve = 0ul;
      this->crc = 0ul;
      this->eeforce.fill(a1_msgs::msg::Cartesian_<ContainerAllocator>{_init});
      std::fill<typename std::array<float, 12>::iterator, float>(this->jointp.begin(), this->jointp.end(), 0.0f);
    }
  }

  explicit HighState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu(_alloc, _init),
    footposition2body(_alloc),
    footspeed2body(_alloc),
    footforce(_alloc),
    footforceest(_alloc),
    wirelessremote(_alloc),
    eeforce(_alloc),
    jointp(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->levelflag = 0;
      this->commversion = 0;
      this->robotid = 0;
      this->sn = 0ul;
      this->bandwidth = 0;
      this->mode = 0;
      this->forwardspeed = 0.0f;
      this->sidespeed = 0.0f;
      this->rotatespeed = 0.0f;
      this->bodyheight = 0.0f;
      this->updownspeed = 0.0f;
      this->forwardposition = 0.0f;
      this->sideposition = 0.0f;
      this->footposition2body.fill(a1_msgs::msg::Cartesian_<ContainerAllocator>{_alloc, _init});
      this->footspeed2body.fill(a1_msgs::msg::Cartesian_<ContainerAllocator>{_alloc, _init});
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->footforce.begin(), this->footforce.end(), 0);
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->footforceest.begin(), this->footforceest.end(), 0);
      this->tick = 0ul;
      std::fill<typename std::array<uint8_t, 40>::iterator, uint8_t>(this->wirelessremote.begin(), this->wirelessremote.end(), 0);
      this->reserve = 0ul;
      this->crc = 0ul;
      this->eeforce.fill(a1_msgs::msg::Cartesian_<ContainerAllocator>{_alloc, _init});
      std::fill<typename std::array<float, 12>::iterator, float>(this->jointp.begin(), this->jointp.end(), 0.0f);
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
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _imu_type =
    a1_msgs::msg::IMU_<ContainerAllocator>;
  _imu_type imu;
  using _forwardspeed_type =
    float;
  _forwardspeed_type forwardspeed;
  using _sidespeed_type =
    float;
  _sidespeed_type sidespeed;
  using _rotatespeed_type =
    float;
  _rotatespeed_type rotatespeed;
  using _bodyheight_type =
    float;
  _bodyheight_type bodyheight;
  using _updownspeed_type =
    float;
  _updownspeed_type updownspeed;
  using _forwardposition_type =
    float;
  _forwardposition_type forwardposition;
  using _sideposition_type =
    float;
  _sideposition_type sideposition;
  using _footposition2body_type =
    std::array<a1_msgs::msg::Cartesian_<ContainerAllocator>, 4>;
  _footposition2body_type footposition2body;
  using _footspeed2body_type =
    std::array<a1_msgs::msg::Cartesian_<ContainerAllocator>, 4>;
  _footspeed2body_type footspeed2body;
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
  using _eeforce_type =
    std::array<a1_msgs::msg::Cartesian_<ContainerAllocator>, 4>;
  _eeforce_type eeforce;
  using _jointp_type =
    std::array<float, 12>;
  _jointp_type jointp;

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
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__imu(
    const a1_msgs::msg::IMU_<ContainerAllocator> & _arg)
  {
    this->imu = _arg;
    return *this;
  }
  Type & set__forwardspeed(
    const float & _arg)
  {
    this->forwardspeed = _arg;
    return *this;
  }
  Type & set__sidespeed(
    const float & _arg)
  {
    this->sidespeed = _arg;
    return *this;
  }
  Type & set__rotatespeed(
    const float & _arg)
  {
    this->rotatespeed = _arg;
    return *this;
  }
  Type & set__bodyheight(
    const float & _arg)
  {
    this->bodyheight = _arg;
    return *this;
  }
  Type & set__updownspeed(
    const float & _arg)
  {
    this->updownspeed = _arg;
    return *this;
  }
  Type & set__forwardposition(
    const float & _arg)
  {
    this->forwardposition = _arg;
    return *this;
  }
  Type & set__sideposition(
    const float & _arg)
  {
    this->sideposition = _arg;
    return *this;
  }
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
  Type & set__eeforce(
    const std::array<a1_msgs::msg::Cartesian_<ContainerAllocator>, 4> & _arg)
  {
    this->eeforce = _arg;
    return *this;
  }
  Type & set__jointp(
    const std::array<float, 12> & _arg)
  {
    this->jointp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    a1_msgs::msg::HighState_<ContainerAllocator> *;
  using ConstRawPtr =
    const a1_msgs::msg::HighState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<a1_msgs::msg::HighState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<a1_msgs::msg::HighState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      a1_msgs::msg::HighState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::msg::HighState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      a1_msgs::msg::HighState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::msg::HighState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<a1_msgs::msg::HighState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<a1_msgs::msg::HighState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__a1_msgs__msg__HighState
    std::shared_ptr<a1_msgs::msg::HighState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__a1_msgs__msg__HighState
    std::shared_ptr<a1_msgs::msg::HighState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HighState_ & other) const
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
    if (this->mode != other.mode) {
      return false;
    }
    if (this->imu != other.imu) {
      return false;
    }
    if (this->forwardspeed != other.forwardspeed) {
      return false;
    }
    if (this->sidespeed != other.sidespeed) {
      return false;
    }
    if (this->rotatespeed != other.rotatespeed) {
      return false;
    }
    if (this->bodyheight != other.bodyheight) {
      return false;
    }
    if (this->updownspeed != other.updownspeed) {
      return false;
    }
    if (this->forwardposition != other.forwardposition) {
      return false;
    }
    if (this->sideposition != other.sideposition) {
      return false;
    }
    if (this->footposition2body != other.footposition2body) {
      return false;
    }
    if (this->footspeed2body != other.footspeed2body) {
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
    if (this->eeforce != other.eeforce) {
      return false;
    }
    if (this->jointp != other.jointp) {
      return false;
    }
    return true;
  }
  bool operator!=(const HighState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HighState_

// alias to use template instance with default allocator
using HighState =
  a1_msgs::msg::HighState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace a1_msgs

#endif  // A1_MSGS__MSG__DETAIL__HIGH_STATE__STRUCT_HPP_
