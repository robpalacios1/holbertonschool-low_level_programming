#include "holberton.h"

/**
 * _strchr - located a character in a string.
 * @s: Destiny.
 * @c: Source
 * Return: conc with two strings
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i <= *s; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}
