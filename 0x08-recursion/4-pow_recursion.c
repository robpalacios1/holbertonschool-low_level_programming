#include "holberton.h"
/**
 * _pow_recursion - return the value of X raised to the power of Y.
 * @x: Parameter1.
 * @y: Parameter2.
 * Return: pow.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
