#include <stdlib.h>
#include "lists.h"
/**
 *reverse_listint - function that insert a new node at a given position
 *@head: head of the list.
 *
 *Return: address new node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *bck, *next;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if ((*head)->next == NULL)
	{
		return (*head);
	}
	bck = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = bck;
		bck = *head;
		*head = next;
	}
	*head = bck;
	return (*head);
}
