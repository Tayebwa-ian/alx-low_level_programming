#include "search_algos.h"
#include <math.h>

/**
 * list_linear_search - Search for a value in a list
 * @head: head of the list
 * @stop: List element where to stop
 * @value: value to find
 * Return: pointer to the first node where value is located or NULL
*/
listint_t *list_linear_search(listint_t *head, listint_t *stop, int value)
{
	printf("Value found between indexes [%ld] and [%ld]\n",
	head->index, stop->index);
	while (head)
	{
		printf("Value checked at index [%ld] = [%d]\n",
		head->index, head->n);
		if (head->n == value)
			return (head);
		if (head == stop)
			return (NULL);
		head = head->next;
	}
	return (NULL);
}

/**
 * jump_list - searches for a value in list using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the first node where value is located or NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t blocksize, step;
	listint_t *start, *node, *end;

	if (list != NULL)
	{
		blocksize = sqrt(size);
		step = blocksize;
		start = list;
		node = list;
		while (node)
		{
			if (node->index == step)
			{
				printf("Value checked at index [%ld] = [%d]\n",
				node->index, node->n);
				if (node->n < value)
				{
					if (step < size - 1)
						start = node;
					step += blocksize;
					if (step >= size)
						step = size - 1;
				}
				else
				{
					end = node;
					return (list_linear_search(start, end, value));
				}
			}
			if (node->next == NULL)
			{
				end = node;
				return (list_linear_search(start, end, value));
			}
			node = node->next;
		}
	}
	return (NULL);
}
