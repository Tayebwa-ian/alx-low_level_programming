#include "main.h"
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: a pointer to the memory previously allocated
 *@old_size: the size, in bytes, of the allocated space for ptr
 *@new_size: the new size, in bytes of the new memory block
 *Return: pointer to new allocated memory of NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old, *new;
	unsigned int max, i = 0;

	old = ptr;
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	if (new_size > old_size)
		max = old_size;
	else
		max = new_size;

	while (i <= max)
	{
		*(new + i) = *(old + i);
		i++;
	}
	free(ptr);
	return (new);
}
