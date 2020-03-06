#include "holberton.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers.
 *@min: firts integer number.
 *@max: last integer number.
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int i;
	int k;
	int *a;

	if (min > max)
	{
		return (NULL);
	}

	k = max - min + 1;
	a = malloc(sizeof(int) * 1);
	if (a == NULL)
	{
		return (NULL);
	}

	for(i = 0; i < k; i++, min++)
	{
		a[i] = min;
	}

	return (a);
}
