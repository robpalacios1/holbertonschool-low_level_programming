#include <ctype.h>
#include "holberton.h"
/**
 * _isdigit - check the code for Holberton School students
 *@c:explained about int c
 *
 * Return: returns 1 if int c is Uppercase and 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
