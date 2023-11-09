#include "lists.h"

/**
 *add_dnodeint - add node at beginning of the list
 *@head: the head of the list
 *@n: the data value
 *Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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

	new->n = n;
	new->next = current;
	new->prev = NULL;
	current->prev = new;
	current = new;
	*head = current;
	return (*head);
}
