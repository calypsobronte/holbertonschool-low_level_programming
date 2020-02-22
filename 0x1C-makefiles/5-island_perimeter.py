#!/usr/bin/python3
# 5. Island Perimeter

def island_perimeter(grid):
    """ Returns the perimeter """
    perimeter = 0
    if (len(grid) <= 100 and len(grid[0]) <= 100):
        for x in range(len(grid)): # Rows
            for y in range(len(grid[x])): # Columns
                if grid[x][y] == 1:
                    if (x - 1) == -1 or grid[x - 1][y] == 0:
                        perimeter += 1
                    elif (x + 1) == len(grid) or grid[x + 1][y] == 0:
                        perimeter += 1
                    elif (y - 1) == -1 or grid[x][y - 1] == 0:
                        perimeter += 1
                    elif (y + 1) == len(grid[0]) or grid[x][y + 1] == 0:
                        perimeter += 1
    return perimeter

