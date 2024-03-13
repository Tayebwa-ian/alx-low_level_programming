#include "search_algos.h"
#include <math.h>

/**
 *jump_search - perform jump search to find a given element
 *@array: first element in an array
 *@size: size of the array
 *@value: the value to find in the array
 *Return: first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t blocksize, start, end, i;


	if (array != NULL)
	{
		blocksize = sqrt(size);
		start = 0;
		end = blocksize;
		printf("Value checked array[%ld] = [%d]\n", start, *(array + start));
		while (*(array + end) < value && end < size)
		{
			start = end;
			end = end + blocksize;
			printf("Value checked array[%ld] = [%d]\n", start, *(array + start));
		}
		printf("Value found between indexes [%ld] and [%ld]\n", start, end);
		/* perform linear search on a subarray */
		for (i = start; i <= end; i++)
		{
			if (i == size)
				break;
			printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
			if (*(array + i) == value)
				return (i);
		}
	}
	return (-1);
}
