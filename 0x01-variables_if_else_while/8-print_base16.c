#include <stdio.h>
/**
 * main - just the main
 *
 * Return: 0
 */
int main(void)
{
char ch;
int n;
for (n = 0; n < 10; n++)
{
putchar('0' + n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
