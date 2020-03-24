#include <stdlib.h>
#include "lists.h"
/**
 *insert_nodeint_at_index - function that insert a new node at a given position
 *@head: head of the list.
 *@idx: is the index of the list
 *@n: value to assign.
 *
 *Return: address new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a, *b;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	i = 0;
	a = *head;

	if (a == NULL && idx != 0)
	{
		return (NULL);
	}
	b = malloc(sizeof(listint_t));

	if (b == NULL)
	{
		return (NULL);
	}
	b->n = n;

	if (idx == 0)
	{
		b->next = *head;
		*head = b;
		return (b);
	}
	for (i = 0; i != idx - 1; i++)
	{
		a = a->next;
		if (!a)
		{
			free(b);
			return (NULL);
		}
	}
	b->next = a->next;
	a->next = b;
	return (b);
}
