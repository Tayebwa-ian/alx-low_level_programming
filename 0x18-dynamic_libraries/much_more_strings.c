#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: intial string
 *@accept: from string
 *Return:  number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	char *p;

	count = 0;
	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				count++;
				break;
			}
			p++;
		}
		if (*p == '\0')
			return (count);
		s++;
	}
	return (count);
}

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

/**
 * _islower - check lowercase letters
 * @c: The character to be checked
 * Return: 1 (Success) 0 (Failure)
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}

/**
 * _abs - find absolute value of a number
 *
 * @n: the number to find absolute value for
 *
 * Return: the absolute value
 */
int _abs(int n)
{
	int value;

	if (n < 0)
	{
		value = n * -1;
		return (value);
	}
	value = n;
	return (value);
}
