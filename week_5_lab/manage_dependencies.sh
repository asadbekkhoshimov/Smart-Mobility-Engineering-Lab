#!/bin/bash

# Check if rosdep is installed
if ! [ -x "$(command -v rosdep)" ]; then
  echo "Error: rosdep is not installed. Please install ROS 2 first."
  exit 1
fi

# Initialize rosdep (if not already initialized)
if [ ! -d /etc/ros/rosdep ]; then
  echo "Initializing rosdep..."
  sudo rosdep init
fi

# Update rosdep
echo "Updating rosdep..."
sudo rosdep update

# Define the workspace path
workspace_path="/path/to/your/workspace"

# Install dependencies for packages in the workspace
echo "Installing dependencies for packages in the workspace..."
rosdep install --from-paths "${workspace_path}/src" -y --ignore-src

# Check if the installation was successful
if [ $? -eq 0 ]; then
  echo "Dependencies installed successfully."
else
  echo "Error: Failed to install dependencies."
fi

# End of script
