#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: "char and digits"
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n = 0;
while (n < 10)
{
putchar('o' + n);
n++;
}
putchar('\n');
return (0);
}
