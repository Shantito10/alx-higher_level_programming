#!/usr/bin/python3
def fizzbuzz():
    for i in range(1, 101):
        if 1 % 3 and i % 5:
            print("{:d}".format(i), end=" ")
            continue
        if i % 3 == 0:
            print("Fizz", end="")
        if i % 5 == 0:
            print("Buzz", end="")
        print(" ", end='')
