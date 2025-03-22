from setuptools import setup

package_name = 'communication_topic'

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
    maintainer='u20',
    maintainer_email='gaolengyuzhou@outlook.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'ahrs_publisher_node = communication_topic.AHRS_pub:main',
            'ahrs_subscriber_node = communication_topic.AHRS_sub:main',
            'ahrs_data_server = communication_topic.AHRS_ser:main',
            'ahrs_data_client = communication_topic.AHRS_cli:main',
        ],
    },
)
