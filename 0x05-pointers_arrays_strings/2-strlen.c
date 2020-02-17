#include "holberton.h"
#include <string.h>
/**
 * _strlen - length of one string
 * @s: length of string.
 * Return: return an integer called count.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
