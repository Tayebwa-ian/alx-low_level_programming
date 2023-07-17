#include <stdio.h>
/**
 * main - main func
 *
 * Return: 0
 */
int main(void)
{
int n, m, x, q;
for (n = 0; n <= 9; n++)
{
for (m = 0; m < 9; m++)
{
for (x = n; x <= 9; x++)
{
for (q = m + 1; q <= 9; q++)
{
putchar('0' + n);
putchar('0' + m);
putchar(' ');
putchar('0' + x);
putchar('0' + m);
if (n != 9 && m != 8)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
