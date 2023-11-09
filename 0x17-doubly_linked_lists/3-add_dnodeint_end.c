#include "lists.h"

/**
 *add_dnodeint_end - add a node at the end of the double linked list
 *@head: head of the list
 *@n: the data
 *Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	current = *head;
	if (current == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		current = new;
		*head = current;
		return (*head);
	}

	while (current != NULL)
	{
		if (current->next == NULL)
		{
			new->n = n;
			new->next = NULL;
			new->prev = current;
			current->next = new;
			return (*head);
		}
		current = current->next;
	}
	return (*head);
}
