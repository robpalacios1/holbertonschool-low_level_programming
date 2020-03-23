#include <stdio.h>
#include "lists.h"
/**
 *listint_len - return the number of elements.
 *@h: head of list.
 *
 *Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
