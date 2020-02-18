#include "holberton.h"
#include <string.h>
/**
 * puts2 - length of one string
 * @str: length of string.
 * Return: return an integer called count.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
