#include "main.h"

/**
 *print_number - print a number
 *@n: the number
 *Return: void
 */

void print_number(int n)
{
	unsigned int m = n;

	/* Handles the case for when n is a negative */
	if (n < 0)
	{
		_putchar('-');
		m = -m; /* turn n into positive number */
	}

	if (m < 10)
		_putchar('0' + m);
	else
	{
		print_number(m / 10);
		_putchar(m % 10 + '0');

	}
}
