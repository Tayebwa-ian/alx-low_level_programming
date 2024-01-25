#!/usr/bin/python3
"""An Island Module"""


def island_perimeter(grid) -> int:
    """calculate the parameter of an island
    Arg:
        grid: a list of list of integers
    Return: perimeter of the island described in grid
    """
    parameter = 0
    grid_len = len(grid)
    n = 0
    m = 0

    # if grid length and width do not exceed 100 do this
    if grid_len <= 101 and len(grid[0]) <= 101:
        for n in range(grid_len):
            for m in range(len(grid[n])):
                if grid[n][m] == 1:
                    # if sorrounded by water on y-axis do this
                    if n in range(1, grid_len - 1):
                        if grid[n - 1][m] == 0:
                            parameter += 1
                        if grid[n + 1][m] == 0:
                            parameter += 1
                    else:
                        return 0
                    # if sorrounded by water on x-axis do this
                    if m in range(1, len(grid[n]) - 1):
                        if grid[n][m - 1] == 0:
                            parameter += 1
                        if grid[n][m + 1] == 0:
                            parameter += 1
                    else:
                        return 0

    return parameter
