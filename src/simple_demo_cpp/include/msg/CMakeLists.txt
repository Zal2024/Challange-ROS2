cmake_minimum_required(VERSION 3.8)
project(controller_msgs)



# Pastikan compiler pakai C++14 ke atas
if(NOT CMAKE_CXX_STANDARD)
set(CMAKE_CXX_STANDARD 14)
endif()


# Temukan dependency utama ROS2
find_package(rosidl_default_generators REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)



set(msg_files
    "msg/Controller.msg"
)
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
)



ament_export_dependencies(rosidl_default_runtime)
ament_package()
