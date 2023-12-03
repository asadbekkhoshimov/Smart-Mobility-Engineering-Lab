#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import requests

class WeatherTalkPublisher(Node):

    def __init__(self):
        super().__init__('weather_talk_publisher')
        self.publisher_ = self.create_publisher(String, 'weather_info', 10)
        self.subscription_ = self.create_subscription(String, 'weather_request', self.weather_request_callback, 10)
        self.requested_city = None
        self.get_logger().info('Weather Talk Publisher Node is up and running.')

    def weather_request_callback(self, msg):
        self.requested_city = msg.data
        self.get_logger().info(f'Received weather request for {self.requested_city}')
        self.publish_weather_info()

    def publish_weather_info(self):
        if self.requested_city:
            city = self.requested_city
            api_key = 'YOUR_OPENWEATHER_API_KEY'  # Replace with your OpenWeather API key

            try:
                response = requests.get(f'http://api.openweathermap.org/data/2.5/weather?q={city}&appid={api_key}')
                weather_data = response.json()

                temperature = weather_data['main']['temp']
                description = weather_data['weather'][0]['description']
                humidity = weather_data['main']['humidity']

                msg = String()
                msg.data = f'Weather in {city}: Temperature: {temperature}K, Description: {description}, Humidity: {humidity}%'
                self.publisher_.publish(msg)

                self.get_logger().info(f'Published weather information for {city}')
            except Exception as e:
                self.get_logger().error(f'Error fetching weather information: {str(e)}')
            finally:
                self.requested_city = None

def main(args=None):
    rclpy.init(args=args)
    weather_talk_publisher = WeatherTalkPublisher()

    try:
        rclpy.spin(weather_talk_publisher)
    except KeyboardInterrupt:
        pass

    weather_talk_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
