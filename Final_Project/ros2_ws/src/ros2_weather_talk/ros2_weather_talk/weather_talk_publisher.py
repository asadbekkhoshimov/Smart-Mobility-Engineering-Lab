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
            api_key = '737fb90a05a3b414213f3f230bc9acd1'  # Replace with your OpenWeather API key

            try:
                response = requests.get(f'http://api.openweathermap.org/data/2.5/weather?q={city}&appid={api_key}&units=metric')
                if response.status_code == 200:
                    weather_data = response.json()

                    if 'main' in weather_data and 'weather' in weather_data:
                        temperature = weather_data['main']['temp']  # Already in Celsius
                        description = weather_data['weather'][0]['description']
                        humidity = weather_data['main']['humidity']

                        msg = String()
                        msg.data = f'City Name: {city}:\n      Temperature: {temperature}°C\n      Description: {description}\n      Humidity: {humidity}%'
                        self.publisher_.publish(msg)

                        self.get_logger().info(f'Published weather information for {city}')
                    else:
                        self.get_logger().error(f'Weather data not available for {city}')
                else:
                    self.get_logger().error(f'Error fetching weather data for {city}: {response.status_code}')
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
