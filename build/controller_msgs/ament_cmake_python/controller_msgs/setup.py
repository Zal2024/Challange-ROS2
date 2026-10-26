from setuptools import find_packages
from setuptools import setup

setup(
    name='controller_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('controller_msgs', 'controller_msgs.*')),
)
