#include "main.h"
/**
 *print_number - print a number
 *@n: the number
 *Return: void
 */
void print_number(int n)
{
	if (n < 10)
	{
		n = n + 48;
		_putchar('0' + n);
	}
	else
		while (n >= 0)
		{
			n = n / 10;
			
}
