#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: point of string
 * @accept: accept the string
 * Return: conc with two strings
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; i[s]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == i[s])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
