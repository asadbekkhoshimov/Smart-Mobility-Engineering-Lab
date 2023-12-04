#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import speech_recognition as sr
import time
import threading
import click

class WeatherTalkPublisher(Node):

    def __init__(self):
        super().__init__('weather_talk_publisher')
        self.publisher_ = self.create_publisher(String, 'weather_info', 10)
        self.recognizer = sr.Recognizer()
        self.requested_city = None
        self.get_logger().info('Weather Talk Publisher Node is up and running.')

    def recognize_speech(self):
        # Recognizeing the spoken city name using Google Speech Recognition API
        with sr.Microphone() as source:
            self.recognizer.adjust_for_ambient_noise(source, duration=1)
            self.get_logger().info("Listening for city name...")
            audio = self.recognizer.listen(source)

        try:
            self.requested_city = self.recognizer.recognize_google(audio).capitalize()
            self.get_logger().info(f'Recognized city: {self.requested_city}')
        except sr.UnknownValueError:
            self.get_logger().info("Could not understand audio")
        except sr.RequestError as e:
            self.get_logger().error(f"Could not request results from Google Speech Recognition service; {e}")

    def publish_weather_info(self):
        # fetching weather information for the recognized city and publishes it
        if self.requested_city:
            city = self.requested_city
            api_key = '737fb90a05a3b414213f3f230bc9acd1' 

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

    def main_loop(self):
        # main loop that continuously listens for spoken city names and publishes weather information
        while rclpy.ok():
            self.recognize_speech()
            self.publish_weather_info()
            time.sleep(5)

@click.command()
def main():
    # Initializeing the ROS 2 node and runs the main loop of the WeatherTalkPublisher
    rclpy.init()
    weather_talk_publisher = WeatherTalkPublisher()

    try:
        weather_talk_publisher.main_loop()
    except KeyboardInterrupt:
        pass

    weather_talk_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

