#include "hash_tables.h"
/**
 * hash_table_delete - function to delete hash table
 * @ht: hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				temp = ht->array[i];
				free(temp->key);
				free(temp->value);
				ht->array[i] = ht->array[i]->next;
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
