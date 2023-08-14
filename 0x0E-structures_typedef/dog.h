#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - Struct with dog elements
 * @age: age of the dog
 * @name: name of the dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
