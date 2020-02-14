#include <stdio.h>
#include "holberton.h"
/**
 *main - its print number.
 *
 *Return: always 0;
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	if (i < 100)
	{
		printf(" ");
	}
	printf("\n");
	return (0);
}
