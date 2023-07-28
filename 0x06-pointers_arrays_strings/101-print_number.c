#include "main.h"

/**
 *print_number - print a number
 *@n: the number
 *Return: void
 */

void print_number(int n)
{
	char bucket[20];
	int i, j;

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
		i = 0;
		while (n != 0)
		{
			bucket[i] = n % 10 + '0';
			n = n / 10;
			i++;
		}
		bucket[i] = '\0';
		for (j = i; j >= 0; j--)
		{
			_putchar(bucket[j]);
		}
	}
}
