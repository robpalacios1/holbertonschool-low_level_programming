#include "holberton.h"

/**
 * leet - string
 * @s: string
 * Return: return s
 */

char *leet(char *s)
{
	int i;
	int j;

	char x[] = "aeotl";
	char y[] = "AEOTL";
	char z[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0' && y[j] != '\0'; j++)
		{
			if (s[i] == y[j] || s[i] == y[j])
			{
				s[i] = z[j];
			}
		}
	}
	return (s);
}
