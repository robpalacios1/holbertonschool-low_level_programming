#include "holberton.h"

/**
 * _strstr - locates a string.
 * @haystack: point of string.
 * @needle: accept the string.
 * Return: conc with two strings
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*haystack == '\0'  || *needle == '\0')
	{
		return ('\0');
	}

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[i] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (haystack + j);
			}
		}
	}
	return (0);
}
