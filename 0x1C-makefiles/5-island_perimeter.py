#!/usr/bin/python3
"""island_ perimeter module."""


def island_perimeter(grid):
    """Function that calculates the perimeter of an island on a grid."""
    i = 0
    j = 0
    p = 0
    if grid is None or type(grid) is not list or type(grid[0]) is not list:
        return 0
    l = len(grid)
    l2 = len(grid[0])
    while i < l:
        while j < l2:
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    p += 1
                if j == 0 or grid[i][j - 1] == 0:
                    p += 1
                if j == l2 - 1 or grid[i][j + 1] == 0:
                    p += 1
                if i == l - 1 or grid[i + 1][j] == 0:
                    p += 1
            j += 1
        j = 0
        i += 1
    return p
