# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target msg::msg
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${msg_TARGETS}.
if(msg_TARGETS AND NOT TARGET msg::msg)
  add_library(msg::msg INTERFACE IMPORTED)
  set_target_properties(msg::msg PROPERTIES
    INTERFACE_LINK_LIBRARIES "${msg_TARGETS}")
endif()
