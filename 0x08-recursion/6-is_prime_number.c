#include "holberton.h"
/**
 * Checker - Checks if the given number is prime or not.
 * @j: Iterator.
 * @i: Number given.
 *
 * Return: if the number is prime returns 1, otherwise 0.
 */
int Checker(int j, int i)
{
	if (i % j == 0)
	{
		if (j == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (Checker(j + 1, i));
}
/**
 * is_prime_number - Checks if the given number is prime or not.
 * @n: Given number.
 *
 * Return: if the number is prime returns 1, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (n > 2 ? Checker(2, n) : 1);
}
