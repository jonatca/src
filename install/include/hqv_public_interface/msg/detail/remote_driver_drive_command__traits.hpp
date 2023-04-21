// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hqv_public_interface:msg/RemoteDriverDriveCommand.idl
// generated code does not contain a copyright notice

#ifndef HQV_PUBLIC_INTERFACE__MSG__DETAIL__REMOTE_DRIVER_DRIVE_COMMAND__TRAITS_HPP_
#define HQV_PUBLIC_INTERFACE__MSG__DETAIL__REMOTE_DRIVER_DRIVE_COMMAND__TRAITS_HPP_

#include "hqv_public_interface/msg/detail/remote_driver_drive_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const hqv_public_interface::msg::RemoteDriverDriveCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering: ";
    value_to_yaml(msg.steering, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const hqv_public_interface::msg::RemoteDriverDriveCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<hqv_public_interface::msg::RemoteDriverDriveCommand>()
{
  return "hqv_public_interface::msg::RemoteDriverDriveCommand";
}

template<>
inline const char * name<hqv_public_interface::msg::RemoteDriverDriveCommand>()
{
  return "hqv_public_interface/msg/RemoteDriverDriveCommand";
}

template<>
struct has_fixed_size<hqv_public_interface::msg::RemoteDriverDriveCommand>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<hqv_public_interface::msg::RemoteDriverDriveCommand>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<hqv_public_interface::msg::RemoteDriverDriveCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HQV_PUBLIC_INTERFACE__MSG__DETAIL__REMOTE_DRIVER_DRIVE_COMMAND__TRAITS_HPP_
