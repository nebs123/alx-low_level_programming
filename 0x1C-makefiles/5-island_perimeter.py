#!/usr/bin/python3
"""
Module to hold the function island_perimeter
"""

def island_perimeter(grid):
    """
    Function to calculate the perimeter of island in grid
    """

    tot_perim = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                start_perim = 4
                if i != 0 and grid[i - 1][j] == 1:
                    start_perim -= 1
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    start_perim -= 1
                if j != 0 and grid[i][j - 1] == 1:
                    start_perim -= 1
                if j < len(grid[i]) - 1 and grid[i][j + 1] == 1:
                    start_perim -= 1
                tot_perim += start_perim
    return tot_perim
