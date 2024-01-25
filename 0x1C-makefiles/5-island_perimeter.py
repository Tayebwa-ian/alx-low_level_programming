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
    if grid_len <= 100 and len(grid[0]) <= 100:
        for n in range(grid_len):
            for m in range(len(grid[n])):
                if grid[n][m] == 1:
                    if n in range(0, grid_len - 0):
                        if n == 0:
                            parameter += 1
                        elif grid[n - 1][m] == 0:
                            parameter += 1
                        if n == grid_len - 1:
                            parameter += 1
                        elif grid[n + 1][m] == 0:
                            parameter += 1

                    if m in range(0, len(grid[n])):
                        if m == 0:
                            parameter += 1
                        elif grid[n][m - 1] == 0:
                            parameter += 1
                        if m == len(grid[n]) - 1:
                            parameter += 1
                        elif grid[n][m + 1] == 0:
                            parameter += 1

    return parameter
