#include <ctype.h>
#include "holberton.h"
/**
 *print_line - its print number.
 *@n: parameter int n.
 *Return: void.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
