#include "search_algos.h"

/**
 *interpolation_search - perform interpolation search to find a given element
 *@array: an array to search through
 *@size: size of the array
 *@value: the value to find in the array
 *Return: first index where value is located or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, pos;

	if (array != NULL)
	{
		low = 0;
		high = size - 1;
		while (low <= high)
		{
			pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
			if (pos > size - 1)
			{
				printf("Value checked array[%ld] is out of range\n", pos);
				break;
			}
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
			else if (array[pos] > value)
				high = pos - 1;
			else
				low = pos + 1;
		}
	}
	return (-1);
}
