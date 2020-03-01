#include <stdio.h>
#include <stdlib.h>

/**
 *main - funtion
 *@argc: legenth of argv
 *@argv: number of argummet
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n;
	int value;
	int change;
	int cont;
	int coins[] = {25, 10, 5, 2, 1};

	n = 0;
	value = 0;
	change = 0;
	cont = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);

	if (value <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (n = 0; coins[n] != '\0'; n++)
	{
		if (value >= coins[n])
		{
			cont = (value / coins[n]);
			change = change + cont;
			value = value - coins[n] * cont;

		}
	}
	printf("%d\n", change);
	return (0);
}
