#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import time
import threading

class WeatherTalkSubscriber(Node):

    def __init__(self):
        super().__init__('weather_talk_subscriber')
        self.weather_request_publisher = self.create_publisher(String, 'weather_request', 10)
        self.weather_info_subscription = self.create_subscription(String, 'weather_info', self.weather_info_callback, 10)
        self.cities = ['Incheon', 'Seoul', 'London', 'Tashkent']
        self.current_city_index = 0
        self.get_logger().info('Weather Talk Subscriber Node is up and running.')
        self.all_cities_published = False

        request_thread = threading.Thread(target=self.cycle_through_cities)
        request_thread.start()

    def cycle_through_cities(self):
        while rclpy.ok():
            self.get_logger().info('Listening your request...')
            time.sleep(7)

            if not self.all_cities_published:
                city_name = self.cities[self.current_city_index]
                self.publish_city_name(city_name)

                self.current_city_index += 1
                if self.current_city_index >= len(self.cities):
                    self.all_cities_published = True

            self.get_logger().info('Listening your next request...')
            time.sleep(5)

    def publish_city_name(self, city_name):
        msg = String()
        msg.data = city_name
        self.weather_request_publisher.publish(msg)
        self.get_logger().info(f'Published weather request for {city_name}')

    def weather_info_callback(self, msg):
        self.get_logger().info(f'Received weather info: {msg.data}')

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
