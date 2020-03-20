#include <stdio.h>
#include "lists.h"
/**
 *print_list - prints all elements of e list
 *@h: pointer
 *
 *Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *aux;
	unsigned int i;

	aux = h;

	for (i = 0; aux != NULL; i++)
	{
		printf("[%d] %s\n", aux->len, aux->str);
		aux = aux->next;
	}
	return (i);
}
