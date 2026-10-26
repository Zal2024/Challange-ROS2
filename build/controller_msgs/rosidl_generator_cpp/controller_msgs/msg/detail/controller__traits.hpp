// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_msgs:msg/Controller.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_msgs/msg/controller.hpp"


#ifndef CONTROLLER_MSGS__MSG__DETAIL__CONTROLLER__TRAITS_HPP_
#define CONTROLLER_MSGS__MSG__DETAIL__CONTROLLER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_msgs/msg/detail/controller__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace controller_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Controller & msg,
  std::ostream & out)
{
  out << "{";
  // member: velx
  {
    out << "velx: ";
    rosidl_generator_traits::value_to_yaml(msg.velx, out);
    out << ", ";
  }

  // member: vely
  {
    out << "vely: ";
    rosidl_generator_traits::value_to_yaml(msg.vely, out);
    out << ", ";
  }

  // member: angvel
  {
    out << "angvel: ";
    rosidl_generator_traits::value_to_yaml(msg.angvel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Controller & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: velx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velx: ";
    rosidl_generator_traits::value_to_yaml(msg.velx, out);
    out << "\n";
  }

  // member: vely
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vely: ";
    rosidl_generator_traits::value_to_yaml(msg.vely, out);
    out << "\n";
  }

  // member: angvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angvel: ";
    rosidl_generator_traits::value_to_yaml(msg.angvel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Controller & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace controller_msgs

namespace rosidl_generator_traits
{

[[deprecated("use controller_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const controller_msgs::msg::Controller & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const controller_msgs::msg::Controller & msg)
{
  return controller_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<controller_msgs::msg::Controller>()
{
  return "controller_msgs::msg::Controller";
}

template<>
inline const char * name<controller_msgs::msg::Controller>()
{
  return "controller_msgs/msg/Controller";
}

template<>
struct has_fixed_size<controller_msgs::msg::Controller>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_msgs::msg::Controller>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_msgs::msg::Controller>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MSGS__MSG__DETAIL__CONTROLLER__TRAITS_HPP_
