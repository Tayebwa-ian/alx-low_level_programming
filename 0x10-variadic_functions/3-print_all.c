#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_all -  prints anything.
 *@format: a list of types of arguments passed to the function
 *Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i, check_stat; /* declare variables and va_arg datatype */
	char *str;
	va_list ap;

	va_start(ap, format); /* initilaize var arguments */
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(ap, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				check_stat = 0;
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				check_stat = 0;
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[i +  1] != '\0' && check_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
