#include <stdio.h>
/**
 * main - main func
 *
 * Return: 0
 */
int main(void)
{
int n, m;
for (n = 0; n < 9; n++)
{
for (m = n + 1; m <= 9; m++)
{
putchar('0' + n);
putchar('0' + m);
if (n < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
