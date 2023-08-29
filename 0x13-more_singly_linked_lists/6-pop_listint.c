#include "lists.h"
/**
 *pop_listint - delete head node of the linked list
 *@head: head node
 *Return: data n of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (*head == NULL || head == NULL)
		return (0);

	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
