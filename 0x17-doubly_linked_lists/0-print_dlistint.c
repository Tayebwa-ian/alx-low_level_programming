#include "lists.h"

/**
 *print_dlistint - prints elements in a double linked list
 *@h: the head of the list
 *Return: Number of nodes in a list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		nodes += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
