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
 *rev_string - print string in reverse
 *@s: string to work with
 *Return: void
 */
void rev_string(char *s)
{
char *start, *end, ch;
start = s;
end = start + (_strlen(s) - 1);

while (start < end)
{
ch = *start;
*start = *end;
*end = ch;
start++;
end--;
}
}
