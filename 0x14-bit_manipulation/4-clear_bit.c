#include "main.h"
/**
 * clear_bit - set the value of a bit to 0
 *
 * @n: pointer to the number
 * @index: position to change bit to 0
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	mask = 1 << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;

	return (1);
}
