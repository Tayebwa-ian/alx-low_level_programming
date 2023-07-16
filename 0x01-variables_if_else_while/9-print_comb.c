#include <stdio.h>
/**
 * main - main func
 *
 * Return: 0
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar('0' + n);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
