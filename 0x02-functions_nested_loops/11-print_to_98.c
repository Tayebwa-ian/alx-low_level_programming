#include "stdio.h"
/**
 * print_to_98 - print natural numbers to 98
 *
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
int i;
if (n < 99)
{
for (i = n; i < 99; i++)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d", i);
}
}
printf("\n");
}
else
{
for (i = n; i > 98; i--)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d", i);
}
}
printf("\n");
}
}
