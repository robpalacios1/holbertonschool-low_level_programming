#include <stdlib.h>
#include "lists.h"
/**
 *get_nodeint_at_index - function that return the nth node
 *@head: head of the list.
 *@index: index of node.
 *
 *Return: void.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i != index; i++)
	{
		head = head->next;

		if (!head)
		{
			return (NULL);
		}
	}
	return (head);
}
