#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import time
import threading
import speech_recognition as sr

class WeatherTalkSubscriber(Node):

    def __init__(self):
        super().__init__('weather_talk_subscriber')
        self.weather_info_subscription = self.create_subscription(String, 'weather_info', self.weather_info_callback, 10)
        self.recognizer = sr.Recognizer()

    def weather_info_callback(self, msg):
        # Callback function executed upon receiving weather information
        self.get_logger().info(f'Received weather info: {msg.data}')

    def recognize_speech(self):
        # Recognizes the spoken weather request using Google Speech Recognition API
        with sr.Microphone() as source:
            self.recognizer.adjust_for_ambient_noise(source, duration=1)
            self.get_logger().info("Listening for weather request...")
            audio = self.recognizer.listen(source)

        try:
            city_name = self.recognizer.recognize_google(audio).lower()
            self.get_logger().info(f'Recognized weather request for {city_name}')

            msg = String()
            msg.data = city_name
            self.publish_weather_request(msg)
        except sr.UnknownValueError:
            self.get_logger().info("Could not understand audio")
        except sr.RequestError as e:
            self.get_logger().error(f"Could not request results from Google Speech Recognition service; {e}")

    def publish_weather_request(self, msg):
        # Publishes the recognized weather request
        self.get_logger().info(f'Publishing weather request for {msg.data}')
        self.weather_request_publisher.publish(msg)

def main(args=None):
    # Initializes the ROS 2 node and runs the main loop of the WeatherTalkSubscriber
    rclpy.init(args=args)
    weather_talk_subscriber = WeatherTalkSubscriber()

    try:
        rclpy.spin(weather_talk_subscriber)
    except KeyboardInterrupt:
        pass

    weather_talk_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()