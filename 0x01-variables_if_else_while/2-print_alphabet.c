#include <stdio.h>
/**
 * main - program entry point.
 *
 * Description: "Printing alphabet in lowercase",
 *
 * Return: 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
