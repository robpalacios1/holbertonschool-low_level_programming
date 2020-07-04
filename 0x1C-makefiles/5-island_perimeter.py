#!/usr/bin/python3
'''module perimeter'''


def island_perimeter(grid):
    '''function island_perimeter'''
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i][j + 1] == 0:
                    perimeter = perimeter + 1
                if grid[i][j - 1] == 0:
                    perimeter = perimeter + 1
                if grid[i + 1][j] == 0:
                    perimeter = perimeter + 1
                if grid[i - 1][j] == 0:
                    perimeter = perimeter + 1
    return perimeter
