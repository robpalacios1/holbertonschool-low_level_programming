#include "holberton.h"

/**
 * _strspn - get length of a prefix substring.
 * @s: point of string
 * @accept: accept the string
 * Return: conc with two strings
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] ; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (i);
}
