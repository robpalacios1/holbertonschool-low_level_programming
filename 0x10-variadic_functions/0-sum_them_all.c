#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - function that returns the sum of parameters.
 *@n: numbers inside sum variable (parameters).
 *
 *Return: the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int num;
	unsigned int i;
	int cont;
	va_list parameters;

	va_start(parameters, n);
	num = 0;

	for (i = 0; i < n; i++)
	{
		cont = va_arg(parameters, int);
		num = num + cont;
	}
	if (n == 0)
	{
		return (0);
	}

	va_end(parameters);
	return (num);
}
