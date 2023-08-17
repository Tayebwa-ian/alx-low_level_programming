#include "variadic_functions.h"
/**
 *sum_them_all -  find sum of the unknown arguments
 *@n - number of unknown arguments
 *Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(ap, int);
	}
	va_end(ap);
	return (result);
}
