#include <stdio.h>
/**
 * print_times_table - printing time table
 *
 * @n: table of integer n to be built
 *
 * Return: void
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
{
return;
}
else
{
int i, j, result;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j != n)
{
if (result <= 9)
{
printf("  %d, ", result);
}
else if (result <= 99)
{
printf(" %d, ", result);
}
else
{
printf("%d, ", result);
}
}
else
{
if (result <= 9)
{
printf("  %d", result);
}
else if (result <= 99)
{
printf(" %d", result);
}
else
{
printf("%d", result);
}
}
}
printf("\n");
}
}
}
