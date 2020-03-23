#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - function that frees a listint_t list
 *@head: head of the list.
 *
 *Return: the address of the new element.
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
