#include "main.h"
/**
 *_memset - fills memory with a constant byte.
 *@s: the address of memory to print
 *@n:the size of the memory to print
 *@b: byte to store in memory address
 *Return: memory address
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *first = s;

	for (i = 0; i <= n; i++)
	{
		*s = b;
		s++;
	}
	return (first);
}
