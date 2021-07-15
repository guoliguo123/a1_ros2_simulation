cmake_minimum_required(VERSION 3.5)
project(a1_gazebo)

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

find_package(controller_manager REQUIRED)
#find_package(genmsg REQUIRED)
find_package(joint_state_controller REQUIRED)
find_package(robot_state_publisher REQUIRED)
find_package(rclcpp REQUIRED)
find_package(gazebo_ros REQUIRED)
find_package(std_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(a1_msgs REQUIRED)
find_package(gazebo REQUIRED)
include_directories(
    include
    ${Boost_INCLUDE_DIR}
    ${ament_INCLUDE_DIRS}
    ${GAZEBO_INCLUDE_DIRS}
)

link_directories(${GAZEBO_LIBRARY_DIRS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GAZEBO_CXX_FLAGS}")

set(dependencies
        rclcpp
        a1_msgs
        geometry_msgs
        std_msgs
        )
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

add_library(unitreeFootContactPlugin SHARED plugin/foot_contact_plugin.cc)
ament_target_dependencies(unitreeFootContactPlugin ${dependencies})
target_link_libraries(unitreeFootContactPlugin ${ament_LIBRARIES} ${GAZEBO_LIBRARIES})

add_library(unitreeDrawForcePlugin SHARED plugin/draw_force_plugin.cc)
ament_target_dependencies(unitreeDrawForcePlugin ${dependencies})
target_link_libraries(unitreeDrawForcePlugin ${ament_LIBRARIES} ${GAZEBO_LIBRARIES})
install(TARGETS
        unitreeFootContactPlugin
        unitreeDrawForcePlugin
        DESTINATION lib/${PROJECT_NAME}
        )

install(DIRECTORY
   launch
   worlds
   DESTINATION share/${PROJECT_NAME}
)
ament_export_include_directories(include)
ament_package()
