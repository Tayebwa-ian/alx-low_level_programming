#include "main.h"

/**
 * _isupper - check uppercase letters
 * @c: The character to be checked
 * Return: 1 (Success) 0 (Failure)
 */

int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
return (0);
}
