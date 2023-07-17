#include <stdio.h>
/**
 * main - main func
 *
 * Return: 0
 */
int main(void)
{
int n, m;
for (n = 0; n <= 98; n++)
{
for (m = n + 1; m <= 99; m++)
{
putchar('0' + (n / 10));
putchar('0' + (n % 10));
putchar(' ');
putchar('0' + (m / 10));
putchar('0' + (m % 10));
if ((n < 98))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
