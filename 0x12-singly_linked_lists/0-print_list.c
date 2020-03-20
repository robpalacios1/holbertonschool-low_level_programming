#include <stdio.h>
#include "lists.h"
/**
 *print_list - prints all elements of e list
 *@h: pointer
 *
 *Return:
 */
size_t print_list(const list_t *h)
{
	const list_t *str;
	unsigned int i;

	str = h;

	for (i = 0; str != NULL, i++)
	{
		printf("[%d] %s\n", str->len, str->string);
		str = str->next;
	}
	return (i);
}
