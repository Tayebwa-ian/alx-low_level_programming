/**
 *_sqrt - find square root using recursion
 *@a: the number
 *@b: iterator
 *Return: -1 or square root
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (_sqrt(a, b + 1));
}

/**
 *_sqrt_recursion - find square root of a number
 *@n: the number
 *Return: Squae root or -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
