#include <stdio.h>
/**
 * main - main void.
 *@argc:return value of a program.
 *@argv:return size of array.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int cont;

	x = 0;
	y = 0;
	cont = 0;

	if (argc == 3)
	{
		x = *(*(argv + 1)) - 48;
		y = *(*(argv + 2)) - 48;
		cont = (x * y);
		printf("%d\n", cont);
		return (0);
	}

	printf("Error\n");
	return (1);
}
