from setuptools import find_packages
from setuptools import setup

setup(
    name='service_camera_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('service_camera_pkg', 'service_camera_pkg.*')),
)
