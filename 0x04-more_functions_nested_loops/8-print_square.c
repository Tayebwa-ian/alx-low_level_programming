#include "main.h"
/**
 * print_square - printing diagonal lines
 * @n: number of characters
 * Return: void
 */

void print_square(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{

for (j = 0; j <= n; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
