#include "lists.h"
/**
 *reverse_listint - reverses a list
 *@head: head node
 *Return: Address of the head of the revesred list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *nextnode, *link = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (current != NULL)
	{
		nextnode = current->next; /* store next node*/
		current->next = link; /* reverse the link */
		/* update current and link*/
		link = current;
		current = nextnode;
	}
	*head = link;
	return (*head);
}
