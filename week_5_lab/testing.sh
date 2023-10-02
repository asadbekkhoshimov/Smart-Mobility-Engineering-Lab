#!/bin/bash

# Source your ROS 2 environment (adjust the path if necessary)
source /opt/ros/foxy/setup.bash

# Navigate to your ROS 2 workspace directory (change this to your workspace path)
workspace_dir=~/ros2_ws
cd $workspace_dir

# Build your ROS 2 packages (you may need to adjust the build command)
colcon build

# Run tests for all packages in your workspace
colcon test --packages-select *

# Alternatively, you can specify individual packages to test
# Example:
# colcon test --packages-select my_package_1 my_package_2

# Check the test results
colcon test-result

# Print a message indicating the test results
if [ -f "log/test_results/$(basename $workspace_dir)/test_results.yaml" ]; then
  echo "Test results are available at: $workspace_dir/log/test_results/$(basename $workspace_dir)/test_results.yaml"
else
  echo "No test results found. Please check your test configurations."
fi
