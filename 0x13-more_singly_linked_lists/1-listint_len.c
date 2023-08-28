#include "lists.h"
/**
 *listint_len - calculate number of elements of listint
 *@h: head of the list
 *Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int el = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		el++;
	}

	return (el);
}
