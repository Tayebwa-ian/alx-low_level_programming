#include "search_algos.h"

/**
 * advanced_binary - recursive binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t high, low, mid, i;
	int new_array;

	low = 0;
	high = size - 1;
	if (array != NULL && low <= high)
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
		new_array = array[low : high];
	}
}
