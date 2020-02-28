#include "holberton.h"
/**
 * comp - Travels in every content for x and y, then returns 1/0.
 * @x1: string 1.
 * @y2: string 2
 * Return: return 1 if comparing is true.
 */
int comp(char *x1, char *y2)
{
	while (*x1 && *y2)
	{
		if (*x1 != *y2)
			return (0);
		x1++;
		y2++;
	}
	return (*y2 == '\0');
}
/**
 * _strstr - takes two strings and find occurences of substring.
 * @haystack: string
 * @needle: substring
 * Return: This function returns a pointer points
 *         to the first character of the found s2 in s1.
 */
char *_strstr(char *haystack, char *needle)
{
	for ( ; *haystack; haystack++)
		if (comp(haystack, needle))
		{
			return (haystack);
			needle++;
		}

	return (*haystack == *needle ? haystack : 0);
}
