#include "holberton.h"
/**
 *print_square - its print number.
 *@size: parameter of size of function.
 */
void print_square(int size)
{
	int i;
	int j;

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
