#include "holberton.h"

/**
 * reverse_array - string
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: conc with two strings
 */

void reverse_array(int *a, int n)
{
	int i;
	int aux;

	n = n - 1;

	for (i = 0; i <= n; i++)
	{
		aux = a[i];
		a[i] = a[n];
		a[n] = aux;
		n--;
	}
}
