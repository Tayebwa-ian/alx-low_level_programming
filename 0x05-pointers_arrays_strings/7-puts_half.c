#include "main.h"
/**
 *puts_half - prints a string half way
 *@str: the string
 *Return: void
 */
void puts_half(char *str)
{
int length, i, count;
char ch;
ch = '\0';
count = 0;
/*Calculate string length*/
while (*(str + count) != ch)
count++;
length = count;

if (length % 2 == 0)
{
i = length / 2;
}
else
{
i = (length - 1) / 2;
}
while (*(str + i) != ch)
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
