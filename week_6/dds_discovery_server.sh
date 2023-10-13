#!/bin/bash

# Function to start the Discovery Server
start_discovery_server() {
  echo "Starting Discovery Server (ID: $1) on port $2..."
  fastdds discovery --server-id $1 --ip-address 127.0.0.1 --port $2
}

# Function to set ROS_DISCOVERY_SERVER environment variable and launch a node
launch_node() {
  export ROS_DISCOVERY_SERVER="$1"
  ros2 run demo_nodes_cpp "$2" --ros-args --remap __node:="$3"
}

# Function to generate network traffic for analysis
generate_network_traffic() {
  export FASTRTPS_DEFAULT_PROFILES_FILE="no_intraprocess_configuration.xml"
  bash network_traffic_generator.bash ~/ros2_foxy/install/local_setup.bash
  bash network_traffic_generator.bash ~/ros2_foxy/install/local_setup.bash SERVER
  python3 graph_generator.py
}

# Start the Discovery Server with ID 0 on port 11811
start_discovery_server 0 11811

# Launch the listener node connected to Discovery Server
launch_node "127.0.0.1:11811" listener listener_discovery_server

# Start another Discovery Server with ID 1 on port 11888
start_discovery_server 1 11888

# Launch the talker node connected to Discovery Server
launch_node "127.0.0.1:11811;127.0.0.1:11888" talker talker_discovery_server

# Create a new listener node (simple listener)
launch_node "" listener simple_listener

# Create a new talker node (simple talker)
launch_node "" talker simple_talker

# Use rqt_graph to visualize the nodes
rqt_graph

# Generate network traffic for analysis
generate_network_traffic

