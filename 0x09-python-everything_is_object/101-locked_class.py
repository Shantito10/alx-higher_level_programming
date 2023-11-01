#!/usr/bin/python3
""" Low memory cost
Module defines a class LockedClass
"""


class LockedClass(object):
    """ a class LockedClass with no
    class or object attribute, that
    prevents users from dynamically
    creating new instance attrivutes,
    except if the new attribute is
    called first_name.
    """

    __slots__ = ['first_name']
