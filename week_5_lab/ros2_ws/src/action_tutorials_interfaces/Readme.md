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


        

