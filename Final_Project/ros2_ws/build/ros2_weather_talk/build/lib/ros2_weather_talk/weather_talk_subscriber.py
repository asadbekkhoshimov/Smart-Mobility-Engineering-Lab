#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import speech_recognition as sr
import threading

class WeatherTalkSubscriber(Node):

    def __init__(self):
        super().__init__('weather_talk_subscriber')
        self.publisher_ = self.create_publisher(String, 'weather_request', 10)
        self.cities = ['Paris', 'London', 'Seoul', 'Incheon', 'Busan']
        self.get_logger().info('Weather Talk Subscriber Node is up and running.')

        # Start the continuous listening in a separate thread
        listening_thread = threading.Thread(target=self.continuous_listen)
        listening_thread.start()

    def continuous_listen(self):
        recognizer = sr.Recognizer()
        with sr.Microphone() as source:
            while rclpy.ok():
                try:
                    self.get_logger().info("Listening for city name...")
                    audio_data = recognizer.listen(source, timeout=5)
                    city_name = recognizer.recognize_google(audio_data).lower()

                    if city_name in [city.lower() for city in self.cities]:
                        self.get_logger().info(f'Detected city: {city_name}')
                        self.publish_city_name(city_name)
                    else:
                        self.get_logger().info('City not recognized or not in the list.')
                except sr.UnknownValueError:
                    self.get_logger().info("Could not understand audio")
                except sr.RequestError as e:
                    self.get_logger().error(f"Speech Recognition error; {e}")

    def publish_city_name(self, city_name):
        msg = String()
        msg.data = city_name
        self.publisher_.publish(msg)
        self.get_logger().info(f'Published weather request for {city_name}')

def main(args=None):
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
