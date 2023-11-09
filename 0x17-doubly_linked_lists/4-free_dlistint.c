#include "lists.h"

/**
 *free_dlistint - Free and doubly linked list
 *@head: head of the list
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		while (head)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
	}
}
