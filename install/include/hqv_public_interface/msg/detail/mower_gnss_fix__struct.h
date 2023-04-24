// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hqv_public_interface:msg/MowerGnssFix.idl
// generated code does not contain a copyright notice

#ifndef HQV_PUBLIC_INTERFACE__MSG__DETAIL__MOWER_GNSS_FIX__STRUCT_H_
#define HQV_PUBLIC_INTERFACE__MSG__DETAIL__MOWER_GNSS_FIX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IGNSS_GPSFIX_NO_FIX'.
enum
{
  hqv_public_interface__msg__MowerGnssFix__IGNSS_GPSFIX_NO_FIX = 0
};

/// Constant 'IGNSS_GPSFIX_DEAD_REACKONING'.
enum
{
  hqv_public_interface__msg__MowerGnssFix__IGNSS_GPSFIX_DEAD_REACKONING = 1
};

/// Constant 'IGNSS_GPSFIX_2D_FIX'.
enum
{
  hqv_public_interface__msg__MowerGnssFix__IGNSS_GPSFIX_2D_FIX = 2
};

/// Constant 'IGNSS_GPSFIX_3D_FIX'.
enum
{
  hqv_public_interface__msg__MowerGnssFix__IGNSS_GPSFIX_3D_FIX = 3
};

/// Constant 'IGNSS_GPSFIX_GPS_DEAD_REACKONING'.
enum
{
  hqv_public_interface__msg__MowerGnssFix__IGNSS_GPSFIX_GPS_DEAD_REACKONING = 4
};

/// Constant 'IGNSS_GPSFIX_TIME_ONLY'.
enum
{
  hqv_public_interface__msg__MowerGnssFix__IGNSS_GPSFIX_TIME_ONLY = 5
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/MowerGnssFix in the package hqv_public_interface.
typedef struct hqv_public_interface__msg__MowerGnssFix
{
  std_msgs__msg__Header header;
  uint8_t status;
} hqv_public_interface__msg__MowerGnssFix;

// Struct for a sequence of hqv_public_interface__msg__MowerGnssFix.
typedef struct hqv_public_interface__msg__MowerGnssFix__Sequence
{
  hqv_public_interface__msg__MowerGnssFix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hqv_public_interface__msg__MowerGnssFix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HQV_PUBLIC_INTERFACE__MSG__DETAIL__MOWER_GNSS_FIX__STRUCT_H_