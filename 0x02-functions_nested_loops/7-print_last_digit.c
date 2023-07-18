#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: The number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
n = n % 10;
_putchar('0' + n);
return (n);
}
