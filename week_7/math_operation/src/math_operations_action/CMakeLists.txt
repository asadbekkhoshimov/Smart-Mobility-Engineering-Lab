cmake_minimum_required(VERSION 3.5)
project(math_operations_action)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)

# Add your package's Python executable
ament_python_install_package(${PROJECT_NAME})

# Install Python scripts
install(PROGRAMS
  scripts/math_operations_action_server.py
  scripts/math_operations_action_client.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()

# Add rosidl_generate_interfaces() command if not present
rosidl_generate_interfaces(${PROJECT_NAME}
  "action/MathOperation.action"
)
