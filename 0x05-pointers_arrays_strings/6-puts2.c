#include "main.h"
/**
 *puts2 - count characters in a string
 *@str: the string
 *Return: void
 */
void puts2(char *str)
{
int i;
i = 0;
while (*(str + i) != '\0')
{
if (i % 2 == 0)
{
_putchar(*(str + i));
}
i++; 
}
_putchar('\n');
}
