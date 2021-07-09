# Copyright 2020 ros2_control Development Team
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
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():
    world = os.path.join(get_package_share_directory('a1_gazebo'), 'worlds', 'stairs.world')
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [PathJoinSubstitution([FindPackageShare("gazebo_ros"), "launch", "gazebo.launch.py"])]
        ),
        launch_arguments={"verbose": "true"
                          ,"world": world
                         }.items(),
    )
    # Get URDF via xacro
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [FindPackageShare("a1_description"), "xacro", "robot.xacro"]
            ),
            " ",
            "DEBUG:=False",
            " use_sim:=true",
            
        ]
    )
    robot_description = {"robot_description": robot_description_content}

    robot_control_yaml = PathJoinSubstitution(
        [
            FindPackageShare("a1_description"),
            "config",
            "robot_control.yaml",
        ]
    )
    print(robot_control_yaml)
    # start robot publish
    node_robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="screen",
        parameters=[robot_description],
    )
    remappings = [('/joint_states', '/a1_gazebo/joint_states')]
    spawn_controller = Node(
        package="controller_mananger",
        executable="spawner.py",
        arguments=["joint_state_controller", "--param-file", robot_control_yaml, "-t", "joint_state_controller/JointStateController"],
        remappings=remappings,
        output="screen",
    )

    spawn_entity = Node(package='gazebo_ros', executable='spawn_entity.py',
                        arguments=['-topic', 'robot_description',
                                   '-entity', 'a1_description'],
                        output='screen')
    controller_manager_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
    #    #name="controller_spawner",
    #    #namespace="a1_gazebo",
        parameters=[robot_description,robot_control_yaml],
    #    #parameters=["joint_state_broadcaster"],
        output={
            "stdout": "screen",
            "stderr": "screen",
        },
    )


    return LaunchDescription(
        [
            gazebo,
            node_robot_state_publisher,
            controller_manager_node,
            spawn_controller,
            spawn_entity,
        ]
    )
