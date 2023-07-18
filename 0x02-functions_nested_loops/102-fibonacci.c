#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
int count, i;
long long int first, second;
first = 1;
second = 2;
printf("%lld, ", first);
printf("%lld, ", second);
for (i = 3; i <= count; i++)
{
long long int next = first + second;
printf("%lld, ", next);
first = second;
second = next;
}
printf("\n");
return (0);
}
