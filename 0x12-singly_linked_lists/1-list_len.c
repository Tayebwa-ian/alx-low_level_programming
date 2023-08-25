#include "lists.h"
/**
 * list_len -  function that returns the number of elements in a linked list_t
 *@h: the linked list
 *Return: number of elements in a list
 */
 size_t list_len(const list_t *h)
 {
	 int i = 1;

	 if (h == NULL)
		 return (0);

	 while (h->next != NULL)
	 {
		 h = h->next;
		 i++;
	 }
	 return (i);
 }
