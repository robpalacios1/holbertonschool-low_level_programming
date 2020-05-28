#include "hash_tables.h"
/**
 *hash_table_delete - function that delete a hash table
 *@ht: hash table pointer
 *Return: function that delete a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char a = 0;

	if (!ht || ht->array == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if(a == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", temp->key, temp->value);
			a = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
