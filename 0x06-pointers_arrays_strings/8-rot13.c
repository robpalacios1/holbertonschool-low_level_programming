#include "holberton.h"

/**
 * rot13 - string
 * @s: string.
 *
 * Return: conc with two strings
 */

char *rot13(char *s)
{
	int i, j;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char z[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = z[j];
			}
		}
	}
	return (s);
}
