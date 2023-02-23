#!/usr/bin/python3

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in the grid.

    Args:
    - grid (list of list of integers): A rectangular grid representing the island.

    Returns:
    - perimeter (int): The perimeter of the island.

    Constraints:
    - Each element of the grid is either 0 or 1.
    - The grid is completely surrounded by water.
    - The island doesn't have "lakes".
    - The island is connected horizontally/vertically (not diagonally).
    - The width and height of the grid don't exceed 100.
    - There is exactly one island in the grid.
    """
    rows, cols = len(grid), len(grid[0])
    perimeter = 0
    
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # check top side
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                
                # check bottom side
                if i == rows-1 or grid[i+1][j] == 0:
                    perimeter += 1
                    
                # check left side
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                
                # check right side
                if j == cols-1 or grid[i][j+1] == 0:
                    perimeter += 1
                    
    return perimeter

