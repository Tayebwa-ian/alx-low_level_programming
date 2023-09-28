#include "main.h"
/**
 * get_bit - get the value of a bit at a given index
 * @index: the index of the bit
 * @n: the number to check
 * Return: 1 or 0 or -1 0n error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(size_t) * 8)
		return (-1);

	n = n >> index;
	return ((n & 1));
}
