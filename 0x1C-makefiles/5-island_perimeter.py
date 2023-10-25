#!/usr/bin/python3
"""Defines the island_perimeter"""

def island_perimeter(grid):
    """
    the function returns the perimeter of the island described is grid.
        grid representations:
            0: represents a water zone
            1: represents a land zone
        Args:
                grid(list: list of list integers representing the island.)
    """
        
    perim = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                """the cell contributes 4 perim"""
                perim += 4
                """check if it's land"""
                if (i > 0 and grid[i - 1][j] == 1):
                    """minus 2 for shared edges"""
                    perim -= 2
                if (j > 0 and grid[i][j - 1] == 1):
                    """minus 2 for shared edges"""
                    perim -= 2
    return perim
