#!/bin/bash

# Source your ROS 2 environment (adjust the path if necessary)
source /opt/ros/foxy/setup.bash

# Create a workspace directory if it doesn't exist
workspace_dir=~/ros2_ws
if [ ! -d "$workspace_dir" ]; then
  mkdir -p $workspace_dir/src
fi

# Navigate to the workspace
cd $workspace_dir

# Clone the action tutorials repository (if not already cloned)
if [ ! -d "$workspace_dir/src/action_tutorials" ]; then
  git clone https://github.com/ros2/examples $workspace_dir/src/action_tutorials
fi

# Build the workspace
colcon build

# Source the workspace
source $workspace_dir/install/setup.bash

# Run the Fibonacci action server
ros2 run action_tutorials fibonacci_action_server &
sleep 2

# Run the Fibonacci action client
ros2 run action_tutorials fibonacci_action_client
