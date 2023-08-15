#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 *_strlen - cal the length of a string
 *@str: the string
 *Return: length of a string
 */
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		i++;
	return (i);
}
/**
 *new_dog - creates a new dog
 *@name: name of the new dog
 *@age: age of a new dog
 *@owner: owner of the new dog
 *Return: Pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;
	dog_t *new;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = malloc(_strlen(name) + 1);
	if (new->name == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	while (*(name + i) != '\0')
	{
		new->name[i] = *(name + i);
		i++;
	}
	new->name[i] = '\0';
	new->owner = malloc(_strlen(owner) + 1);
	if (new->owner == NULL)
	{
		free(new->owner);
		free(new->name);
		free(new);
		return (NULL);
	}
	while (*(owner + j) != '\0')
	{
		new->owner[j] = *(owner + j);
		j++;
	}
	new->owner[j] = '\0';
	new->age = age;
	return (new);
}
