from setuptools import find_packages
from setuptools import setup

setup(
    name='cola2_msgs',
    version='24.1.0',
    packages=find_packages(
        include=('cola2_msgs', 'cola2_msgs.*')),
)
