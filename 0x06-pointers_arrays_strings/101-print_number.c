#include "main.h"

/**
 *print_number - print a number
 *@n: the number
 *Return: void
 */

void print_number(int n)
{

	/* Handles the case for when n is a negative */
	if (n < 0)
	{
		_putchar('-');
		n = -n; /* turn n into positive number */
	}

	if (n < 10)
		_putchar('0' + n);
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');

	}
}
