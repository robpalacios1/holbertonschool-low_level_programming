#include <stdlib.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - function that deletes the nodes.
 *@head: head of the list.
 *@index: is the index of the node.
 *
 *Return: 1 if it suceeded, -1 if it dont.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i;
	listint_t *aux;

	for (i = -1; *head != NULL; i++)
	{
		if (i + 1 == (int) index)
		{
			aux = (*head)->next;
			free(*head);
			*head = aux;
			return (1);
		}
		head = &(*head)->next;
	}
	return (-1);
}
