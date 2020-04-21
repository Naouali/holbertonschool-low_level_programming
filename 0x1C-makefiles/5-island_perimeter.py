#!/usr/bin/python3


"""
calculate island perimeter
"""


def island_perimeter(grid):
    """
    function to calculate island perimeter
    """
    per = 0
    for i in grid:
        if 1 in i:
            per += 4
    return per
