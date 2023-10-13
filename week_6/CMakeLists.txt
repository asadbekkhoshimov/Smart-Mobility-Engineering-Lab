
find_package(rosbag2_cpp REQUIRED)
add_executable(simple_bag_recorder src/simple_bag_recorder.cpp)
ament_target_dependencies(simple_bag_recorder rclcpp rosbag2_cpp)
install(TARGETS simple_bag_recorder DESTINATION lib/${PROJECT_NAME})

