#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - Chessboard
 * @a: A pointer to the memory area to be filled.
 * Return: conc with two strings
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
