#include "holberton.h"
/**
 *get_bit - function that returns the value of a bit at given index.
 *@n: number.
 *@index: is the index.
 *
 *Return: the value of a bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int aux;

	if (index > 64)
	{
		return (-1);
	}
	aux = n >> index;
	return (aux & 1);
}
