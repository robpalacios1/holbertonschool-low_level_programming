#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Prints a grid of integers.
 * @grid: the address of the two dimensional grid.
 * @height: height of the grid.
 *
 * Return: Two Matrix.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
