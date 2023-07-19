#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
int count, i;
unsigned long long int first, second;
first = 1;
second = 2;
count = 98;
printf("%llu, ", first);
printf("%llu, ", second);
for (i = 3; i <= count; i++)
{
unsigned long long int next = first + second;
if (i == count)
printf("%llu", next);
else
printf("%llu, ", next);
first = second;
second = next;
}
printf("\n");
return (0);
}
