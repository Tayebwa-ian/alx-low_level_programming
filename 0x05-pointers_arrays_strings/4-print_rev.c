#include "main.h"
/**
 *print_rev - print string in reverse
 *@s: string to reverse
 *Return: void
 */
void print_rev(char *s)
{
int i;
  
for (i = _strlen(s); i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
