/**
 *reverse_array - revesing an array
 *@a: the array
 *@n: number of characters in the array
 *Result: void
 */
void reverse_array(int *a, int n)
{
	int i, *last_address, temp;

	i = 0;
	last_address = a + (n - 1);
	while (i < n)
	{
		if (a < last_address)
		{
			temp = *a;
			*a = *last_address;
			*last_address = temp;
		}
		i++;
		a++;
		last_address--;
	}
}
