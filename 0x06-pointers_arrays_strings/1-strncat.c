#include "holberton.h"

/**
 * _strncat - string
 * @dest: destiny
 * @src: source
 * @n: integers
 * Return: conc with two strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
