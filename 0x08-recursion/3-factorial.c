#include "holberton.h"
/**
 * factorial - return the factorial of a given number.
 * @n: String.
 * Return: factorial.
 */
int factorial(int n)
{
	if (n < 2 && n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (0);
	}
}
