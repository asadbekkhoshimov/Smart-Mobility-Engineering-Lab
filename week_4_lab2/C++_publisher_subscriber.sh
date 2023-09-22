#!/bin/bash

# Create and run a publisher and subscriber node using C++

# Step 1: Source your ROS 2 installation
source /path/to/your/ros2/install/setup.bash  # Replace with the actual path to your ROS 2 setup.bash

# Step 2: Navigate to your ROS 2 workspace
cd ~/ros2_ws  # Replace with your ROS 2 workspace directory

# Step 3: Create a ROS 2 package
ros2 pkg create --build-type ament_cmake cpp_pubsub

# Step 4: Download the publisher code
wget -O src/cpp_pubsub/src/publisher_member_function.cpp https://raw.githubusercontent.com/ros2/examples/humble/rclcpp/topics/minimal_publisher/member_function.cpp

# Step 5: Download the subscriber code
wget -O src/cpp_pubsub/src/subscriber_member_function.cpp https://raw.githubusercontent.com/ros2/examples/humble/rclcpp/topics/minimal_subscriber/member_function.cpp

# Step 6: Edit package.xml to add dependencies (rclcpp and std_msgs)
sed -i '/ament_cmake/d' src/cpp_pubsub/package.xml  # Remove existing ament_cmake line
echo '<depend>rclcpp</depend>' >> src/cpp_pubsub/package.xml
echo '<depend>std_msgs</depend>' >> src/cpp_pubsub/package.xml

# Step 7: Edit CMakeLists.txt to add executable targets
echo 'add_executable(talker src/publisher_member_function.cpp)' >> src/cpp_pubsub/CMakeLists.txt
echo 'ament_target_dependencies(talker rclcpp std_msgs)' >> src/cpp_pubsub/CMakeLists.txt
echo 'install(TARGETS talker DESTINATION lib/${PROJECT_NAME})' >> src/cpp_pubsub/CMakeLists.txt

echo 'add_executable(listener src/subscriber_member_function.cpp)' >> src/cpp_pubsub/CMakeLists.txt
echo 'ament_target_dependencies(listener rclcpp std_msgs)' >> src/cpp_pubsub/CMakeLists.txt
echo 'install(TARGETS listener DESTINATION lib/${PROJECT_NAME})' >> src/cpp_pubsub/CMakeLists.txt

# Step 8: Build your ROS 2 package
colcon build --packages-select cpp_pubsub

# Step 9: Source your workspace setup.bash
source install/setup.bash

# Step 10: Run the publisher node
ros2 run cpp_pubsub talker

# Step 11: Open a new terminal and source the workspace setup.bash
# Step 12: Run the subscriber node
# Uncomment the next line if you want to run the subscriber in a new terminal
# gnome-terminal -- bash -c "source install/setup.bash; ros2 run cpp_pubsub listener"

# Step 13: You can use Ctrl+C to stop the nodes when you're done
