#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last_dgt = number % 10
print("Last digit of", end=" ")
if last_dgt > 5:
    print("and is greater than 5")
elif last_dgt == 0:
    print("and is 0")
else:
    print("and is less than 6 and not 0")
