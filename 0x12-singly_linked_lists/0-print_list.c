#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of list
 *
 * @h: head of list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t aux = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		aux++;
	}
	return (aux);
}
