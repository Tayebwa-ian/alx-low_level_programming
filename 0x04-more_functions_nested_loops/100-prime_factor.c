#include <stdio.h>
#include "main.h"
/**
 * main - prints largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
unsigned long int i, m;
m = 612852475143;

for (i = 3; i < 782849; i = i + 2)
{
while ((m % i == 0) && (m != i))
{
m = m / i;
}
}
printf("%lu\n", m);
return (0);
}
