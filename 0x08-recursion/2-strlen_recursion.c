#include "holberton.h"
/**
 * _strlen_recursion - return the lenght of a string.
 * @s: String.
 * Return: value of a string.
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
