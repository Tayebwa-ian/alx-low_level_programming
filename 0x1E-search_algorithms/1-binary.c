#include "search_algos.h"

/**
 *binary_search - perform binary search to find a given element
 *@array: an array to search through
 *@size: size of the array
 *@value: the value to find in the array
 *Return: first index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t high, low, mid, i;

	if (array != NULL)
	{
		low = 0;
		high = size - 1;
		while (low <= high)
		{
			i = low;
			printf("Searching in array: ");
			while (i <= high)
			{
				if (i != high)
					printf("%d, ", array[i]);
				else
					printf("%d\n", array[i]);
				i++;
			}
			mid = (high + low) / 2;
			if (array[mid] == value)
				return (mid);
			else if (array[mid] > value)
				high = mid - 1;
			else
				low = mid + 1;
		}
	}
	return (-1);
}
