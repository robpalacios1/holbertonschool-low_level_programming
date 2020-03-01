#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - program adds positive numbers
 * @argc: numbers of argument
 * @argv: the arguments it receive
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int sum;
	int val;
	int i;

	sum = 0;
	val = 0;
	i = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}

	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{

			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		val = atoi(argv[argc]);
		sum += val;
	}
	printf("%d\n", sum);
	return (0);
}
