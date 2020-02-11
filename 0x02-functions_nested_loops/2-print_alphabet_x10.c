#include "holberton.h"

/**
 * print_alphabet_x10 - repeats the print 10 times.
 *
 * Return: nothing.
 */



void print_alphabet_x10(void)
{
	int a;
	int i;

	for (i = 0; i < 10; i++)
	{

		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
