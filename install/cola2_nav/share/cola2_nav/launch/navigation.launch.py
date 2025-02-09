from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.substitutions import FindPackageShare
import os

def generate_launch_description():
    navigator_position_arg = DeclareLaunchArgument(
        'navigator_position',
        default_value=os.path.join(
            FindPackageShare('cola2_nav').find('cola2_nav'), 
            'config', 
            'navigator_position.yaml'
        ),
        description='Navigator_position yaml parameters'
    )

    navigator_yaml_arg = DeclareLaunchArgument(
        'navigator_path',
        default_value=os.path.join(
            FindPackageShare('cola2_nav').find('cola2_nav'), 
            'config', 
            'navigator.yaml'
        ),
        description='Navigator yaml parameters'
    )    

    navigator_node = Node(
        package='cola2_nav',
        executable='navigator_node',
        name='navigator',
        output='screen',
        parameters=[LaunchConfiguration('navigator_path')],
    )

    navigator_position_node = Node(
        package='cola2_nav',
        executable='navigator_position_node',
        name='navigator_position',
        output='screen',
        parameters=[LaunchConfiguration('navigator_position')],
    )

    navigator_surface_node = Node(
        package='cola2_nav',
        executable='navigator_surface_node',
        name='navigator_surface',
        output='screen',
        parameters=[LaunchConfiguration('navigator_path')],
    )

    return LaunchDescription([
        navigator_yaml_arg,
        navigator_position_arg,

        # Load ROS parameters of the nodes
        navigator_node,
        navigator_position_node,
        navigator_surface_node,
    ])
