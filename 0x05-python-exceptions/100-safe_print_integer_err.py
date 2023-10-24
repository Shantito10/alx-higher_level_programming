#!/usr/bin/python3
import sys

def safe_print_integer_err(value):
    try:
        print("{:d}".format(int(value)))
        return (True)
    except ValueError:
        print("Exception: {}".format("Unknown format code 'd' for object of type 'str'"), file=sys.stderr)
        return (False)
