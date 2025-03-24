from setuptools import setup
import os

package_name = 'usm_node'

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
            'all_cabins_subscriber = usm_node.cabins_subscriber:main',
            'all_cabins_publisher = usm_node.cabins_publisher:main',
        ],
    },
)
