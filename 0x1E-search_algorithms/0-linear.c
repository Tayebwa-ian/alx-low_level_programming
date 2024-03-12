#include "search_algos.h"

/**
 *linear_search - perform linear search to find a given element
 *@array: an array to search through
 *@size: size of the array
 *@value: the value to find in the array
 *Return: first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
