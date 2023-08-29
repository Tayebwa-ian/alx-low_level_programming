#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a list
 *@head: head node
 *@index: the index of the node to find
 *Return: address of the index node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int n;

	if (head == NULL)
		return (NULL);

	current = head;
	for (n = 0; current->next != NULL; n++)
	{
		if (n == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}
