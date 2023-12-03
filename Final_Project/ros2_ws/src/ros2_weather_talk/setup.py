from setuptools import setup

package_name = 'ros2_weather_talk'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='aaaa',
    maintainer_email='asadbekbosss@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'weather_talk_publisher = ros2_weather_talk.weather_talk_publisher:main',
            'weather_talk_subscriber = ros2_weather_talk.weather_talk_subscriber:main'
        ],
    },
)
