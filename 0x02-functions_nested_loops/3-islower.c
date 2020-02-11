#include "holberton.h"
/**
 * _islower - check the code for Holberton School students
 *
 * 
 * Return: returns 1 if int c is lower case and 0 if not
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

