// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hqv_public_interface:msg/MapShape.idl
// generated code does not contain a copyright notice
#include "hqv_public_interface/msg/detail/map_shape__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `polygon`
#include "geometry_msgs/msg/detail/polygon__functions.h"

bool
hqv_public_interface__msg__MapShape__init(hqv_public_interface__msg__MapShape * msg)
{
  if (!msg) {
    return false;
  }
  // polygon
  if (!geometry_msgs__msg__Polygon__init(&msg->polygon)) {
    hqv_public_interface__msg__MapShape__fini(msg);
    return false;
  }
  // id
  // type
  // stroke_color
  // fill_color
  // hidden
  return true;
}

void
hqv_public_interface__msg__MapShape__fini(hqv_public_interface__msg__MapShape * msg)
{
  if (!msg) {
    return;
  }
  // polygon
  geometry_msgs__msg__Polygon__fini(&msg->polygon);
  // id
  // type
  // stroke_color
  // fill_color
  // hidden
}

hqv_public_interface__msg__MapShape *
hqv_public_interface__msg__MapShape__create()
{
  hqv_public_interface__msg__MapShape * msg = (hqv_public_interface__msg__MapShape *)malloc(sizeof(hqv_public_interface__msg__MapShape));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hqv_public_interface__msg__MapShape));
  bool success = hqv_public_interface__msg__MapShape__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hqv_public_interface__msg__MapShape__destroy(hqv_public_interface__msg__MapShape * msg)
{
  if (msg) {
    hqv_public_interface__msg__MapShape__fini(msg);
  }
  free(msg);
}


bool
hqv_public_interface__msg__MapShape__Sequence__init(hqv_public_interface__msg__MapShape__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hqv_public_interface__msg__MapShape * data = NULL;
  if (size) {
    data = (hqv_public_interface__msg__MapShape *)calloc(size, sizeof(hqv_public_interface__msg__MapShape));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hqv_public_interface__msg__MapShape__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hqv_public_interface__msg__MapShape__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hqv_public_interface__msg__MapShape__Sequence__fini(hqv_public_interface__msg__MapShape__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hqv_public_interface__msg__MapShape__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hqv_public_interface__msg__MapShape__Sequence *
hqv_public_interface__msg__MapShape__Sequence__create(size_t size)
{
  hqv_public_interface__msg__MapShape__Sequence * array = (hqv_public_interface__msg__MapShape__Sequence *)malloc(sizeof(hqv_public_interface__msg__MapShape__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hqv_public_interface__msg__MapShape__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hqv_public_interface__msg__MapShape__Sequence__destroy(hqv_public_interface__msg__MapShape__Sequence * array)
{
  if (array) {
    hqv_public_interface__msg__MapShape__Sequence__fini(array);
  }
  free(array);
}
