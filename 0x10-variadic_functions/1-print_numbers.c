#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers - prints numbers in unknown arguments
 *@separator: the string to be printed between numbers
 *@n: the number of integers passed to the function
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d%c", va_arg(ap, int), *separator);
		}
		else
			printf("%d\n", va_arg(ap, int));
	}
	va_end(ap);
}
