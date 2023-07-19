#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
int total, even_sum;
long int first, second;
first = 1;
second = 2;
even_sum = 2;
total = 0;
while (total < 4000000)
{
long int next = first + second;
if ((next % 2 == 0) && (total <= 4000000))
{
even_sum += next;
}
first = second;
second = next;
total = next;
}
printf("%d\n", even_sum);
return (0);
}
