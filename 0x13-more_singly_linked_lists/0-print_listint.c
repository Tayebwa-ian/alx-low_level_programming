#include "lists.h"
/**
 *print_listint - prints all elements of listint
 *@h: head of the list
 *Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	printf("%d\n", h->n);
	return (nodes);
}
