# Advanced

## Enabling Topic Statistics (C++)
This script automates enabling ROS 2 Topic Statistics for a C++ subscriber node. It creates a ROS 2 package, downloads example code, builds the package, and runs the subscriber with statistics.
Usage

    Save the script in your ROS 2 workspace.
    Make it executable: chmod +x Enabling_topic_statistics_cpp.sh.
    Run: ./Enabling_topic_statistics_cpp.sh.

Follow on-screen prompts to complete the setup.
Prerequisites

    ROS 2 installation.
    Basic ROS 2 knowledge.
    Configured ROS 2 workspace.

Notes

    Ensure your ROS 2 environment is set.
    Modify script as needed.

This shorter README provides a quick overview, usage instructions, prerequisites, and important notes for using the script to enable ROS 2 Topic Statistics for a C++ subscriber.

![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/0366c9e7-7d4f-4fe3-b8ad-fb85dc2da93f)

## Enabling ROS 2 Topic Statistics (C++)

This script automates enabling ROS 2 Topic Statistics for a C++ subscriber node. It creates a ROS 2 package, downloads example code, builds the package, and runs the subscriber with statistics.

Usage:

    Save the script in your ROS 2 workspace.
    Make it executable: chmod +x Enabling_topic_statistics_cpp.sh.
    Run: ./Enabling_topic_statistics_cpp.sh.

Follow on-screen prompts to complete the setup.

Prerequisites:

    ROS 2 installation.
    Basic ROS 2 knowledge.
    Configured ROS 2 workspace.

Notes:

    Ensure your ROS 2 environment is set.
    Modify the script as needed.

![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/3e4082c8-aa7d-48a4-a373-696796a41ced)

![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/b782a3b8-8c8f-41be-af57-f509cc812b6e)

## Implementing a custom memory allocator

**Description:**

This shell script automates the process of setting up a ROS 2 workspace, initializing the ROS 2 core, creating a custom workspace directory, building the ROS 2 workspace, and running an example C++ node with your custom allocator.

**Usage:**

1. Execute the script in your terminal.

**Prerequisites:**

- ROS 2 installation.
- Basic understanding of ROS 2.
- Configured ROS 2 workspace.

**Instructions:**

1. The script initiates the ROS 2 core in a new terminal.
2. After a brief pause to allow the ROS 2 core to start, it creates a custom workspace directory in your home directory.
3. The script initializes a ROS 2 workspace and sets the ROS 2 distribution (you can customize this).
4. It proceeds to build the ROS 2 workspace using the specified distribution.
5. A new terminal is launched for running an example C++ node with your custom allocator.
6. Optionally, you can enable the intra-process pipeline by uncommenting the relevant lines.
7. A wait period ensures the example runs effectively.
8. Finally, the ROS 2 core is terminated using the `pkill` command.

This script simplifies the setup of your ROS 2 workspace and allows for quick testing of ROS 2 functionality.

![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/d17a73b2-fb13-4f18-978b-fcd7980c801e)


## Recording a bag from a node (C++)
ChatGPT

This script automates the process of creating a ROS 2 package that records data from a topic to a bag file. It also includes the creation of a C++ node to achieve this. After building the package, it runs the C++ node to record data from a specific topic. Additionally, it opens separate terminal windows for running various ROS 2 nodes and playing back the recorded bag file.

Usage:

    Save the script in your ROS 2 workspace.
    Make it executable: chmod +x create_ros2_bag_recorder.sh.
    Run: ./create_ros2_bag_recorder.sh.

Follow the on-screen prompts to complete the setup.

Prerequisites:

    ROS 2 installation.
    Basic ROS 2 knowledge.
    Configured ROS 2 workspace.

Notes:

    Ensure your ROS 2 environment is set.
    Modify the script as needed to adapt it to your specific requirements.
![image](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/2bfcec97-4c02-4e0c-8d3c-614fad721942)

