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

![telegram-cloud-photo-size-2-5435879651596686169-x](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/82e30685-32b7-41ab-bb59-18e9a290d4b0)


## Running:

    ros2 run room_temperature_pk weather_talk_publisher.py
    ros2 run room_temperature_pk weather_talk_subscriber.py

![telegram-cloud-photo-size-2-5431504797908978816-y](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/abad5694-dd91-489e-97d3-5ee645b9c87f)

![telegram-cloud-photo-size-2-5431504797908978817-y](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/8c15f7d7-5e11-453e-95ac-d86c27b0fba8)


## Launch:

    source install/setup.bash
    ros2 launch your_package_name weather_talk.launch.py

![telegram-cloud-photo-size-2-5435879651596686170-y](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/1a6e27f5-5243-4e54-84a8-275e91b4e556)

![telegram-cloud-photo-size-2-5435879651596686171-y](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/938f3d11-e449-4c51-addc-51f3e740df3e)

![telegram-cloud-photo-size-2-5435879651596686179-y](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/b8e7fa0e-dfc2-464a-bd09-a61f580dba9d)

## ros2 topic list:

![telegram-cloud-photo-size-2-5435879651596686192-m](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/d7b90cb3-142b-4a9c-87cc-e1b078976221)

![telegram-cloud-photo-size-2-5435879651596686192-m](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/6abe1c7e-6439-4a0d-9347-0c20ff013e10)

## ros2 bag files:

![telegram-cloud-photo-size-2-5435879651596686195-y](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/2246d537-1afe-41cf-b903-ce1a3a9474ec)

## click libraries:

![telegram-cloud-photo-size-2-5435879651596686445-y](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/cc2fedb4-bf43-4b12-b3ab-737ef1f5deb0)

![telegram-cloud-photo-size-2-5435879651596686472-x](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/b67cb46e-3105-4bdc-8366-702b2d78bd36)

## py_test:

![telegram-cloud-photo-size-2-5440832573522695605-x](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/387582ec-86c2-4d49-b3b6-28d776945b98)

![telegram-cloud-photo-size-2-5435879651596686454-y](https://github.com/asadbekkhoshimov/Smart-Mobility-Engineering-Lab/assets/84382619/91103a00-34a0-4baa-bbf9-af6394af79a9)









    
    
