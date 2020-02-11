#include "holberton.h"

/**
 * main - check the code for Holberton School student
 *
 * Return: returns 0 or void
 */



void print_alphabet_x10(void)
{
  int a;
  int i;

  for (i = 0; i < 10; i++)
    {

      for (a = 97; a <= 122; a++)
	{
	  _putchar(a);
	}
      _putchar('\n');
    }
  return;
}
