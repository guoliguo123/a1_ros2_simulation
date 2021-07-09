cmake_minimum_required(VERSION 3.5)
project(a1_controller)

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
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(controller_manager REQUIRED)
#find_package(genmsg REQUIRED)
find_package(joint_state_controller REQUIRED)
find_package(robot_state_publisher REQUIRED)
find_package(gazebo_ros REQUIRED)
find_package(tf2 REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(a1_msgs REQUIRED)
find_package(gazebo REQUIRED)
find_package(gazebo_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
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
      geometry_msgs gazebo_msgs sensor_msgs)
  include_directories(
     include
     ${Boost_INCLUDE_DIRS}
     ${ament_INCLUDE_DIRS}
     ${GAZEBO_INCLUDE_DIRS}
)
 
link_directories(${GAZEBO_LIBRARY_DIRS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GAZEBO_CXX_FLAGS}")
#add_library(a1_body
#    src/body.cpp
#)
 
#ament_target_dependencies(a1_body
#                ${dependencies}
#                )
find_package(rclcpp REQUIRED)
 
add_executable(unitree_move
             src/move_publisher.cpp
 )
ament_target_dependencies(unitree_move ${dependencies})
 
add_executable(unitree_servo
             src/body.cpp
             src/servo.cpp
             )

ament_target_dependencies(unitree_servo ${dependencies})
install(TARGETS
         #a1_body
         unitree_move
         unitree_servo
         DESTINATION lib/${PROJECT_NAME}
         )
 
ament_export_include_directories(include)
#ament_export_libraries(a1_body)
ament_export_dependencies(${dependencies})
ament_package()
