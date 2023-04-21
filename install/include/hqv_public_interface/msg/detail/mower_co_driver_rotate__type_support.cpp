// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hqv_public_interface:msg/MowerCoDriverRotate.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hqv_public_interface/msg/detail/mower_co_driver_rotate__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hqv_public_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MowerCoDriverRotate_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hqv_public_interface::msg::MowerCoDriverRotate(_init);
}

void MowerCoDriverRotate_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hqv_public_interface::msg::MowerCoDriverRotate *>(message_memory);
  typed_message->~MowerCoDriverRotate();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MowerCoDriverRotate_message_member_array[1] = {
  {
    "rotateangle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hqv_public_interface::msg::MowerCoDriverRotate, rotateangle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MowerCoDriverRotate_message_members = {
  "hqv_public_interface::msg",  // message namespace
  "MowerCoDriverRotate",  // message name
  1,  // number of fields
  sizeof(hqv_public_interface::msg::MowerCoDriverRotate),
  MowerCoDriverRotate_message_member_array,  // message members
  MowerCoDriverRotate_init_function,  // function to initialize message memory (memory has to be allocated)
  MowerCoDriverRotate_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MowerCoDriverRotate_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MowerCoDriverRotate_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hqv_public_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hqv_public_interface::msg::MowerCoDriverRotate>()
{
  return &::hqv_public_interface::msg::rosidl_typesupport_introspection_cpp::MowerCoDriverRotate_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hqv_public_interface, msg, MowerCoDriverRotate)() {
  return &::hqv_public_interface::msg::rosidl_typesupport_introspection_cpp::MowerCoDriverRotate_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
