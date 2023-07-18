#include <stdio.h>
/**
 * main - computes and prints the sum
 *
 * Return: 0
 */
int main(void)
{
int limit, sum, i;
limit = 1024;
sum = 0;
for (i = 1; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
