#include "hash_tables.h"

/**
 *hash_table_print - print hash table
 *@ht: the ash table
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i;
	char *temp = "";

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while(head)
		{
			printf("%s'%s': '%s'", temp, head->key, head->value);
			temp = ", ";
			head = head->next;
		}
	}
	printf("}\n");
}
