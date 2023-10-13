#!/bin/bash

# Start the ROS 2 core
gnome-terminal -- bash -c "
  roscore
  sleep 2

  # Create a custom workspace directory
  workspace_dir=~/custom_ws
  mkdir -p \$workspace_dir
  cd \$workspace_dir

  # Initialize ROS 2 workspace
  colcon_workspace_dir=custom_ws
  ros2_workspace_dir=~/custom_ws/ros2_ws
  ros2_distros=(dashing eloquent foxy)
  ros2_distro=foxy

  # Create and build the ROS 2 workspace
  source /opt/ros/\$ros2_distro/setup.bash
  colcon build
  sleep 2

  # Run the main example with your custom allocator
  source \$ros2_workspace_dir/install/setup.bash
  ros2 run demo_nodes_cpp allocator_tutorial
  # Optionally, run with intra-process pipeline enabled
  # ros2 run demo_nodes_cpp allocator_tutorial intra
  sleep 5

  # Terminate the ROS 2 core
  pkill roscore
"

