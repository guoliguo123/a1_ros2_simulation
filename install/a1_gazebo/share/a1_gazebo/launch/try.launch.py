# Copyright 2021 Stogl Robotics Consulting UG (haftungsbeschränkt)
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
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution

from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Declare arguments
    declared_arguments = []
    declared_arguments.append(
        DeclareLaunchArgument(
            "runtime_config_package",
            default_value="a1_description",
            description='Package with the controller\'s configuration in "config" folder. \
        Usually the argument is not set, it enables use of a custom setup.',
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "earth",
            default_value="earth",
            description='gazebo picture',
        )
    )
    earth = LaunchConfiguration("earth")
    declared_arguments.append(
        DeclareLaunchArgument(
            "rname",
            default_value="a1",
            description="unitree robot type",
        )
    )
    rname = LaunchConfiguration("rname")
    declared_arguments.append(
        DeclareLaunchArgument(
            "robot_path",
            default_value="a1_description",
        )
    )
    root_path = LaunchConfiguration("root_path")
    declared_arguments.append(
        DeclareLaunchArgument(
            "dollar",
            default_value="$",
            description="aaa",
        )
    )

    declared_arguments.append(
        DeclareLaunchArgument(
            "paused",
            default_value="true",
            description="stop",
        )
    )

    declared_arguments.append(
        DeclareLaunchArgument(
            "use_sim_time",
            default_value="true",
            description="use_sim_time",
        )
    )
    use_sim_time = LaunchConfiguration("use_sim_time")
    declared_arguments.append(
        DeclareLaunchArgument(
            "gui",
            default_value="true",
            description="gui",
        )
    )
    gui = LaunchConfiguration("gui")
    declared_arguments.append(
        DeclareLaunchArgument(
            "headless",
            default_value="false",
            description="headless",
        )
    )
    headless = LaunchConfiguration("headless")
    declared_arguments.append(
        DeclareLaunchArgument(
            "debug",
            default_value="false",
            description="debug",
        )
    )
    debug = LaunchConfiguration("debug")
    declared_arguments.append(
        DeclareLaunchArgument(
            "user_debug",
            default_value="false",
            description="user_debug",
        )
    )
    user_debug = LaunchConfiguration("user_debug")
    
    declared_arguments.append(
        DeclareLaunchArgument(
            "a1_description",
            default_value="a1_description",
            description="",
        )
    )

    a1_description = LaunchConfiguration("a1_description")
    declared_arguments.append(
        DeclareLaunchArgument(
            "controllers_file",
            default_value="robot_control.yaml",
            description="YAML file with the controllers configuration.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "description_file",
            default_value="a1.urdf.xml",
            description="URDF/XACRO description file with the robot.",
        )
    )
    controllers_file = LaunchConfiguration("controllers_file")
    description_file = LaunchConfiguration("description_file")
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [FindPackageShare(a1_description), "urdf", description_file]
            ),
            " ",
            "rname:=",
            rname,
            " ",
            "use_sim_time:=",
            use_sim_time,
            " ",
            "earth:=",
            earth,
            " ",
            "gui:=",
            gui,
            " ",
            "headless:=",
            headless,
        ]
    )

    robot_description = {"robot_description": robot_description_content}
    runtime_config_package = LaunchConfiguration("runtime_config_package")
    robot_controllers = PathJoinSubstitution(
        [
            FindPackageShare(runtime_config_package),
            "config",
            controllers_file,
        ]
    )   
    urdf = os.path.join(
          get_package_share_directory('a1_description'),
          'urdf/a1.urdf.xml')
    gazebo_ros_start = Node(
        package="gazebo_ros",
        executable="spawn_entity.py",
        name="spawn_entity",
        output="screen",
        arguments=['-entity',
                     'mobot',
                     '-x', '3.5', '-y', '1.0', '-z', '0.1',
                     '-file',urdf
                     ],
    )
    control_node = Node(
        package="controller_manager",
        executable="spawner.py",
        name="controller_spawner",
        namespace="a1_gazebo",
        #parameters=[robot_description, robot_controllers],
        #parameters=['joint_state_controller',
        #  'FL_hip_controller', 'FL_thigh_controller', 'FL_calf_controller',
        #  'FR_hip_controller', 'FR_thigh_controller', 'FR_calf_controller',
        #  'RL_hip_controller', 'RL_thigh_controller', 'RL_calf_controller',
        #  'RR_hip_controller', 'RR_thigh_controller', 'RR_calf_controller'],
        #parameters=["joint_state_control", "--controller-manager", "/controller_manager"],
        parameters=["joint_state_controller"],
        output={
            "stdout": "screen",
            "stderr": "screen",
        },
    )

    robot_state_pub_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="both",
        parameters=[robot_description],
    )

    nodes = [
                gazebo_ros_start,
                control_node,
                robot_state_pub_node,
            ]
    return LaunchDescription(declared_arguments + nodes)




