#include "lists.h"
/**
 *print_list - function that prints all the elements of a list_t list.
 *@h: the head of the list
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (i);
}
