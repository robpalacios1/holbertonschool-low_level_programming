#include <stdlib.h>
#include "lists.h"
/**
 *pop_listint - function that delete the head node.
 *@head: head of the list.
 *
 *Return: void.
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int i;

	a = *head;

	if (a == NULL)
	{
		return (0);
	}

	i = a->n;
	*head = a->next;
	free(a);

	return (i);
}
