#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
int count, i, first, second;
first = 1;
second = 2;
printf("%d, ", first);
printf("%d, ", second);
for (i = 3; i <= count; i++)
{
int next = first + second;
printf("%d, ", next);
first = second;
second = next;
}
printf("\n");
return (0);
}
