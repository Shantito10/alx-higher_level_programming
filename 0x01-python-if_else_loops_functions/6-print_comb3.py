#!/usr/bin/python3
for i in range(0, 9):
    for y in range(i + 1, 10):
        if i is not 8:
            print("{}{},".format(i, y), end='')
        else:
            print("{}{}".format(i, y))
