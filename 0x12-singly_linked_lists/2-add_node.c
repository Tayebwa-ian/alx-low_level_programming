#include "lists.h"
/**
 *_strlen - calculate string length
 *@str: the string
 *Return: Length of a string
 */
int _strlen(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 *add_node - function that adds a new node at the end of a list_t list.
 *@head: head node
 *@str: string to copy
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
