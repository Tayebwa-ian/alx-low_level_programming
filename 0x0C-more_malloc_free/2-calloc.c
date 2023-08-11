#include "main.h"
/**
 *_calloc - allocates memory of an array
 *@nmemb: number of elements
 *@size: size of bytes for each element
 *Return: pointer to allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		*(pointer + i) = 0;
		i++;
 	}
	return (pointer);
}
