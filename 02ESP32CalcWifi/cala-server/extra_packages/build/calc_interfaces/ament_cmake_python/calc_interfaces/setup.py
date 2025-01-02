from setuptools import find_packages
from setuptools import setup

setup(
    name='calc_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('calc_interfaces', 'calc_interfaces.*')),
)
