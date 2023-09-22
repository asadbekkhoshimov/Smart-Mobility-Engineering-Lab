#!/bin/bash

# Create and run a publisher and subscriber node using Python

# Step 1: Source your ROS 2 installation
source /path/to/your/ros2/install/setup.bash  # Replace with the actual path to your ROS 2 setup.bash

# Step 2: Navigate to your ROS 2 workspace
cd ~/ros2_ws  # Replace with your ROS 2 workspace directory

# Step 3: Create a ROS 2 package
ros2 pkg create --build-type ament_python py_pubsub

# Step 4: Navigate into the Python package directory
cd src/py_pubsub/py_pubsub

# Step 5: Download the publisher code
wget https://raw.githubusercontent.com/ros2/examples/humble/rclpy/topics/minimal_publisher/examples_rclpy_minimal_publisher/publisher_member_function.py

# Step 6: Download the subscriber code
wget https://raw.githubusercontent.com/ros2/examples/humble/rclpy/topics/minimal_subscriber/examples_rclpy_minimal_subscriber/subscriber_member_function.py

# Step 7: Open the publisher code in a text editor and make any necessary adjustments
# You may not need to make any changes if the code is up-to-date

# Step 8: Open the subscriber code in a text editor and make any necessary adjustments
# You may not need to make any changes if the code is up-to-date

# Step 9: Navigate one level back to the py_pubsub package directory
cd ..

# Step 10: Edit package.xml to add dependencies (rclpy and std_msgs)
sed -i '/ament_python/d' package.xml  # Remove existing ament_python line
echo '<exec_depend>rclpy</exec_depend>' >> package.xml
echo '<exec_depend>std_msgs</exec_depend>' >> package.xml

# Step 11: Open setup.py and add entry points for the publisher and subscriber nodes
# Add the following lines within the console_scripts brackets of the entry_points field:
# 'talker = py_pubsub.publisher_member_function:main',
# 'listener = py_pubsub.subscriber_member_function:main',
# Save the file

# Step 12: Check setup.cfg to ensure it's correctly populated
# The contents of the setup.cfg file should be correctly populated automatically

# Step 13: Build your ROS 2 package
colcon build --packages-select py_pubsub

# Step 14: Source your workspace setup.bash
source install/setup.bash

# Step 15: Run the publisher node
ros2 run py_pubsub talker

# Step 16: Open a new terminal and source the workspace setup.bash
# Step 17: Run the subscriber node
# Uncomment the next line if you want to run the subscriber in a new terminal
# gnome-terminal -- bash -c "source install/setup.bash; ros2 run py_pubsub listener"

# Step 18: You can use Ctrl+C to stop the nodes when you're done
