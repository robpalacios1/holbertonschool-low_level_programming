#include "holberton.h"
/**
 * print_rev - print string in reverse
 * @s: String.
 * Return: return an integer called count.
 */
void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{

	}
	for (n = 0; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
