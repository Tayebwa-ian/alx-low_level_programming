#include "hash_tables.h"

/**
 *hash_table_set - adds an element to the hash table.
 *@ht: the Hash table to add the element to
 *@key: The key for the element
 *@value: the value for the element
 *Return: 1 on success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp, *node;
	unsigned long int index;
	hash_node_t *item;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
	{
		free(item);
		return (0);
	}

	item->key = (char *)key;
	item->value = strdup((char *)value);
	item->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = item;
		return (1);
	}

	node = ht->array[index];
	while (node)/* modify the value if the exact key already exists */
	{
		if (strcmp((char *)key, node->key) == 0)
		{
			free(item);
			node->value = strdup((char *) value);
			return (1);
		}
		node = node->next;
	}

	temp = ht->array[index]; /* add key and value if key didn't exist */
	ht->array[index] = item;
	item->next = temp;
	return (1);
}
