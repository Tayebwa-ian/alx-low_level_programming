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
putchar(n);
putchar(m);
if (m < 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
