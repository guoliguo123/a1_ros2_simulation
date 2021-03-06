import launch
from launch.substitutions import Command, LaunchConfiguration
import launch_ros
import os
 
 
def generate_launch_description():
    pkg_share = launch_ros.substitutions.FindPackageShare(package='ros2_launch').find('ros2_launch')
    default_model_path = os.path.join(pkg_share, 'urdf/a1.urdf.xml')
    default_rviz_config_path = os.path.join(pkg_share, 'launch/checkout_joint.rviz')
 
    robot_state_publisher_node = launch_ros.actions.Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': Command(['xacro ', LaunchConfiguration('model')])}]
    )
    joint_state_publisher_node = launch_ros.actions.Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        condition=launch.conditions.UnlessCondition(LaunchConfiguration('gui'))
    )
    rviz_node = launch_ros.actions.Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', LaunchConfiguration('rviz2')],
    )
 
    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(name='gui', default_value='True',
                                             description='Flag to enable joint_state_publisher_gui'),
        launch.actions.DeclareLaunchArgument(name='model', default_value=default_model_path,
                                             description='Absolute path to robot urdf file'),
        launch.actions.DeclareLaunchArgument(name='rviz2', default_value=default_rviz_config_path,
                                             description='Absolute path to rviz config file'),
        joint_state_publisher_node,
        robot_state_publisher_node,
        rviz_node
    ])
