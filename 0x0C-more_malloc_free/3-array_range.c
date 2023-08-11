#include "main.h"
/**
 *array_range - creates an array of integers.
 *@min: minimum integer in the array
 *@max: maximum integer in the array
 *Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, diff, i = 0;

	if (min > max)
		return (NULL);
	diff = max - min;

	array = malloc(sizeof(diff) * (diff + 1));

	if (array == NULL)
		return (NULL);

	while (min <= max)
	{
		*(array + i) = min;
		i++;
		min++;
	}
	return (array);
}
