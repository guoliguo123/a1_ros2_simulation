// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from a1_msgs:msg/HighCmd.idl
// generated code does not contain a copyright notice

#ifndef A1_MSGS__MSG__DETAIL__HIGH_CMD__STRUCT_HPP_
#define A1_MSGS__MSG__DETAIL__HIGH_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'led'
#include "a1_msgs/msg/detail/led__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__a1_msgs__msg__HighCmd __attribute__((deprecated))
#else
# define DEPRECATED__a1_msgs__msg__HighCmd __declspec(deprecated)
#endif

namespace a1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HighCmd_
{
  using Type = HighCmd_<ContainerAllocator>;

  explicit HighCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
      this->footraiseheight = 0.0f;
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->led.fill(a1_msgs::msg::LED_<ContainerAllocator>{_init});
      std::fill<typename std::array<uint8_t, 40>::iterator, uint8_t>(this->wirelessremote.begin(), this->wirelessremote.end(), 0);
      std::fill<typename std::array<uint8_t, 40>::iterator, uint8_t>(this->appremote.begin(), this->appremote.end(), 0);
      this->reserve = 0ul;
      this->crc = 0l;
    }
  }

  explicit HighCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : led(_alloc),
    wirelessremote(_alloc),
    appremote(_alloc)
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
      this->footraiseheight = 0.0f;
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->led.fill(a1_msgs::msg::LED_<ContainerAllocator>{_alloc, _init});
      std::fill<typename std::array<uint8_t, 40>::iterator, uint8_t>(this->wirelessremote.begin(), this->wirelessremote.end(), 0);
      std::fill<typename std::array<uint8_t, 40>::iterator, uint8_t>(this->appremote.begin(), this->appremote.end(), 0);
      this->reserve = 0ul;
      this->crc = 0l;
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
  using _footraiseheight_type =
    float;
  _footraiseheight_type footraiseheight;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _roll_type =
    float;
  _roll_type roll;
  using _led_type =
    std::array<a1_msgs::msg::LED_<ContainerAllocator>, 4>;
  _led_type led;
  using _wirelessremote_type =
    std::array<uint8_t, 40>;
  _wirelessremote_type wirelessremote;
  using _appremote_type =
    std::array<uint8_t, 40>;
  _appremote_type appremote;
  using _reserve_type =
    uint32_t;
  _reserve_type reserve;
  using _crc_type =
    int32_t;
  _crc_type crc;

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
  Type & set__footraiseheight(
    const float & _arg)
  {
    this->footraiseheight = _arg;
    return *this;
  }
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
  Type & set__led(
    const std::array<a1_msgs::msg::LED_<ContainerAllocator>, 4> & _arg)
  {
    this->led = _arg;
    return *this;
  }
  Type & set__wirelessremote(
    const std::array<uint8_t, 40> & _arg)
  {
    this->wirelessremote = _arg;
    return *this;
  }
  Type & set__appremote(
    const std::array<uint8_t, 40> & _arg)
  {
    this->appremote = _arg;
    return *this;
  }
  Type & set__reserve(
    const uint32_t & _arg)
  {
    this->reserve = _arg;
    return *this;
  }
  Type & set__crc(
    const int32_t & _arg)
  {
    this->crc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    a1_msgs::msg::HighCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const a1_msgs::msg::HighCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<a1_msgs::msg::HighCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<a1_msgs::msg::HighCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      a1_msgs::msg::HighCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::msg::HighCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      a1_msgs::msg::HighCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<a1_msgs::msg::HighCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<a1_msgs::msg::HighCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<a1_msgs::msg::HighCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__a1_msgs__msg__HighCmd
    std::shared_ptr<a1_msgs::msg::HighCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__a1_msgs__msg__HighCmd
    std::shared_ptr<a1_msgs::msg::HighCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HighCmd_ & other) const
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
    if (this->footraiseheight != other.footraiseheight) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->led != other.led) {
      return false;
    }
    if (this->wirelessremote != other.wirelessremote) {
      return false;
    }
    if (this->appremote != other.appremote) {
      return false;
    }
    if (this->reserve != other.reserve) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    return true;
  }
  bool operator!=(const HighCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HighCmd_

// alias to use template instance with default allocator
using HighCmd =
  a1_msgs::msg::HighCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace a1_msgs

#endif  // A1_MSGS__MSG__DETAIL__HIGH_CMD__STRUCT_HPP_
