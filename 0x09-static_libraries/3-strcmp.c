#include "holberton.h"

/**
 * _strcmp - string
 * @s1: string1
 * @s2: string2
 *
 * Return: conc with two strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
