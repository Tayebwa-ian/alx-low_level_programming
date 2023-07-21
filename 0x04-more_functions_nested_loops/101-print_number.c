#include "main.h"
/**
 * print_number - prints integers
 * @n: the integer to be printed
 * Return: void
 */
void print_number(int n)
{
unsigned int num;
num = n;
if (n < 0)
{
_putchar('-');
num = -num;
}
if ((num / 10))
{
print_number(num / 10);
}
_putchar('0' + num % 10);
}
