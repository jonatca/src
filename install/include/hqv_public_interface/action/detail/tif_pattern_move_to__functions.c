// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hqv_public_interface:action/TifPatternMoveTo.idl
// generated code does not contain a copyright notice
#include "hqv_public_interface/action/detail/tif_pattern_move_to__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
hqv_public_interface__action__TifPatternMoveTo_Goal__init(hqv_public_interface__action__TifPatternMoveTo_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // x
  msg->x = 0.0f;
  // y
  msg->y = 0.0f;
  // spd
  msg->spd = 0.4f;
  // line_a_x
  msg->line_a_x = 0.0f;
  // line_a_y
  msg->line_a_y = 0.0f;
  // line_b_x
  msg->line_b_x = 0.0f;
  // line_b_y
  msg->line_b_y = 0.0f;
  // path_offset
  msg->path_offset = 0.0f;
  // randomize_path_offset
  msg->randomize_path_offset = false;
  // merge_at_end
  msg->merge_at_end = false;
  // follow_path_backwards
  msg->follow_path_backwards = false;
  // finish_action
  msg->finish_action = 0;
  return true;
}

void
hqv_public_interface__action__TifPatternMoveTo_Goal__fini(hqv_public_interface__action__TifPatternMoveTo_Goal * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // spd
  // line_a_x
  // line_a_y
  // line_b_x
  // line_b_y
  // path_offset
  // randomize_path_offset
  // merge_at_end
  // follow_path_backwards
  // finish_action
}

hqv_public_interface__action__TifPatternMoveTo_Goal *
hqv_public_interface__action__TifPatternMoveTo_Goal__create()
{
  hqv_public_interface__action__TifPatternMoveTo_Goal * msg = (hqv_public_interface__action__TifPatternMoveTo_Goal *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hqv_public_interface__action__TifPatternMoveTo_Goal));
  bool success = hqv_public_interface__action__TifPatternMoveTo_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hqv_public_interface__action__TifPatternMoveTo_Goal__destroy(hqv_public_interface__action__TifPatternMoveTo_Goal * msg)
{
  if (msg) {
    hqv_public_interface__action__TifPatternMoveTo_Goal__fini(msg);
  }
  free(msg);
}


bool
hqv_public_interface__action__TifPatternMoveTo_Goal__Sequence__init(hqv_public_interface__action__TifPatternMoveTo_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hqv_public_interface__action__TifPatternMoveTo_Goal * data = NULL;
  if (size) {
    data = (hqv_public_interface__action__TifPatternMoveTo_Goal *)calloc(size, sizeof(hqv_public_interface__action__TifPatternMoveTo_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hqv_public_interface__action__TifPatternMoveTo_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hqv_public_interface__action__TifPatternMoveTo_Goal__fini(&data[i - 1]);
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
hqv_public_interface__action__TifPatternMoveTo_Goal__Sequence__fini(hqv_public_interface__action__TifPatternMoveTo_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hqv_public_interface__action__TifPatternMoveTo_Goal__fini(&array->data[i]);
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

hqv_public_interface__action__TifPatternMoveTo_Goal__Sequence *
hqv_public_interface__action__TifPatternMoveTo_Goal__Sequence__create(size_t size)
{
  hqv_public_interface__action__TifPatternMoveTo_Goal__Sequence * array = (hqv_public_interface__action__TifPatternMoveTo_Goal__Sequence *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hqv_public_interface__action__TifPatternMoveTo_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hqv_public_interface__action__TifPatternMoveTo_Goal__Sequence__destroy(hqv_public_interface__action__TifPatternMoveTo_Goal__Sequence * array)
{
  if (array) {
    hqv_public_interface__action__TifPatternMoveTo_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
hqv_public_interface__action__TifPatternMoveTo_Result__init(hqv_public_interface__action__TifPatternMoveTo_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
hqv_public_interface__action__TifPatternMoveTo_Result__fini(hqv_public_interface__action__TifPatternMoveTo_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
}

hqv_public_interface__action__TifPatternMoveTo_Result *
hqv_public_interface__action__TifPatternMoveTo_Result__create()
{
  hqv_public_interface__action__TifPatternMoveTo_Result * msg = (hqv_public_interface__action__TifPatternMoveTo_Result *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hqv_public_interface__action__TifPatternMoveTo_Result));
  bool success = hqv_public_interface__action__TifPatternMoveTo_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hqv_public_interface__action__TifPatternMoveTo_Result__destroy(hqv_public_interface__action__TifPatternMoveTo_Result * msg)
{
  if (msg) {
    hqv_public_interface__action__TifPatternMoveTo_Result__fini(msg);
  }
  free(msg);
}


bool
hqv_public_interface__action__TifPatternMoveTo_Result__Sequence__init(hqv_public_interface__action__TifPatternMoveTo_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hqv_public_interface__action__TifPatternMoveTo_Result * data = NULL;
  if (size) {
    data = (hqv_public_interface__action__TifPatternMoveTo_Result *)calloc(size, sizeof(hqv_public_interface__action__TifPatternMoveTo_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hqv_public_interface__action__TifPatternMoveTo_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hqv_public_interface__action__TifPatternMoveTo_Result__fini(&data[i - 1]);
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
hqv_public_interface__action__TifPatternMoveTo_Result__Sequence__fini(hqv_public_interface__action__TifPatternMoveTo_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hqv_public_interface__action__TifPatternMoveTo_Result__fini(&array->data[i]);
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

hqv_public_interface__action__TifPatternMoveTo_Result__Sequence *
hqv_public_interface__action__TifPatternMoveTo_Result__Sequence__create(size_t size)
{
  hqv_public_interface__action__TifPatternMoveTo_Result__Sequence * array = (hqv_public_interface__action__TifPatternMoveTo_Result__Sequence *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hqv_public_interface__action__TifPatternMoveTo_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hqv_public_interface__action__TifPatternMoveTo_Result__Sequence__destroy(hqv_public_interface__action__TifPatternMoveTo_Result__Sequence * array)
{
  if (array) {
    hqv_public_interface__action__TifPatternMoveTo_Result__Sequence__fini(array);
  }
  free(array);
}


bool
hqv_public_interface__action__TifPatternMoveTo_Feedback__init(hqv_public_interface__action__TifPatternMoveTo_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // prog
  return true;
}

void
hqv_public_interface__action__TifPatternMoveTo_Feedback__fini(hqv_public_interface__action__TifPatternMoveTo_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // prog
}

hqv_public_interface__action__TifPatternMoveTo_Feedback *
hqv_public_interface__action__TifPatternMoveTo_Feedback__create()
{
  hqv_public_interface__action__TifPatternMoveTo_Feedback * msg = (hqv_public_interface__action__TifPatternMoveTo_Feedback *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hqv_public_interface__action__TifPatternMoveTo_Feedback));
  bool success = hqv_public_interface__action__TifPatternMoveTo_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hqv_public_interface__action__TifPatternMoveTo_Feedback__destroy(hqv_public_interface__action__TifPatternMoveTo_Feedback * msg)
{
  if (msg) {
    hqv_public_interface__action__TifPatternMoveTo_Feedback__fini(msg);
  }
  free(msg);
}


bool
hqv_public_interface__action__TifPatternMoveTo_Feedback__Sequence__init(hqv_public_interface__action__TifPatternMoveTo_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hqv_public_interface__action__TifPatternMoveTo_Feedback * data = NULL;
  if (size) {
    data = (hqv_public_interface__action__TifPatternMoveTo_Feedback *)calloc(size, sizeof(hqv_public_interface__action__TifPatternMoveTo_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hqv_public_interface__action__TifPatternMoveTo_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hqv_public_interface__action__TifPatternMoveTo_Feedback__fini(&data[i - 1]);
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
hqv_public_interface__action__TifPatternMoveTo_Feedback__Sequence__fini(hqv_public_interface__action__TifPatternMoveTo_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hqv_public_interface__action__TifPatternMoveTo_Feedback__fini(&array->data[i]);
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

hqv_public_interface__action__TifPatternMoveTo_Feedback__Sequence *
hqv_public_interface__action__TifPatternMoveTo_Feedback__Sequence__create(size_t size)
{
  hqv_public_interface__action__TifPatternMoveTo_Feedback__Sequence * array = (hqv_public_interface__action__TifPatternMoveTo_Feedback__Sequence *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hqv_public_interface__action__TifPatternMoveTo_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hqv_public_interface__action__TifPatternMoveTo_Feedback__Sequence__destroy(hqv_public_interface__action__TifPatternMoveTo_Feedback__Sequence * array)
{
  if (array) {
    hqv_public_interface__action__TifPatternMoveTo_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "hqv_public_interface/action/detail/tif_pattern_move_to__functions.h"

bool
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__init(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!hqv_public_interface__action__TifPatternMoveTo_Goal__init(&msg->goal)) {
    hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__fini(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  hqv_public_interface__action__TifPatternMoveTo_Goal__fini(&msg->goal);
}

hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request *
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__create()
{
  hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request * msg = (hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request));
  bool success = hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__destroy(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request * msg)
{
  if (msg) {
    hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__Sequence__init(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request * data = NULL;
  if (size) {
    data = (hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request *)calloc(size, sizeof(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__fini(&data[i - 1]);
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
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__Sequence__fini(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__fini(&array->data[i]);
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

hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__Sequence *
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__Sequence__create(size_t size)
{
  hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__Sequence * array = (hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__Sequence *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__Sequence__destroy(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__Sequence * array)
{
  if (array) {
    hqv_public_interface__action__TifPatternMoveTo_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__init(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__fini(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response *
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__create()
{
  hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response * msg = (hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response));
  bool success = hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__destroy(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response * msg)
{
  if (msg) {
    hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__Sequence__init(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response * data = NULL;
  if (size) {
    data = (hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response *)calloc(size, sizeof(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__fini(&data[i - 1]);
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
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__Sequence__fini(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__fini(&array->data[i]);
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

hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__Sequence *
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__Sequence__create(size_t size)
{
  hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__Sequence * array = (hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__Sequence *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__Sequence__destroy(hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__Sequence * array)
{
  if (array) {
    hqv_public_interface__action__TifPatternMoveTo_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__init(hqv_public_interface__action__TifPatternMoveTo_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__fini(hqv_public_interface__action__TifPatternMoveTo_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

hqv_public_interface__action__TifPatternMoveTo_GetResult_Request *
hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__create()
{
  hqv_public_interface__action__TifPatternMoveTo_GetResult_Request * msg = (hqv_public_interface__action__TifPatternMoveTo_GetResult_Request *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hqv_public_interface__action__TifPatternMoveTo_GetResult_Request));
  bool success = hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__destroy(hqv_public_interface__action__TifPatternMoveTo_GetResult_Request * msg)
{
  if (msg) {
    hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__Sequence__init(hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hqv_public_interface__action__TifPatternMoveTo_GetResult_Request * data = NULL;
  if (size) {
    data = (hqv_public_interface__action__TifPatternMoveTo_GetResult_Request *)calloc(size, sizeof(hqv_public_interface__action__TifPatternMoveTo_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__fini(&data[i - 1]);
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
hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__Sequence__fini(hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__fini(&array->data[i]);
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

hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__Sequence *
hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__Sequence__create(size_t size)
{
  hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__Sequence * array = (hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__Sequence *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__Sequence__destroy(hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__Sequence * array)
{
  if (array) {
    hqv_public_interface__action__TifPatternMoveTo_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "hqv_public_interface/action/detail/tif_pattern_move_to__functions.h"

bool
hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__init(hqv_public_interface__action__TifPatternMoveTo_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!hqv_public_interface__action__TifPatternMoveTo_Result__init(&msg->result)) {
    hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__fini(hqv_public_interface__action__TifPatternMoveTo_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  hqv_public_interface__action__TifPatternMoveTo_Result__fini(&msg->result);
}

hqv_public_interface__action__TifPatternMoveTo_GetResult_Response *
hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__create()
{
  hqv_public_interface__action__TifPatternMoveTo_GetResult_Response * msg = (hqv_public_interface__action__TifPatternMoveTo_GetResult_Response *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hqv_public_interface__action__TifPatternMoveTo_GetResult_Response));
  bool success = hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__destroy(hqv_public_interface__action__TifPatternMoveTo_GetResult_Response * msg)
{
  if (msg) {
    hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__Sequence__init(hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hqv_public_interface__action__TifPatternMoveTo_GetResult_Response * data = NULL;
  if (size) {
    data = (hqv_public_interface__action__TifPatternMoveTo_GetResult_Response *)calloc(size, sizeof(hqv_public_interface__action__TifPatternMoveTo_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__fini(&data[i - 1]);
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
hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__Sequence__fini(hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__fini(&array->data[i]);
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

hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__Sequence *
hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__Sequence__create(size_t size)
{
  hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__Sequence * array = (hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__Sequence *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__Sequence__destroy(hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__Sequence * array)
{
  if (array) {
    hqv_public_interface__action__TifPatternMoveTo_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "hqv_public_interface/action/detail/tif_pattern_move_to__functions.h"

bool
hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__init(hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!hqv_public_interface__action__TifPatternMoveTo_Feedback__init(&msg->feedback)) {
    hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__fini(hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  hqv_public_interface__action__TifPatternMoveTo_Feedback__fini(&msg->feedback);
}

hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage *
hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__create()
{
  hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage * msg = (hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage));
  bool success = hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__destroy(hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage * msg)
{
  if (msg) {
    hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__Sequence__init(hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage * data = NULL;
  if (size) {
    data = (hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage *)calloc(size, sizeof(hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__fini(&data[i - 1]);
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
hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__Sequence__fini(hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__fini(&array->data[i]);
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

hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__Sequence *
hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__Sequence__create(size_t size)
{
  hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__Sequence * array = (hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__Sequence *)malloc(sizeof(hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__Sequence__destroy(hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__Sequence * array)
{
  if (array) {
    hqv_public_interface__action__TifPatternMoveTo_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
