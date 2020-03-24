#include <stdlib.h>
#include "lists.h"
/**
 *sum_listint - function that return the sum of all data
 *@head: head of the list.
 *
 *Return: the sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
