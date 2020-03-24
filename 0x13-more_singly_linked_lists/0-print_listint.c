#include <stdio.h>
#include "lists.h"
/**
 *print_listint - print all the elements.
 *@h: head of list
 *
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (i);
}
