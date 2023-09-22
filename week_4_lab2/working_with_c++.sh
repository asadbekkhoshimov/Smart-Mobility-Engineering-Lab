#!/bin/bash

# Create a ROS 2 package for the base class
ros2 pkg create --build-type ament_cmake --dependencies pluginlib --node-name area_node --license Apache-2.0 polygon_base

# Create the base class header file
cat <<EOL > ros2_ws/src/polygon_base/include/polygon_base/regular_polygon.hpp
#ifndef POLYGON_BASE_REGULAR_POLYGON_HPP
#define POLYGON_BASE_REGULAR_POLYGON_HPP

namespace polygon_base
{
  class RegularPolygon
  {
    public:
      virtual void initialize(double side_length) = 0;
      virtual double area() = 0;
      virtual ~RegularPolygon(){}

    protected:
      RegularPolygon(){}
  };
}  // namespace polygon_base

#endif  // POLYGON_BASE_REGULAR_POLYGON_HPP
EOL

# Update the CMakeLists.txt for the base class package
cat <<EOL >> ros2_ws/src/polygon_base/CMakeLists.txt

install(
  DIRECTORY include/
  DESTINATION include
)

ament_export_include_directories(
  include
)
EOL

# Create a ROS 2 package for the plugins
ros2 pkg create --build-type ament_cmake --dependencies polygon_base pluginlib --library-name polygon_plugins --license Apache-2.0 polygon_plugins

# Create the source code for the plugins
cat <<EOL > ros2_ws/src/polygon_plugins/src/polygon_plugins.cpp
#include <polygon_base/regular_polygon.hpp>
#include <cmath>

namespace polygon_plugins
{
  class Square : public polygon_base::RegularPolygon
  {
    public:
      void initialize(double side_length) override
      {
        side_length_ = side_length;
      }

      double area() override
      {
        return side_length_ * side_length_;
      }

    protected:
      double side_length_;
  };

  class Triangle : public polygon_base::RegularPolygon
  {
    public:
      void initialize(double side_length) override
      {
        side_length_ = side_length;
      }

      double area() override
      {
        return 0.5 * side_length_ * getHeight();
      }

      double getHeight()
      {
        return sqrt((side_length_ * side_length_) - ((side_length_ / 2) * (side_length_ / 2)));
      }

    protected:
      double side_length_;
  };
}

#include <pluginlib/class_list_macros.hpp>

PLUGINLIB_EXPORT_CLASS(polygon_plugins::Square, polygon_base::RegularPolygon)
PLUGINLIB_EXPORT_CLASS(polygon_plugins::Triangle, polygon_base::RegularPolygon)
EOL

# Create the plugins.xml file
cat <<EOL > ros2_ws/src/polygon_plugins/plugins.xml
<library path="polygon_plugins">
  <class type="polygon_plugins::Square" base_class_type="polygon_base::RegularPolygon">
    <description>This is a square plugin.</description>
  </class>
  <class type="polygon_plugins::Triangle" base_class_type="polygon_base::RegularPolygon">
    <description>This is a triangle plugin.</description>
  </class>
</library>
EOL

# Update the CMakeLists.txt for the plugins package
cat <<EOL >> ros2_ws/src/polygon_plugins/CMakeLists.txt

pluginlib_export_plugin_description_file(polygon_base plugins.xml)
EOL

# Create a ROS 2 package for the test node
ros2 pkg create --build-type ament_cmake --dependencies polygon_base pluginlib pluginlib_tutorials rclcpp --node-name test_node --license Apache-2.0 test_polygon

# Create the source code for the test node
cat <<EOL > ros2_ws/src/test_polygon/src/test_node.cpp
#include <pluginlib/class_loader.hpp>
#include <polygon_base/regular_polygon.hpp>
#include <rclcpp/rclcpp.hpp>

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);

  pluginlib::ClassLoader<polygon_base::RegularPolygon> poly_loader("polygon_base", "polygon_base::RegularPolygon");

  try
  {
    std::shared_ptr<polygon_base::RegularPolygon> triangle = poly_loader.createSharedInstance("polygon_plugins::Triangle");
    triangle->initialize(10.0);

    std::shared_ptr<polygon_base::RegularPolygon> square = poly_loader.createSharedInstance("polygon_plugins::Square");
    square->initialize(10.0);

    printf("Triangle area: %.2f\n", triangle->area());
    printf("Square area: %.2f\n", square->area());
  }
  catch(pluginlib::PluginlibException& ex)
  {
    printf("The plugin failed to load for some reason. Error: %s\n", ex.what());
  }

  rclcpp::shutdown();

  return 0;
}
EOL

# Update the CMakeLists.txt for the test node package
cat <<EOL >> ros2_ws/src/test_polygon/CMakeLists.txt

install(
  DIRECTORY include/
  DESTINATION include
)

ament_export_include_directories(
  include
)
EOL

# Build all packages
colcon build --packages-select polygon_base polygon_plugins test_polygon

# Source the setup files
source install/setup.bash

# Run the test node
ros2 run test_polygon test_node
