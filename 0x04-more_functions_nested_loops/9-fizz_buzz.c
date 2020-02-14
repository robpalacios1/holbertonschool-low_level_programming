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

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 || i % 5) == 0)
		{
			i == 100 ? printf("FizzBuzz") : printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			i == 100 ? printf("Fizz") : printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			i == 100 ? printf("Buzz") : printf("Buzz ");
		}
		else
		{
			if (i > 9 && i < 100)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
			}
			else if (i > 99)
			{
				putchar(((i / 10) / 10) + '0');
				putchar(((i / 10) % 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
			}
			else
			{
				putchar(i + '0');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
