#include "holberton.h"

/**
 * flip_bits - funtion that return the number of bits
 * @m: number integer one
 * @n: number integer two
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int result = 0;
	unsigned long int aux = 0;
	unsigned long int temp = 0;

	temp = aux = n ^ m;

	for (i = 0; aux > 0; i++)
	{
		aux = aux >> 1;
	}

	while (i > 0)
	{
		i--;
		aux = temp >> i;

		if ((aux & 1) == 1)
		{
			result = result + 1;
		}
	}
	return (result);
}
