#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Prints a grid of integers.
 * @ac: number of arguments.
 * @av: passed arguments.
 *
 * Return: Two Matrix.
 */
char *argstostr(int ac, char **av)
{
	char *string;

	int i, j, k, length;

	length = 0;
	k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				length++;
			}
		}

		string = malloc((length + 1 + ac) * sizeof(char));

		if (string == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				string[k++] = av[i][j];
			}
			string[k++] = '\n';
		}
		string[k] = '\0';
	}
	return (string);
}
