#!/bin/bash

# Step 1: Source your ROS 2 installation (replace 'foxy' with your ROS 2 version)
source /opt/ros/foxy/setup.bash

# Step 2: Navigate to your ROS 2 workspace (replace '~/ros2_ws' with your workspace path)
cd ~/ros2_ws

# Step 3: Run the Fibonacci action server
ros2 run action_tutorials_cpp fibonacci_action_server &
SERVER_PID=$!
echo "Step 3: Running the Fibonacci action server (PID: $SERVER_PID)"

# Sleep for a moment to ensure the server is up and running
sleep 2

# Step 4: Run the Fibonacci action client
ros2 run action_tutorials_cpp fibonacci_action_client
echo "Step 4: Running the Fibonacci action client"

# Wait for the action client to complete
wait $SERVER_PID
echo "Action server and client execution complete."
