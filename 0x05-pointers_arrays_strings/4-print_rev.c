#include "main.h"
/**
 *_strlen - count characters in string
 *@s: string to work with
 *Return: string length
 */
int _strlen(char *s)
{
int i;
char ch;
ch = '\0';
i = 0;
while (*(s + i) != ch)
{
i++;
}
return (i);
}

/**
 *print_rev - print string in reverse
 *@s: string to work with
 *Return: void
 */
void print_rev(char *s)
{
int i;

for (i = (_strlen(s) - 1); i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
