import pytest
import time
from std_msgs.msg import String
from ros2_weather_talk.weather_talk_publisher import WeatherTalkPublisher
import rclpy

@pytest.fixture
def publisher_node():
    rclpy.init()
    publisher_node = WeatherTalkPublisher()
    yield publisher_node
    publisher_node.destroy_node()
    rclpy.shutdown()

def test_publish_weather_info(publisher_node):
    # Waiting for the publisher to initialize
    time.sleep(2)

    # thetest message
    msg = String()
    msg.data = "TestCity"

    # Publishing the test message
    publisher_node.publisher_.publish(msg)

    # Allow time for the message to be processed
    time.sleep(2)

   
if __name__ == '__main__':
    pytest.main(['-s', __file__])
