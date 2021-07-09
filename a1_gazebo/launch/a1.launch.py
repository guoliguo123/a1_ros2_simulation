#!/usr/bin/env python

# Copyright 1996-2020 Cyberbotics Ltd.
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
import xacro 
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import ExecuteProcess, DeclareLaunchArgument
from launch.actions import IncludeLaunchDescription
from launch_ros.actions import Node
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    para_dir = os.path.join(get_package_share_directory('a1_gazebo'), 'config', 'a1_gazebo.yaml')
    #rviz_config_dir = os.path.join(get_package_share_directory('a1_description'), 'launch', 'check_joint.rviz')
    #world = os.path.join(get_package_share_directory('nav2_bringup'), 'worlds', 'waffle.model')
    print("----1------")
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    urdf_file_name = 'urdf/a1.urdf.xml'
    urdf = os.path.join(
        get_package_share_directory('a1_description'),
        urdf_file_name)
    print("---2-----")
    with open(urdf, 'r') as infp:
        robot_desc = infp.read()
    print("----3----")
    
    xacro_path = os.path.join(get_package_share_directory('a1_description'))
    xacro_file = os.path.join(xacro_path, 'xacro', 'robot.xacro')
    print(xacro_file)
    #doc = xacro.parse(open(xacro_file))
    #xacro.process_doc(doc)
    #params = {'robot_description':doc.toxml()}

    spawn_mobot = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        name='spawn_entity',
        #node_namespace=namespace_,
        output='screen',
        #emulate_tty=True,
        arguments=['-entity',
                   'mobot',
                   '-x', '3.5', '-y', '1.0', '-z', '0.1',
                   '-file', urdf
                   ]
    )

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'),
        ExecuteProcess(
            cmd=['gazebo', '--verbose', urdf, '-s', 'libgazebo_ros_factory.so'],
            output='screen'),
        spawn_mobot,

    ])
