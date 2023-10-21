// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fleet_management:action/FleetManagement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fleet_management/action/detail/fleet_management__rosidl_typesupport_introspection_c.h"
#include "fleet_management/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fleet_management/action/detail/fleet_management__functions.h"
#include "fleet_management/action/detail/fleet_management__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void FleetManagement_Goal__rosidl_typesupport_introspection_c__FleetManagement_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fleet_management__action__FleetManagement_Goal__init(message_memory);
}

void FleetManagement_Goal__rosidl_typesupport_introspection_c__FleetManagement_Goal_fini_function(void * message_memory)
{
  fleet_management__action__FleetManagement_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FleetManagement_Goal__rosidl_typesupport_introspection_c__FleetManagement_Goal_message_member_array[1] = {
  {
    "order",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_management__action__FleetManagement_Goal, order),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FleetManagement_Goal__rosidl_typesupport_introspection_c__FleetManagement_Goal_message_members = {
  "fleet_management__action",  // message namespace
  "FleetManagement_Goal",  // message name
  1,  // number of fields
  sizeof(fleet_management__action__FleetManagement_Goal),
  FleetManagement_Goal__rosidl_typesupport_introspection_c__FleetManagement_Goal_message_member_array,  // message members
  FleetManagement_Goal__rosidl_typesupport_introspection_c__FleetManagement_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_Goal__rosidl_typesupport_introspection_c__FleetManagement_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FleetManagement_Goal__rosidl_typesupport_introspection_c__FleetManagement_Goal_message_type_support_handle = {
  0,
  &FleetManagement_Goal__rosidl_typesupport_introspection_c__FleetManagement_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fleet_management
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_Goal)() {
  if (!FleetManagement_Goal__rosidl_typesupport_introspection_c__FleetManagement_Goal_message_type_support_handle.typesupport_identifier) {
    FleetManagement_Goal__rosidl_typesupport_introspection_c__FleetManagement_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FleetManagement_Goal__rosidl_typesupport_introspection_c__FleetManagement_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "fleet_management/action/detail/fleet_management__rosidl_typesupport_introspection_c.h"
// already included above
// #include "fleet_management/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__functions.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__struct.h"


// Include directives for member types
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FleetManagement_Result__rosidl_typesupport_introspection_c__FleetManagement_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fleet_management__action__FleetManagement_Result__init(message_memory);
}

void FleetManagement_Result__rosidl_typesupport_introspection_c__FleetManagement_Result_fini_function(void * message_memory)
{
  fleet_management__action__FleetManagement_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FleetManagement_Result__rosidl_typesupport_introspection_c__FleetManagement_Result_message_member_array[1] = {
  {
    "sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_management__action__FleetManagement_Result, sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FleetManagement_Result__rosidl_typesupport_introspection_c__FleetManagement_Result_message_members = {
  "fleet_management__action",  // message namespace
  "FleetManagement_Result",  // message name
  1,  // number of fields
  sizeof(fleet_management__action__FleetManagement_Result),
  FleetManagement_Result__rosidl_typesupport_introspection_c__FleetManagement_Result_message_member_array,  // message members
  FleetManagement_Result__rosidl_typesupport_introspection_c__FleetManagement_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_Result__rosidl_typesupport_introspection_c__FleetManagement_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FleetManagement_Result__rosidl_typesupport_introspection_c__FleetManagement_Result_message_type_support_handle = {
  0,
  &FleetManagement_Result__rosidl_typesupport_introspection_c__FleetManagement_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fleet_management
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_Result)() {
  if (!FleetManagement_Result__rosidl_typesupport_introspection_c__FleetManagement_Result_message_type_support_handle.typesupport_identifier) {
    FleetManagement_Result__rosidl_typesupport_introspection_c__FleetManagement_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FleetManagement_Result__rosidl_typesupport_introspection_c__FleetManagement_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "fleet_management/action/detail/fleet_management__rosidl_typesupport_introspection_c.h"
// already included above
// #include "fleet_management/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__functions.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__struct.h"


// Include directives for member types
// Member `partial_sequence`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FleetManagement_Feedback__rosidl_typesupport_introspection_c__FleetManagement_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fleet_management__action__FleetManagement_Feedback__init(message_memory);
}

void FleetManagement_Feedback__rosidl_typesupport_introspection_c__FleetManagement_Feedback_fini_function(void * message_memory)
{
  fleet_management__action__FleetManagement_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FleetManagement_Feedback__rosidl_typesupport_introspection_c__FleetManagement_Feedback_message_member_array[1] = {
  {
    "partial_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_management__action__FleetManagement_Feedback, partial_sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FleetManagement_Feedback__rosidl_typesupport_introspection_c__FleetManagement_Feedback_message_members = {
  "fleet_management__action",  // message namespace
  "FleetManagement_Feedback",  // message name
  1,  // number of fields
  sizeof(fleet_management__action__FleetManagement_Feedback),
  FleetManagement_Feedback__rosidl_typesupport_introspection_c__FleetManagement_Feedback_message_member_array,  // message members
  FleetManagement_Feedback__rosidl_typesupport_introspection_c__FleetManagement_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_Feedback__rosidl_typesupport_introspection_c__FleetManagement_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FleetManagement_Feedback__rosidl_typesupport_introspection_c__FleetManagement_Feedback_message_type_support_handle = {
  0,
  &FleetManagement_Feedback__rosidl_typesupport_introspection_c__FleetManagement_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fleet_management
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_Feedback)() {
  if (!FleetManagement_Feedback__rosidl_typesupport_introspection_c__FleetManagement_Feedback_message_type_support_handle.typesupport_identifier) {
    FleetManagement_Feedback__rosidl_typesupport_introspection_c__FleetManagement_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FleetManagement_Feedback__rosidl_typesupport_introspection_c__FleetManagement_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "fleet_management/action/detail/fleet_management__rosidl_typesupport_introspection_c.h"
// already included above
// #include "fleet_management/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__functions.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "fleet_management/action/fleet_management.h"
// Member `goal`
// already included above
// #include "fleet_management/action/detail/fleet_management__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FleetManagement_SendGoal_Request__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fleet_management__action__FleetManagement_SendGoal_Request__init(message_memory);
}

void FleetManagement_SendGoal_Request__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Request_fini_function(void * message_memory)
{
  fleet_management__action__FleetManagement_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FleetManagement_SendGoal_Request__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_management__action__FleetManagement_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_management__action__FleetManagement_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FleetManagement_SendGoal_Request__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Request_message_members = {
  "fleet_management__action",  // message namespace
  "FleetManagement_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(fleet_management__action__FleetManagement_SendGoal_Request),
  FleetManagement_SendGoal_Request__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Request_message_member_array,  // message members
  FleetManagement_SendGoal_Request__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_SendGoal_Request__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FleetManagement_SendGoal_Request__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Request_message_type_support_handle = {
  0,
  &FleetManagement_SendGoal_Request__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fleet_management
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_SendGoal_Request)() {
  FleetManagement_SendGoal_Request__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  FleetManagement_SendGoal_Request__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_Goal)();
  if (!FleetManagement_SendGoal_Request__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    FleetManagement_SendGoal_Request__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FleetManagement_SendGoal_Request__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "fleet_management/action/detail/fleet_management__rosidl_typesupport_introspection_c.h"
// already included above
// #include "fleet_management/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__functions.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FleetManagement_SendGoal_Response__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fleet_management__action__FleetManagement_SendGoal_Response__init(message_memory);
}

void FleetManagement_SendGoal_Response__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Response_fini_function(void * message_memory)
{
  fleet_management__action__FleetManagement_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FleetManagement_SendGoal_Response__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_management__action__FleetManagement_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_management__action__FleetManagement_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FleetManagement_SendGoal_Response__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Response_message_members = {
  "fleet_management__action",  // message namespace
  "FleetManagement_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(fleet_management__action__FleetManagement_SendGoal_Response),
  FleetManagement_SendGoal_Response__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Response_message_member_array,  // message members
  FleetManagement_SendGoal_Response__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_SendGoal_Response__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FleetManagement_SendGoal_Response__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Response_message_type_support_handle = {
  0,
  &FleetManagement_SendGoal_Response__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fleet_management
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_SendGoal_Response)() {
  FleetManagement_SendGoal_Response__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!FleetManagement_SendGoal_Response__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    FleetManagement_SendGoal_Response__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FleetManagement_SendGoal_Response__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "fleet_management/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_service_members = {
  "fleet_management__action",  // service namespace
  "FleetManagement_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_service_type_support_handle = {
  0,
  &fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fleet_management
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_SendGoal)() {
  if (!fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_service_type_support_handle.typesupport_identifier) {
    fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_SendGoal_Response)()->data;
  }

  return &fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "fleet_management/action/detail/fleet_management__rosidl_typesupport_introspection_c.h"
// already included above
// #include "fleet_management/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__functions.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FleetManagement_GetResult_Request__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fleet_management__action__FleetManagement_GetResult_Request__init(message_memory);
}

void FleetManagement_GetResult_Request__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Request_fini_function(void * message_memory)
{
  fleet_management__action__FleetManagement_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FleetManagement_GetResult_Request__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_management__action__FleetManagement_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FleetManagement_GetResult_Request__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Request_message_members = {
  "fleet_management__action",  // message namespace
  "FleetManagement_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(fleet_management__action__FleetManagement_GetResult_Request),
  FleetManagement_GetResult_Request__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Request_message_member_array,  // message members
  FleetManagement_GetResult_Request__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_GetResult_Request__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FleetManagement_GetResult_Request__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Request_message_type_support_handle = {
  0,
  &FleetManagement_GetResult_Request__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fleet_management
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_GetResult_Request)() {
  FleetManagement_GetResult_Request__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!FleetManagement_GetResult_Request__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    FleetManagement_GetResult_Request__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FleetManagement_GetResult_Request__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "fleet_management/action/detail/fleet_management__rosidl_typesupport_introspection_c.h"
// already included above
// #include "fleet_management/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__functions.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "fleet_management/action/fleet_management.h"
// Member `result`
// already included above
// #include "fleet_management/action/detail/fleet_management__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FleetManagement_GetResult_Response__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fleet_management__action__FleetManagement_GetResult_Response__init(message_memory);
}

void FleetManagement_GetResult_Response__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Response_fini_function(void * message_memory)
{
  fleet_management__action__FleetManagement_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FleetManagement_GetResult_Response__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_management__action__FleetManagement_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_management__action__FleetManagement_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FleetManagement_GetResult_Response__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Response_message_members = {
  "fleet_management__action",  // message namespace
  "FleetManagement_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(fleet_management__action__FleetManagement_GetResult_Response),
  FleetManagement_GetResult_Response__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Response_message_member_array,  // message members
  FleetManagement_GetResult_Response__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_GetResult_Response__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FleetManagement_GetResult_Response__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Response_message_type_support_handle = {
  0,
  &FleetManagement_GetResult_Response__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fleet_management
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_GetResult_Response)() {
  FleetManagement_GetResult_Response__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_Result)();
  if (!FleetManagement_GetResult_Response__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    FleetManagement_GetResult_Response__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FleetManagement_GetResult_Response__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "fleet_management/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_GetResult_service_members = {
  "fleet_management__action",  // service namespace
  "FleetManagement_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_GetResult_service_type_support_handle = {
  0,
  &fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fleet_management
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_GetResult)() {
  if (!fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_GetResult_service_type_support_handle.typesupport_identifier) {
    fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_GetResult_Response)()->data;
  }

  return &fleet_management__action__detail__fleet_management__rosidl_typesupport_introspection_c__FleetManagement_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "fleet_management/action/detail/fleet_management__rosidl_typesupport_introspection_c.h"
// already included above
// #include "fleet_management/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__functions.h"
// already included above
// #include "fleet_management/action/detail/fleet_management__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "fleet_management/action/fleet_management.h"
// Member `feedback`
// already included above
// #include "fleet_management/action/detail/fleet_management__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FleetManagement_FeedbackMessage__rosidl_typesupport_introspection_c__FleetManagement_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fleet_management__action__FleetManagement_FeedbackMessage__init(message_memory);
}

void FleetManagement_FeedbackMessage__rosidl_typesupport_introspection_c__FleetManagement_FeedbackMessage_fini_function(void * message_memory)
{
  fleet_management__action__FleetManagement_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FleetManagement_FeedbackMessage__rosidl_typesupport_introspection_c__FleetManagement_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_management__action__FleetManagement_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_management__action__FleetManagement_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FleetManagement_FeedbackMessage__rosidl_typesupport_introspection_c__FleetManagement_FeedbackMessage_message_members = {
  "fleet_management__action",  // message namespace
  "FleetManagement_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(fleet_management__action__FleetManagement_FeedbackMessage),
  FleetManagement_FeedbackMessage__rosidl_typesupport_introspection_c__FleetManagement_FeedbackMessage_message_member_array,  // message members
  FleetManagement_FeedbackMessage__rosidl_typesupport_introspection_c__FleetManagement_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_FeedbackMessage__rosidl_typesupport_introspection_c__FleetManagement_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FleetManagement_FeedbackMessage__rosidl_typesupport_introspection_c__FleetManagement_FeedbackMessage_message_type_support_handle = {
  0,
  &FleetManagement_FeedbackMessage__rosidl_typesupport_introspection_c__FleetManagement_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fleet_management
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_FeedbackMessage)() {
  FleetManagement_FeedbackMessage__rosidl_typesupport_introspection_c__FleetManagement_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  FleetManagement_FeedbackMessage__rosidl_typesupport_introspection_c__FleetManagement_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_management, action, FleetManagement_Feedback)();
  if (!FleetManagement_FeedbackMessage__rosidl_typesupport_introspection_c__FleetManagement_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    FleetManagement_FeedbackMessage__rosidl_typesupport_introspection_c__FleetManagement_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FleetManagement_FeedbackMessage__rosidl_typesupport_introspection_c__FleetManagement_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
