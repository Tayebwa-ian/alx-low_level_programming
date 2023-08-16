#include "function_pointers.h"
/**
 *int_index - searches for an integer.
 *@array: the array to use to search
 *@size: size of the array
 *@cmp: a pointer to a function to use to compare
 *Return: index of elemnt on success and -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if  (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
	}
	return (-1);
}
