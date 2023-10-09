#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for x in matrix:
        for y in x[:-1]:
            print("{:d}".format(y), end=" ")
        if x:
            print("{:d}".format(x[-1]))
        else:
            print()
