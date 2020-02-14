#include "holberton.h"
/**
 *print_triangle - its print number.
 *@size: parameter int size
 *Return: void.
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= (size - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
