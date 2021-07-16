# Copyright 2021 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.substitutions import Command, FindExecutable, PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource

from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

from launch.actions import ExecuteProcess, RegisterEventHandler
from launch.event_handlers import OnProcessExit


def generate_launch_description():
    # load A1 map
    world = os.path.join(get_package_share_directory('a1_gazebo'), 'worlds', 'stairs.world')
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [
                os.path.join(get_package_share_directory("gazebo_ros"), "launch"),
                "/gazebo.launch.py",
            ]
        ),
        launch_arguments={"verbose": "true",
                          "world": world}.items(),
    )

    # Get URDF via xacro
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [
                    FindPackageShare("a1_description"),
                    "xacro",
                    "robot.xacro",
                ]
            ),
      #      " DEBUG:=false",
        ]
    )
    #print(robot_description_content)
    robot_description = {"robot_description": robot_description_content}
    #print(robot_description)
    robot_control_yaml = PathJoinSubstitution(
       [
            FindPackageShare("a1_description"),
            "config",
            "robot_control.yaml",
       ]
    )
    #controller_manager_node = Node(
    #    package="controller_manager",
    #    executable="ros2_control_node",
    #    parameters=[robot_control_yaml],
    #    output={
    #        "stdout": "screen",
    #        "stderr": "screen",
    #    },
    #)
    node_robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="screen",
        parameters=[robot_description, robot_control_yaml],
    )

    spawn_entity = Node(
        package="gazebo_ros",
        executable="spawn_entity.py",
        arguments=["-topic", "robot_description", "-entity", "a1_description", "-z", "0.6", 
                   #"-robot_namespace", "a1_gazebo"
                   ],
        output="screen",
    )
    spawn_controller = Node(
        package="controller_manager",
        executable="spawner.py",
        arguments=["joint_state_broadcaster"],
        output="screen",
    )
    #spawn_controller_1 = Node(
    #    package="controller_manager",
    #    executable="spawner.py",
    #    arguments=["FL_hip_joint"],
    #    output="screen",
    #)


    
    return LaunchDescription(
        [
     #       controller_manager_node,
            gazebo,
            node_robot_state_publisher,
            spawn_entity,
            spawn_controller,
     #       spawn_controller_1,
        ]
    )
