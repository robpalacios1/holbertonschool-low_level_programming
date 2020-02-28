#include "holberton.h"
/**
 * rev_string - print string in reverse.
 * @s: String in reverse
 * Return: return an integer.
 */
void rev_string(char *s)
{
	int _strlen(char *str), len, c;

	char *start, *end, tmp;

	len = _strlen(s);

	start = s;
	end = s;

	for (c = 0; c < (len - 1); c++)
		end++;

	for (c = 0; c < (len / 2); c++)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}
/**
 * _strlen - find the length of a string
 * @str: input string pointer
 *
 * Return: string length
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		i++;

	return (i);
}
