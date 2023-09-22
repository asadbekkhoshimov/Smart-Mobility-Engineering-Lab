#!/bin/bash

# Step 1: Source ROS 2 environment (replace with your actual ROS 2 setup script)
source /path/to/your/ros2/install/setup.bash

# Step 2: Create a new directory for the workspace
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src

# Step 3: Clone the sample repo if it doesn't exist
if [ ! -d "ros_tutorials" ]; then
    git clone https://github.com/ros/ros_tutorials.git -b humble
fi

# Step 4: Resolve dependencies
rosdep install --from-paths . --ignore-src -r -y

# Step 5: Build the workspace with colcon
colcon build

# Step 6: Source the overlay
source ~/ros2_ws/install/local_setup.bash

# Step 7: Modify the overlay (optional)
# You can add any modifications here, such as changing package contents


# Print a message indicating the script has completed
echo "ROS 2 workspace creation and screenshot capture completed."

# You can add more commands or customize the script as needed
