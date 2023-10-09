#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    x = []
    a = iter(tuple_a)
    b = iter(tuple_b)
    for y in range(2):
        x.append(next(a, 0) + next(b, 0))
    return tuple(x)
