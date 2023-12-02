#include "hash_tables.h"

/**
 *hash_table_delete - delete hash table
 *@ht: the hash table
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			head = ht->array[i];
			while (head)
			{
				free(head->key);
				free(head->value);
				head = head->next;
			}
			free(ht->array[i]);
		}
		free(ht->array);
		free(ht);
	}
}
