#include "search_algos.h"

/**
 *b_search - perform binary search to find a given element
 *@array: an array to search through
 *@low: lowest element in the array
 *@high: Uppper element of an array
 *@value: the value to find in the array
 *Return: first index where value is located or -1
 */
int b_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (array != NULL)
	{
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

/**
 * exponential_search - perform exponential search to find a given element
 * @array: an array to search through
 * @size: size of the array
 * @value: the value to find in the array
 * Return: first index where value is located or -1
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t start, end, i;

	if (array != NULL)
	{
		start = 0;
		i = 1;
		end = i;
		while (i <= size)
		{
			printf("Value checked array[%ld] = [%d]\n", end, array[end]);
			if (array[end] == value)
				return (end);
			else if (value > array[end] && end < size - 1)
			{
				start = end;
				i *= 2;
				if (i >= size)
				{
					end = size - 1;
				}
				else
					end = i;
			}
			else
			{
				printf("Value found between indexes [%ld] and [%ld]\n", start, end);
				return (b_search(array, start, end, value));
			}
		}
	}
	return (-1);
}
