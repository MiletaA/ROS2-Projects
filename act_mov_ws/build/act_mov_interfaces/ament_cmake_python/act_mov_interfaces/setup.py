from setuptools import find_packages
from setuptools import setup

setup(
    name='act_mov_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('act_mov_interfaces', 'act_mov_interfaces.*')),
)
