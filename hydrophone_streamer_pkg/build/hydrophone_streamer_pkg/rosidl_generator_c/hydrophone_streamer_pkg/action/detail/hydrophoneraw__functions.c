// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hydrophone_streamer_pkg:action/Hydrophoneraw.idl
// generated code does not contain a copyright notice
#include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__init(hydrophone_streamer_pkg__action__Hydrophoneraw_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // streamseconds
  return true;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_Goal * msg)
{
  if (!msg) {
    return;
  }
  // streamseconds
}

hydrophone_streamer_pkg__action__Hydrophoneraw_Goal *
hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__create()
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_Goal * msg = (hydrophone_streamer_pkg__action__Hydrophoneraw_Goal *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_Goal));
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_Goal * msg)
{
  if (msg) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__fini(msg);
  }
  free(msg);
}


bool
hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__Sequence__init(hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hydrophone_streamer_pkg__action__Hydrophoneraw_Goal * data = NULL;
  if (size) {
    data = (hydrophone_streamer_pkg__action__Hydrophoneraw_Goal *)calloc(size, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__fini(&data[i - 1]);
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
hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__Sequence__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__fini(&array->data[i]);
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

hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__Sequence *
hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__Sequence__create(size_t size)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__Sequence * array = (hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__Sequence *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__Sequence__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__Sequence * array)
{
  if (array) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `rawdata`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
hydrophone_streamer_pkg__action__Hydrophoneraw_Result__init(hydrophone_streamer_pkg__action__Hydrophoneraw_Result * msg)
{
  if (!msg) {
    return false;
  }
  // rawdata
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->rawdata, 0)) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_Result__fini(msg);
    return false;
  }
  return true;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_Result__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_Result * msg)
{
  if (!msg) {
    return;
  }
  // rawdata
  rosidl_runtime_c__int32__Sequence__fini(&msg->rawdata);
}

hydrophone_streamer_pkg__action__Hydrophoneraw_Result *
hydrophone_streamer_pkg__action__Hydrophoneraw_Result__create()
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_Result * msg = (hydrophone_streamer_pkg__action__Hydrophoneraw_Result *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_Result));
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_Result__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_Result * msg)
{
  if (msg) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_Result__fini(msg);
  }
  free(msg);
}


bool
hydrophone_streamer_pkg__action__Hydrophoneraw_Result__Sequence__init(hydrophone_streamer_pkg__action__Hydrophoneraw_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hydrophone_streamer_pkg__action__Hydrophoneraw_Result * data = NULL;
  if (size) {
    data = (hydrophone_streamer_pkg__action__Hydrophoneraw_Result *)calloc(size, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hydrophone_streamer_pkg__action__Hydrophoneraw_Result__fini(&data[i - 1]);
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
hydrophone_streamer_pkg__action__Hydrophoneraw_Result__Sequence__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hydrophone_streamer_pkg__action__Hydrophoneraw_Result__fini(&array->data[i]);
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

hydrophone_streamer_pkg__action__Hydrophoneraw_Result__Sequence *
hydrophone_streamer_pkg__action__Hydrophoneraw_Result__Sequence__create(size_t size)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_Result__Sequence * array = (hydrophone_streamer_pkg__action__Hydrophoneraw_Result__Sequence *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_Result__Sequence__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_Result__Sequence * array)
{
  if (array) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_Result__Sequence__fini(array);
  }
  free(array);
}


bool
hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__init(hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // rawsnapshot
  return true;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // rawsnapshot
}

hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback *
hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__create()
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback * msg = (hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback));
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback * msg)
{
  if (msg) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__fini(msg);
  }
  free(msg);
}


bool
hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__Sequence__init(hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback * data = NULL;
  if (size) {
    data = (hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback *)calloc(size, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__fini(&data[i - 1]);
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
hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__Sequence__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__fini(&array->data[i]);
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

hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__Sequence *
hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__Sequence__create(size_t size)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__Sequence * array = (hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__Sequence *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__Sequence__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__Sequence * array)
{
  if (array) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__functions.h"

bool
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__init(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__init(&msg->goal)) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  hydrophone_streamer_pkg__action__Hydrophoneraw_Goal__fini(&msg->goal);
}

hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request *
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__create()
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request * msg = (hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request));
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request * msg)
{
  if (msg) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__Sequence__init(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request * data = NULL;
  if (size) {
    data = (hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request *)calloc(size, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__fini(&data[i - 1]);
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
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__Sequence__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__fini(&array->data[i]);
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

hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__Sequence *
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__Sequence__create(size_t size)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__Sequence * array = (hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__Sequence *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__Sequence__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__Sequence * array)
{
  if (array) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__init(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response *
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__create()
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response * msg = (hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response));
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response * msg)
{
  if (msg) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__Sequence__init(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response * data = NULL;
  if (size) {
    data = (hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response *)calloc(size, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__fini(&data[i - 1]);
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
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__Sequence__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__fini(&array->data[i]);
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

hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__Sequence *
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__Sequence__create(size_t size)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__Sequence * array = (hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__Sequence *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__Sequence__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__Sequence * array)
{
  if (array) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__init(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request *
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__create()
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request * msg = (hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request));
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request * msg)
{
  if (msg) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__Sequence__init(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request * data = NULL;
  if (size) {
    data = (hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request *)calloc(size, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__fini(&data[i - 1]);
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
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__Sequence__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__fini(&array->data[i]);
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

hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__Sequence *
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__Sequence__create(size_t size)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__Sequence * array = (hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__Sequence *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__Sequence__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__Sequence * array)
{
  if (array) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__functions.h"

bool
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__init(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!hydrophone_streamer_pkg__action__Hydrophoneraw_Result__init(&msg->result)) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  hydrophone_streamer_pkg__action__Hydrophoneraw_Result__fini(&msg->result);
}

hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response *
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__create()
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response * msg = (hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response));
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response * msg)
{
  if (msg) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__Sequence__init(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response * data = NULL;
  if (size) {
    data = (hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response *)calloc(size, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__fini(&data[i - 1]);
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
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__Sequence__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__fini(&array->data[i]);
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

hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__Sequence *
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__Sequence__create(size_t size)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__Sequence * array = (hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__Sequence *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__Sequence__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__Sequence * array)
{
  if (array) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "hydrophone_streamer_pkg/action/detail/hydrophoneraw__functions.h"

bool
hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__init(hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__init(&msg->feedback)) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  hydrophone_streamer_pkg__action__Hydrophoneraw_Feedback__fini(&msg->feedback);
}

hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage *
hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__create()
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage * msg = (hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage));
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage * msg)
{
  if (msg) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__Sequence__init(hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage * data = NULL;
  if (size) {
    data = (hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage *)calloc(size, sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__fini(&data[i - 1]);
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
hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__Sequence__fini(hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__fini(&array->data[i]);
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

hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__Sequence *
hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__Sequence__create(size_t size)
{
  hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__Sequence * array = (hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__Sequence *)malloc(sizeof(hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__Sequence__destroy(hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__Sequence * array)
{
  if (array) {
    hydrophone_streamer_pkg__action__Hydrophoneraw_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
