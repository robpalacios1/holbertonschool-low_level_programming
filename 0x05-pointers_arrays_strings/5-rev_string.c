#include "holberton.h"
/**
 * rev_string - print string in reverse.
 * @s: String in reverse
 * Return: return an integer.
 */
void rev_string(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (n = 0; s[n] != '\0'; n--)
		{
			_putchar(s[n]);
		}
		_putchar(s[n]);
	}
	_putchar('\n');
}
