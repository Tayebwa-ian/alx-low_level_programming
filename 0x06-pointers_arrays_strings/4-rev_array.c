#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *reverse_array - revesing an array
 *@a: the array
 *@n: number of characters in the array
 *Result: void
 */
void reverse_array(int *a, int n)
{
	int i, *last_address, *first_address;

	i = 0;
	first_address = a;
	last_address = a + (n - 1);
	while (i < n)
	{
		if (*last_address == *first_address)
		{
			printf("%d", *last_address);
		}
		else
			printf("%d, ", *last_address);
		i++;
		last_address--;
	}
	printf("\n");
}
