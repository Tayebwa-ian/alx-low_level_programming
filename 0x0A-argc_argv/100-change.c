#include <stdio.h>
#include <stdlib.h>
/**
 *change - changes the given amount of money to coins
 *@m: the amount
 *@n: the coin to try
 *Return: number of coins
 */
int change(int m, int *n)
{
	if (m % *n == 0)
		return (m / *n);
	while (m < *n)
	{
		n++;
	}
	return ((m / *n) + change((m % *n), n));
}


/**
 *main -  prints the minimum number of coins to make change
 *@argc: number of arguments provided
 *@argv: the arguments
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int array[5] = {25, 10, 5, 2, 1};
	int dig;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	dig = atoi(argv[1]);
	if (dig < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", change(dig, array));
	return (0);
}
