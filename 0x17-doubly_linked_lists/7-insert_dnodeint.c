#include "lists.h"

/**
 *insert_dnodeint_at_index - insert a node at a specified index in a list
 *@h: head of the list
 *@idx: index to insert the new node
 *@n: data element of the new node
 *Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int c = 0;
	dlistint_t *start, *new, *temp, *last;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	start = *h;
	while (start)
	{
		c += 1;
		if (c == idx && start->next == NULL)
		{
			free(new);
			last = add_dnodeint_end(h, n);
			while (last)
				last = last->next;
			return (last);
		}
		else if (c == idx)
		{
			temp = start->next;
			start->next = new;
			new->prev = start;
			new->next = temp;
			new->n = n;
			return (new);
		}
		start = start->next;
	}
	return (NULL);
}
