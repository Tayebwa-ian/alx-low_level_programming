#include <stdio.h>
/**
 * main - program entry point
 *
 * Description: "Lower and uppercase alphabet"
 *
 * Return: 0 (Success)
 */
int main(void)
{
char ch, CH;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (CH = 'A'; CH <= 'Z'; CH++)
{
putchar(CH);
}
putchar('\n');
return (0);
}
