#!/usr/bin/python3
for i in range(0, 9):
    for y in range(i + 1, 10):
        print("{:02d}, ".format(i * 9 + y), end="")
    if i != 8:
        print("{:02d}, ".format(i * 9 + 9), end="")
    else:
        print("{:02d}".format(i * 9 + 9))
