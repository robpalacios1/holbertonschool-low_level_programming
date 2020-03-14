#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - prints numbers.
 *@n: numbers of strings.
 *@separator: separator.
 *
 *Return: print numbers.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char*);

		if (str != NULL)
		{
			printf("%s", str);

			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("nil");

			if (i != (n - 1) && separator != NULL)
			{
			printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(valist);
}
