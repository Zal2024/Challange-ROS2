// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_msgs:msg/Controller.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_msgs/msg/controller.hpp"


#ifndef CONTROLLER_MSGS__MSG__DETAIL__CONTROLLER__BUILDER_HPP_
#define CONTROLLER_MSGS__MSG__DETAIL__CONTROLLER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_msgs/msg/detail/controller__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_msgs
{

namespace msg
{

namespace builder
{

class Init_Controller_angvel
{
public:
  explicit Init_Controller_angvel(::controller_msgs::msg::Controller & msg)
  : msg_(msg)
  {}
  ::controller_msgs::msg::Controller angvel(::controller_msgs::msg::Controller::_angvel_type arg)
  {
    msg_.angvel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_msgs::msg::Controller msg_;
};

class Init_Controller_vely
{
public:
  explicit Init_Controller_vely(::controller_msgs::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_angvel vely(::controller_msgs::msg::Controller::_vely_type arg)
  {
    msg_.vely = std::move(arg);
    return Init_Controller_angvel(msg_);
  }

private:
  ::controller_msgs::msg::Controller msg_;
};

class Init_Controller_velx
{
public:
  Init_Controller_velx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Controller_vely velx(::controller_msgs::msg::Controller::_velx_type arg)
  {
    msg_.velx = std::move(arg);
    return Init_Controller_vely(msg_);
  }

private:
  ::controller_msgs::msg::Controller msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_msgs::msg::Controller>()
{
  return controller_msgs::msg::builder::Init_Controller_velx();
}

}  // namespace controller_msgs

#endif  // CONTROLLER_MSGS__MSG__DETAIL__CONTROLLER__BUILDER_HPP_
