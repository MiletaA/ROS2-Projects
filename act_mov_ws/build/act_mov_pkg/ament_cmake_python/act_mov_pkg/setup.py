from setuptools import find_packages
from setuptools import setup

setup(
    name='act_mov_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('act_mov_pkg', 'act_mov_pkg.*')),
)
