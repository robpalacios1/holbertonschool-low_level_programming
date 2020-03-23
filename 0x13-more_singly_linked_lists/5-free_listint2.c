#include <stdlib.h>
#include "lists.h"
/**
 *free_listint2 - function that frees a listint_t list
 *@head: head of the list.
 *
 *Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *a, *b;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	a = *head;

	while (a != NULL)
	{
		b = a;
		a = a->next;
		free(b);
	}

	*head = NULL;
}
