#include "lists.h"
/**
 *sum_listint - calculate the sum of all the data (n) of a list
 *@head: head node of a list
 *Return: sum of all data or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
