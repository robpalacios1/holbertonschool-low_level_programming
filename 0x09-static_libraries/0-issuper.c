#include <ctype.h>
#include "holberton.h"
/**
 * _isupper - check the code for Holberton School students
 *@c:explained about int c
 *
 * Return: returns 1 if int c is Uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
