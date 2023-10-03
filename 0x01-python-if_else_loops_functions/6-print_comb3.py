#!/usr/bin/python3
for i in range(10):
    for y in range(i + 1, 10):
        print("{:02d}, ".format(i * 10 + 10), end="")
    if i != 9:
        print("{:02d}, ".format(i * 10 + 10), end="")
    else:
        print("{:02d}".format(i * 10 + 10))
