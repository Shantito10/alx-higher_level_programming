#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    if a_dictionary:
        for words in sorted(a_dictionary):
            print("{}: {}".format(words, a_dictionary.get(words)))
