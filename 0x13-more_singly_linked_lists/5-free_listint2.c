#include "lists.h"
/**
 *free_listint2 - free the list and set head to NULL
 *@head: head of the list
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	temp = *head;
	if (head == NULL || *head == NULL)
		return;

	while (temp->next != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
	free(temp);
	*head = NULL;
}
