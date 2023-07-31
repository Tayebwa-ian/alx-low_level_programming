#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: destination address
 *@src: source memory address
 *@n: the size of the memory to print
 *Return: address of destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *first_dest = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (first_dest);
}
