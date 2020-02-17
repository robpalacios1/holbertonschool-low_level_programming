#include "holberton.h"
/**
 * swap_int - swap order between integers
 * @a: The character to print.
 * @b: The character to print.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
