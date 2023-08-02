/**
 *prime - find prime numbers
 *@a: the number
 *@b: iteration
 *Return: 1 or 0
 */

int prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
		return (0);
	else if (a == b)
		return (1);
	return (prime(a, b + 1));
}

/**
 *is_prime_number - finds primes numbers
 *@n: the given number
 *Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
