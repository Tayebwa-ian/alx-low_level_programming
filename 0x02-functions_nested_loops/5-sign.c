#include "main.h"
/**
 * print_sign - Prints a sign depending on number
 *
 * @n: a number that is to be evaluated
 *
 * Return: 1, 0 or -1 depending on the number
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}
