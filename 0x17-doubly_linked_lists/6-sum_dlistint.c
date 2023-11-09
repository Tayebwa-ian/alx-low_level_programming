#include "lists.h"

/**
 *sum_dlistint - find sum of all data in linked listed
 *@head: the head od the list
 *Return: the sum or 0 if it fails
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
