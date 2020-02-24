#include "holberton.h"

/**
 * _memcpy - Fill the first @n bytes of the memory area pointed to by @s.
 * @dest: Destiny
 * @src: Source
 * @n: The number of bytes to be filled
 * Return: conc with two strings
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
