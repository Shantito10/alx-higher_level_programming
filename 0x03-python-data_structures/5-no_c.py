#!/usr/bin/python3
def no_c(my_string):
    list = []
    for x in my_string:
        if x != 'c' and x != 'C':
            list.append(x)
    return ''.join(list)
