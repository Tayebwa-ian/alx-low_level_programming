#include "lists.h"

/**
 *get_dnodeint_at_index - get node at index in the list
 *@head: head of the list
 *@index: index of the node to get
 *Return: address of the nth node or NULL of it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int nodes = 0;

	if (head == NULL)
		return (NULL);
	current = head;
	while (current)
	{
		if (nodes == index)
			return (current);
		nodes += 1;
		current = current->next;
	}
	return (NULL);
}
