# Team D _ Asadbek_Khoshimov

## Video demo for Project:

[Watch the Demo](https://youtu.be/egloldHwjkE)

## Video demo for mapping using gesture recognition:

[Watch the Demo](https://youtu.be/L5KcpscZGv0)



## Overview

ROS 2 Weather Talk is a simple ROS 2 project that demonstrates a weather information system using speech recognition. The project consists of two nodes: WeatherTalkPublisher and WeatherTalkSubscriber. The publisher node listens to spoken city names and publishes weather information for the recognized city. The subscriber node listens to weather information and logs the received data. And I also made the project using speach recognition. It has also nodes. In this part I used temperature sensor, temperature sensor sense the room temperature. When the voice command is recognised it publishs the room temperature.

## Prerequisites

Before running this project, ensure that you have the following installed:

    ROS 2 Foxy or later
    Python 3
    Pip

## Build:

    colcon build
    source install/setup.bash

## Running:

    ros2 run room_temperature_pk weather_talk_publisher.py
    ros2 run room_temperature_pk weather_talk_subscriber.py

## Launch:

    source install/setup.bash
    ros2 launch your_package_name weather_talk.launch.py


    
    
