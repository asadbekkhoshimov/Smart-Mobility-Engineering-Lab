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

# Discover available components
echo "Discovering available components:"
ros2 component types

# Run-time composition using ROS services with a publisher and subscriber
echo "Starting component container for publisher and subscriber:"
ros2 run rclcpp_components component_container &
sleep 2

echo "Loading Talker component:"
ros2 component load /ComponentManager composition composition::Talker

echo "Loading Listener component:"
ros2 component load /ComponentManager composition composition::Listener

# Show loaded components
echo "Loaded components:"
ros2 component list

# Run-time composition using ROS services with a server and client
echo "Starting component container for server and client:"
ros2 run rclcpp_components component_container &
sleep 2

echo "Loading Server component:"
ros2 component load /ComponentManager composition composition::Server

echo "Loading Client component:"
ros2 component load /ComponentManager composition composition::Client

# Show loaded components
echo "Loaded components:"
ros2 component list

# Compile-time composition using ROS services
echo "Running compile-time composition:"
ros2 run composition manual_composition

# Run-time composition using dlopen
echo "Running run-time composition using dlopen:"
ros2 run composition dlopen_composition \
  `ros2 pkg prefix composition`/lib/libtalker_component.so \
  `ros2 pkg prefix composition`/lib/liblistener_component.so

# Composition using launch actions
echo "Running composition using launch actions:"
ros2 launch composition composition_demo.launch.py

# Wait for user input before exiting
read -p "Press Enter to exit..."
