#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - program entry point
 *
 * Description: "Simpliy if statemnet"
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n>0)
{
printf("is positive");
}
else if (n==0)
{
printf("is zero");
}
else
{
printf("is negative");
}
return (0);
}
