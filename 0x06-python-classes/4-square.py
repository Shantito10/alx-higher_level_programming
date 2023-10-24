#!/usr/bin/python
""" 4-square.py
This module defines a class Square that defines a square by:(based on 3-square.py)
"""

class Square:
    """
    Class Square that defines a square
    """
    def __init__(self, size=0):
        """Initializing an instance of Square

        Args:
            size (int): The size of the Square instance. Default value is 0.
        """
        self.size = size

    @property
    def size(self):
        """
        Retrives the value size.
        """
        return self.__size

    @size.setter
    def size(self, value):
        """
        Sets the value of size.
        """
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        else:
            self.__size = value

    def area(self):
        """
        Returns the area of the square.
        """
        return self.__size ** 2
