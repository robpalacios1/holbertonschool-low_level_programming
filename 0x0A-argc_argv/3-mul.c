#include <stdio.h>

/**
 * is_num - checks if it is a digit
 * @n: Number
 * Return: If it is a number, retrun 1 else return 0
 */
int is_num(unsigned int n)
{
	return (n >= '0' && n <= '9');
}

/**
 * _atoi - convert a string to a number
 * @s: String to be converted
 * Return: returns the number
 */
int _atoi(char *s)
{
	unsigned int num, i;
	int sign;

	sign = 1;
	num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_num(s[i]))

		{
			num = (s[i] - '0') + num * 10;
		}
		if (s[i + 1] == ' ')
		{
			break;
		}
		else if (s[i] == '-')
		{
			sign = sign * -1;
		}
	}
	return (num * sign);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of string of arguments
 *
 * Return: 0, 1 for error
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int cont;

	if (!(argc == 3))
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	cont = x * y;

	printf("%d\n", cont);

	return (0);
}
