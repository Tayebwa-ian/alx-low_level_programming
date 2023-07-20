#include "main.h"

/**
 * _isdigit - check digits
 * @c: The digit to be checked
 * Return: 1 (Success) 0 (Failure)
 */

int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
return (0);
}
