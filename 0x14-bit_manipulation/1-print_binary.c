#include "holberton.h"
/**
 *print_binary - function that prints the binary representation of a number.
 *@n: pointing to a string.
 *
 *Return: string.
 */
void print_binary(unsigned long int n)
{
	unsigned long int aux;
	int a;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	aux = n;
	a = 0;

	while ((aux >>= 1) > 0)
	{
		a++;
	}
	while (a >= 0)
	{
		if ((n >> a) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		a--;
	}
}
