#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - create an array.
 *@size: size of int;
 *@c:initialize array.
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;


	if (size == 0)
	{
		return (NULL);
	}

	s = (char *) malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}
	return (s);
}
