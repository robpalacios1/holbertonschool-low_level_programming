#include "holberton.h"
#include <stdio.h>
/**
 * _puts - length of one string
 * @str: string.
 */
void _puts(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	{
		_putchar(str[string]);
	}
	_putchar('\n');
}
