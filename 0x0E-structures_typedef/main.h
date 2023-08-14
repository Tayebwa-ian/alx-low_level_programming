#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * struct dog - Struct with dog elements
 * @age: age of the dog
 * @name: name of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif /* DOG_H */
