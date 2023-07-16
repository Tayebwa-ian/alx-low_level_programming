#include <stdio.h>
/**
* main - entry point
*
* Description: "Skip some letter in the alphabet"
*
* Return: 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
