#include "main.h"
/**
 *create_array - its creates an array of characters
 *@size: size of the array
 *@c: intial character of the array
 *Return: Address of the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	while (i < size)
	{
		if (array == NULL)
			return (NULL);
		*(array + i) = c;
		i++;
	}
	*(array + i) = '\0';
	return (array);
}
