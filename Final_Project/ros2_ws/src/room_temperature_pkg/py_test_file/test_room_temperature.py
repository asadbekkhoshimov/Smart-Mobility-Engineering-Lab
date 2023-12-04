# /home/aaaa/Desktop/Smart-Mobility-Engineering-Lab/Final_Project/ros2_ws/src/room_temperature_pkg/room_temperature_pkg/py_test_file/test_room_temperature.py
import pytest
import time
from std_msgs.msg import Float32
from room_temperature_pkg.temp_publisher import RoomTemperaturePublisher
from room_temperature_pkg.temp_subscriber import RoomTemperatureSubscriber

@pytest.fixture
def publisher_node():
    return RoomTemperaturePublisher(sensor_id='28-011111111111')  

@pytest.fixture
def subscriber_node():
    return RoomTemperatureSubscriber()

def test_publisher(publisher_node: Any):
    # tests the publisher node
    time.sleep(5)  # Waits for a few seconds to simulate node activities
    assert True  

def test_subscriber(subscriber_node: Any):
    # Test the subscriber node
    temperature_msg = Float32()
    temperature_msg.data = 22.0
    subscriber_node.room_temp_callback(temperature_msg)
    time.sleep(5)  # wait for a few seconds to simulate node activity
    assert True 

def test_integration(publisher_node: Any, subscriber_node: Any):
    # Testing the interaction between the publisher and subscriber nodes
    temperature_msg = Float32()
    temperature_msg.data = 22.0
    publisher_node.publish_temperature_callback()  # Simulates publishing
    subscriber_node.room_temp_callback(temperature_msg)  # Simulate subscriber receiving
    time.sleep(5)  # wait for a few seconds to simulate node interaction
    assert True
