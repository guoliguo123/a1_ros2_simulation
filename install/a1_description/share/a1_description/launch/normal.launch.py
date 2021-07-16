import launch
from launch.substitutions import Command, LaunchConfiguration
import launch_ros
import os
 
 
def generate_launch_description():
    pkg_share = launch_ros.substitutions.FindPackageShare(package='a1_description').find('a1_description')
    default_model_path = os.path.join(pkg_share, 'xacro/robot.xacro')
    default_rviz_config_path = os.path.join(pkg_share, 'rviz/nav2_default_view.rviz')
 
    robot_state_publisher_node = launch_ros.actions.Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': Command(['xacro ',default_model_path, ' DEBUG:=False'])}]
    )
    joint_state_publisher_node = launch_ros.actions.Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        #condition=launch.conditions.UnlessCondition(LaunchConfiguration('gui'))
    )
    #joint_state_publisher_gui_node = launch_ros.actions.Node(
    #    package='joint_state_publisher_gui',
    #    executable='joint_state_publisher_gui',
    #    name='joint_state_publisher_gui',
    #    condition=launch.conditions.IfCondition(LaunchConfiguration('gui'))
    #)
    rviz_node = launch_ros.actions.Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', default_rviz_config_path],
    )
 
    return launch.LaunchDescription([
        #launch.actions.DeclareLaunchArgument(name='DEBUG', default_value='False',
        #                                     description='Flag to enable joint_state_publisher_gui'),
        #launch.actions.DeclareLaunchArgument(name='gui', default_value='True',
        #                                     description='Absolute path to robot urdf file'),
        #launch.actions.DeclareLaunchArgument(name='rvizconfig', default_value=default_rviz_config_path,
         #                                    description='Absolute path to rviz config file'),
        joint_state_publisher_node,
        #joint_state_publisher_gui_node,
        robot_state_publisher_node,
        rviz_node
    ])
