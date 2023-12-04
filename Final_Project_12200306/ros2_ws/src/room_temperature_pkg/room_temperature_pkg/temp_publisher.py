#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from gpiozero import CPUTemperature, Device
import time

class RoomTemperaturePublisher(Node):

    def __init__(self):
        super().__init__('room_temperature_publisher')
        self.publisher_ = self.create_publisher(Float32, '/room_temp', 10)
        self.timer_ = self.create_timer(1.0, self.publish_temperature_callback)
        self.cpu_temperature_sensor = CPUTemperature()
        self.get_logger().info('Room Temperature Publisher Node is up and running.')

    def publish_temperature_callback(self):
        # Read temperature from a sensor
        ds18b20_temperature = self.read_ds18b20_temperature()

        # If not, use CPU temperatures as a fallback
        if ds18b20_temperature is None:
            ds18b20_temperature = self.cpu_temperature_sensor.temperature

        # Float32 message and the temperature
        msg = Float32()
        msg.data = ds18b20_temperature
        self.publisher_.publish(msg)

        self.get_logger().info(f'Published room temperature: {ds18b20_temperature} °C')

    def read_ds18b20_temperature(self):
        # should update the path based on DS18B20 sensor's unique ID
        ds18b20_sensor_path = '/sys/bus/w1/devices/28-011111111111/w1_slave'

        try:
            with open(ds18b20_sensor_path, 'r') as file:
                lines = file.readlines()
                # Parseing the temperature value from the output
                temperature_str = lines[1].split('=')[1]
                ds18b20_temperature = float(temperature_str) / 1000.0
                return ds18b20_temperature
        except FileNotFoundError:
            self.get_logger().warning('DS18B20 sensor not found. Using CPU temperature as a fallback.')
            return None

        # simulate external command trigger every 10 second
        if time.time() % 10 == 0:
            # Triggering
            temperature_msg = Float32()
            temperature_msg.data = 22.0
            self.publish_temperature_callback()

def main(args=None):
    rclpy.init(args=args)

    # setting up GPIO for gpiozero
    Device.pin_factory = None

    room_temp_publisher = RoomTemperaturePublisher()

    try:
        rclpy.spin(room_temp_publisher)
    except KeyboardInterrupt:
        pass

    room_temp_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
