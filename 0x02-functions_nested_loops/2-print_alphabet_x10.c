#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int i;
char ch;
for (i = 1; i < 11; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
