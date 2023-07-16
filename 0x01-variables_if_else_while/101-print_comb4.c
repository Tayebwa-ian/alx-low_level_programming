#include <stdio.h>
/**
 * main -main func
 *
 * Return: 0
 */
int main(void)
{
int n, m, x;
for (n = 0; n < 8; n++)
{
for (m = n + 1; m < 9; m++)
{
for (x = m + 1; x < 10; x++)
{
putchar('0' + n);
putchar('0' + m);
putchar('0' + x);
if (n < 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
