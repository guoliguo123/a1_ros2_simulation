cmake_minimum_required(VERSION 3.5)
project(a1_joint_control)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(controller_interface REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(pluginlib REQUIRED)
find_package(rclcpp REQUIRED)
find_package(realtime_tools REQUIRED)
find_package(a1_msgs REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()
set(dependencies
    rclcpp
    a1_msgs
        )
include_directories(include ${ament_INCLUDE_DIRS} ${Boost_INCLUDE_DIR})
link_directories(include ${ament_LIB_DIRS} lib)

add_library(a1_joint_control SHARED
        src/a1_joint.cpp)

ament_target_dependencies(a1_joint_control ${dependencies})
target_link_libraries(a1_joint_control ${ament_LIBRARIES} unitree_joint_control_tool)
pluginlib_export_plugin_description_file(controller_interface unitree_controller_plugins.xml)
install(TARGETS a1_joint_control
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
  ARCHIVE DESTINATION lib
)
ament_package()
