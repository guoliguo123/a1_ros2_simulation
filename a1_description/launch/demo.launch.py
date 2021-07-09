from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    talker_node = Node(
        package="demo_nodes_cpp",
        executable="talker",
    )

    listener_node = Node(
        package="demo_nodes_py",
        executable="listener"
    )
    
    robot_state_publisher_node = Node(
            package="robot_state_publisher",
            executable="robot_state_publisher";
            )
    ld.add_action(talker_node)
    ld.add_action(listener_node)
    ld.add_action(robot_state_publishe_node)
    return ld
