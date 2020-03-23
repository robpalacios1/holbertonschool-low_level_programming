#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end - add a new node at the end.
 *@head: head of the list.
 *@n: head of list.
 *
 *Return: the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	for (node = *head; node->next != NULL; node = node->next)
	{
	}
	node->next = new;
	return (*head);
}
