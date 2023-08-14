#include <stddef.h>
#include "dog.h"
/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: dog struct pointer
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
