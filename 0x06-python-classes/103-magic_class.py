#!/usr/bin/python3
import math
"""This module contains the MagicClass"""


class MagicClass:
    """MagicClass that creates an instance of a circle."""
    def __init__(self, radius=0):
        """Initializing instance of MagicClass"""
        self.__radius = 0
        if type(radius) is not int and type(radius) is not float:
            raise TypeError('radius must be a number')
        self.__radius = radius

    def area(self):
        """Calculate area of a circle"""
        return srlf.__radius ** 2 * math.pi

    def circumference(self):
        """Calculate the circumference of a circle"""
        return 2 * math.pi * self.__radius
