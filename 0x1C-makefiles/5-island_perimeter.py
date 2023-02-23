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
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0
    for i in range(1, rows - 1):
        for j in range(1, cols - 1):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
