#include "main.h"
/**
 *_strdup - a copy of the string given as a parameter.
 *@str: the string to copy
 *Return: Address to the copied string or NULL
 */
char *_strdup(char *str)
{
	char *array;
	unsigned int j, i;

	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		i++;
	}
	array = malloc(sizeof(char) * (i + 1));
	while ( j < i)
	{
		array[j] = str[j];
		j++;
	}
	array[j] = '\0';
	return (array);
}
