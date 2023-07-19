#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
int count, i;
long int first, second;
first = 1;
second = 2;
count = 98;
printf("%ld, ", first);
printf("%ld, ", second);
for (i = 3; i <= count; i++)
{
long int next = first + second;
if (i == count)
printf("%ld", next);
else
printf("%ld, ", next);
first = second;
second = next;
}
printf("\n");
return (0);
}
