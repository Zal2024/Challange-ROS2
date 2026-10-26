// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg:msg/Controller.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "msg/msg/controller.hpp"


#ifndef MSG__MSG__DETAIL__CONTROLLER__BUILDER_HPP_
#define MSG__MSG__DETAIL__CONTROLLER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg/msg/detail/controller__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg
{

namespace msg
{

namespace builder
{

class Init_Controller_angvel
{
public:
  explicit Init_Controller_angvel(::msg::msg::Controller & msg)
  : msg_(msg)
  {}
  ::msg::msg::Controller angvel(::msg::msg::Controller::_angvel_type arg)
  {
    msg_.angvel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg::msg::Controller msg_;
};

class Init_Controller_vely
{
public:
  explicit Init_Controller_vely(::msg::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_angvel vely(::msg::msg::Controller::_vely_type arg)
  {
    msg_.vely = std::move(arg);
    return Init_Controller_angvel(msg_);
  }

private:
  ::msg::msg::Controller msg_;
};

class Init_Controller_velx
{
public:
  Init_Controller_velx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Controller_vely velx(::msg::msg::Controller::_velx_type arg)
  {
    msg_.velx = std::move(arg);
    return Init_Controller_vely(msg_);
  }

private:
  ::msg::msg::Controller msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg::msg::Controller>()
{
  return msg::msg::builder::Init_Controller_velx();
}

}  // namespace msg

#endif  // MSG__MSG__DETAIL__CONTROLLER__BUILDER_HPP_
