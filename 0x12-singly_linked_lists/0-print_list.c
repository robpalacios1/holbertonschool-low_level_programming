#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_list - s
 *@h: pointer
 *
 *Return:
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *str = a;
	unsigned int i;

	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str != NULL, i++)
	{
		printf("[%d] %s\n", str->len, str->string);
		str = str->next;
	}
	return (count)
}
