#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
int count, i;
unsigned long int first, second;
first = 1;
second = 2;
count = 98;
printf("%lu, ", first);
printf("%lu, ", second);
for (i = 3; i <= count; i++)
{
unsigned long int next = first + second;
if (i == count)
printf("%lu", next);
else
printf("%lu, ", next);
first = second;
second = next;
}
printf("\n");
return (0);
}
