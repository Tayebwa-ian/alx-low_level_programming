#include "hash_tables.h"

/**
 *hash_table_get - retrieves a value associated with a key
 *@key: the key to search for
 *@ht: the hash table to search from
 *Return: Value associated to the key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);

	head = ht->array[index];
	while (head)
	{
		if (strcmp((char *)key, head->key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
