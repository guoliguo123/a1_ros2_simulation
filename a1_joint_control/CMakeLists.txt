cmake_minimum_required(VERSION 3.5)
project(a1_joint_control)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra)
endif()

find_package(ament_cmake REQUIRED)
find_package(controller_interface REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(pluginlib REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)
find_package(realtime_tools REQUIRED)
find_package(control_toolbox REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_msgs REQUIRED)
find_package(a1_msgs REQUIRED)
link_directories(include ${ament_LIB_DIRS} lib)
add_library(a1_joint_control SHARED
  src/a1_drive_controller.cpp
        )
target_link_libraries(a1_joint_control ${ament_LIBRARIES} unitree_joint_control_tool)
target_include_directories(a1_joint_control PRIVATE include)
ament_target_dependencies(a1_joint_control
  builtin_interfaces
  controller_interface
  geometry_msgs
  hardware_interface
  nav_msgs
  pluginlib
  rclcpp
  rclcpp_lifecycle
  realtime_tools
  control_toolbox
  tf2
  tf2_msgs
  a1_msgs
)

# Causes the visibility macros to use dllexport rather than dllimport,
# which is appropriate when building the dll but not consuming it.
target_compile_definitions(a1_joint_control PRIVATE "DIFF_DRIVE_CONTROLLER_BUILDING_DLL")
# prevent pluginlib from using boost
target_compile_definitions(a1_joint_control PUBLIC "PLUGINLIB__DISABLE_BOOST_FUNCTIONS")
pluginlib_export_plugin_description_file(controller_interface a1_drive_plugin.xml)

install(DIRECTORY include/
  DESTINATION include
)

install(TARGETS a1_joint_control
  RUNTIME DESTINATION bin
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
)

if(BUILD_TESTING)
  find_package(ament_cmake_gmock REQUIRED)
  find_package(ament_lint_auto REQUIRED)
  find_package(controller_manager REQUIRED)

  ament_lint_auto_find_test_dependencies()
endif()

ament_export_dependencies(
  controller_interface
  geometry_msgs
  hardware_interface
  rclcpp
  rclcpp_lifecycle
  tf2
  tf2_msgs
  a1_msgs
)
ament_export_include_directories(
  include
)
ament_export_libraries(
  a1_joint_control
)
ament_package()
