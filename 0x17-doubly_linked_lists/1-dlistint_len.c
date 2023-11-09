#include "lists.h"

/**
 *dlistint_len - calculate number of elements in a list
 *@h: the head of the list
 *Return: Number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
