#include "holberton.h"

/**
 * _strchr - located a character in a string.
 * @s: Destiny.
 * @c: Source
 * Return: conc with two strings
 */

char *_strchr(char *s, char c)
{
	int s;

	for (s = 0; *s; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
}
