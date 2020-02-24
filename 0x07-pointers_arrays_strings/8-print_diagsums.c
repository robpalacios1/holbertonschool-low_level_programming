#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of two diagonals of square matrix.
 * @a: integer
 * @size: size of array.
 * Return: conc with two strings
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum_i;
	int sum_j;

	sum_i = 0;
	sum_j = 0;

	for (i = 0; i < size; i++)
	{
		sum_i = sum_i + *(a + ((size + 1) * i));
	}

	for (i = 1; i < size + 1; i++)
	{
		sum_j = sum_j + *(a + ((size - 1) * i));
	}

	printf("%i, %i\n", sum_i, sum_j);
}
