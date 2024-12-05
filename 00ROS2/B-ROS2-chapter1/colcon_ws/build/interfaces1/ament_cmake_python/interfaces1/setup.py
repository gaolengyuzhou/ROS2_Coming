from setuptools import find_packages
from setuptools import setup

setup(
    name='interfaces1',
    version='0.0.0',
    packages=find_packages(
        include=('interfaces1', 'interfaces1.*')),
)
