from setuptools import setup

package_name = 'my_weather_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
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
            'weather_publisher = my_weather_pkg.weather_publisher:main',
            'weather_subscriber = my_weather_pkg.weather_subscriber:main',
         ],
    },
)
