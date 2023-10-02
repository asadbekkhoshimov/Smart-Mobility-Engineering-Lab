# Intermediate

## Manage dependencies
    Check if rosdep is installed:
        Verifies if rosdep is installed on the system.

    Initialize rosdep (if not already initialized):
        Initializes rosdep if not done before.

    Update rosdep:
        Updates the rosdep database with the latest information.

    Define the workspace path:
        Sets the workspace path where ROS packages are located.

    Install dependencies for packages in the workspace:
        Installs dependencies for packages in the specified workspace.

    Check if the installation was successful:
        Verifies if dependency installation was successful.

    End of script:
        Marks the end of the shell script.
![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/522b7062-7fcd-49ac-aed6-62b19227984d)

## create_action.sh

    Creating the action definition file:
        Creates the action definition file Fibonacci.action within the action directory of the action_tutorials_interfaces package.
        The action definition specifies the request, result, and feedback messages for the Fibonacci action.

    Modifying CMakeLists.txt:
        Updates the CMakeLists.txt file of the action_tutorials_interfaces package.
        Adds code to find and generate the action interface using rosidl_default_generators and the Fibonacci.action file.

    Modifying package.xml:
        Uses rosdep to update the package's dependencies and install any required dependencies based on the updated package.xml file.
        This step ensures that the package has the necessary dependencies to work with the newly defined action.

![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/2d78dc36-71bd-4f04-a547-e3089e3583fb)



## Writing an action server and client (C++)

    Source ROS 2 Installation:
        You need to source your ROS 2 installation to make ROS 2 commands and packages available in your terminal. Replace 'foxy' with your ROS 2 version if necessary.

    Navigate to Your ROS 2 Workspace:
        Change the current directory to your ROS 2 workspace where the action_tutorials_cpp package is located. Replace '~/ros2_ws' with the actual path to your workspace.

    Run the Fibonacci Action Server:
        Start the Fibonacci action server in the background and store its process ID (PID) in the SERVER_PID variable. This step simulates running the server.

    Run the Fibonacci Action Client:
        Run the Fibonacci action client, which will communicate with the action server.

    Wait for Action Client and Server Completion:
        Use the wait command to wait for the action server (with PID stored in SERVER_PID) to complete. This ensures that both the action server and client have finished executing.

![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/9b3dea05-f7ca-4cf0-94c0-eadd6b97f2db)


## Writing an action server and client (Python)

Running the ROS 2 Fibonacci Action Server and Client

This guide explains how to use the run_fibonacci_action.sh shell script to simplify the setup and execution of a ROS 2 Action Server and Action Client for computing the Fibonacci sequence. Follow these steps:

Step 1: Source ROS 2 Environment

    Source your ROS 2 environment. Be sure to adjust the path if necessary to match your ROS 2 installation.

source /opt/ros/foxy/setup.bash

Step 2: Create a Workspace

    Check if a ROS 2 workspace directory exists in your home directory. If not, create one.

workspace_dir=~/ros2_ws
if [ ! -d "$workspace_dir" ]; then
  mkdir -p $workspace_dir/src
fi

Step 3: Navigate to the Workspace

    Navigate to the created workspace directory.

cd $workspace_dir

Step 4: Clone Action Tutorials Repository

    Check if the action_tutorials repository from ROS 2 examples is already cloned in the workspace's src directory. If not, clone the repository.

if [ ! -d "$workspace_dir/src/action_tutorials" ]; then
  git clone https://github.com/ros2/examples $workspace_dir/src/action_tutorials
fi

Step 5: Build the Workspace

    Build the ROS 2 workspace using colcon.

colcon build

Step 6: Source the Workspace

    Source the workspace to enable the ROS 2 environment to recognize the built packages.

source $workspace_dir/install/setup.bash

Step 7: Run the Fibonacci Action Server

    Start the Fibonacci action server using ros2 run. The server calculates the Fibonacci sequence.

ros2 run action_tutorials fibonacci_action_server &

Step 8: Sleep for Initialization

    Pause for 2 seconds to allow the action server to initialize.


sleep 2

Step 9: Run the Fibonacci Action Client

    Run the Fibonacci action client, which sends a goal request to the server and receives the computed sequence.


ros2 run action_tutorials fibonacci_action_client

![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/7716b801-1158-48a0-95d6-b4a97f67b8e8)


## Composing Non-Node Derived Components
This README provides step-by-step instructions for using the provided shell script, run_composition_demos.sh, to run ROS 2 composition demos. These demos demonstrate how to compose multiple nodes into a single process using various techniques.
Prerequisites

Before running the composition demos, make sure you have the following prerequisites:

    ROS 2 Foxy installed on your system.
    A catkin workspace (commonly named ros2_ws) set up.

Steps

Follow these steps to run the ROS 2 composition demos:

    Save the provided shell script, run_composition_demos.sh, to your local directory.

    Make the shell script executable by running the following command in your terminal:

    bash

chmod +x run_composition_demos.sh

Execute the shell script by running:

bash

./run_composition_demos.sh

This script automates the following steps:

    Sources your ROS 2 environment to set up necessary environment variables.
    Creates a catkin workspace directory if it doesn't already exist and navigates to it.
    Clones the action tutorials repository from GitHub into the workspace (if not already cloned).
    Builds the workspace using colcon build.
    Sources the workspace to set up environment variables for the built packages.

The script will then execute a series of composition demos:

    Discover available components: This command lists all available components in the workspace using ros2 component types.

    Run-time composition using ROS services with a publisher and subscriber: Starts a component container and loads the Talker and Listener components. It shows the loaded components using ros2 component list.

    Run-time composition using ROS services with a server and client: Starts a component container and loads the Server and Client components. It shows the loaded components using ros2 component list.

    Compile-time composition using ROS services: Executes a compile-time composition demo that runs the Talker and Listener components together.

    Run-time composition using dlopen: Executes a run-time composition demo using dynamic loading of components.

    Composition using launch actions: Demonstrates composition using a launch file.

After running the demos, the script will wait for user input, and you can press Enter to exit the script.
![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/c36c39e9-73c8-4fe1-9f95-553605cf9b5d)


