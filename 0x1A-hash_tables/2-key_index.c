#include "hash_tables.h"

/**
 *key_index - generate index of the key
 *@key: the key to use
 *@size: size of the hash table
 *Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result;

	result = hash_djb2(key) % size;
	return (result);
}
