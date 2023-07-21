#include "main.h"
/**
 * print_triangle - printing diagonal lines
 * @n: number of characters
 * Return: void
 */

void print_triangle(int n)
{
int i, j, m;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (m = 1; m <= (n - i); m++)
{
_putchar(' ');
}

for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
