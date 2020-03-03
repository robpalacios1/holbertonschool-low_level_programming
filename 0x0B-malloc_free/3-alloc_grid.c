#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Concatenates two strings of any size
 * @width: with of the grid
 * @height: height of the grid
 *
 * Return: the two strings concatenated
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = malloc(height * sizeof(int *));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
