#!/bin/bash

# Source your ROS 2 environment (adjust the path if necessary)
source /opt/ros/foxy/setup.bash

# Create a ROS 2 workspace directory if it doesn't exist
workspace_dir=~/ros2_ws
if [ ! -d "$workspace_dir" ]; then
  mkdir -p $workspace_dir/src
fi

# Navigate to the workspace
cd $workspace_dir

# Clone any necessary ROS 2 packages (if not already cloned)
# You may need to adjust this based on your specific requirements
# Example:
# git clone https://github.com/ros2/robot_state_publisher.git $workspace_dir/src/robot_state_publisher

# Build the workspace
colcon build

# Source the workspace
source $workspace_dir/install/setup.bash

# Launch the robot_state_publisher with your URDF file
ros2 launch robot_state_publisher robot_state_publisher.launch.py urdf_path:='<your_urdf_file.urdf>'
