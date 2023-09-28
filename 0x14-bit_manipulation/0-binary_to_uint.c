#include "main.h"
/**
 *_strlen - calculate the length of a string
 *@str: the string
 *Return: Length of the String
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (*(str + i) != '\0')
		i++;
	return (i);
}

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: a string pointing to 0s and 1s
 *Return: 0 or the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, pow, m, len;

	num = 0;
	if (b == NULL)
		return (0);

	len = _strlen(b) - 1;
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		pow = len;
		m = (*b - 48);
		while (pow)
		{
			if (pow == 0)
				m = m * 1;
			else
				m = m * 2;
			pow--;
		}
		num += m;
		b++;
		len--;
	}
	return (num);
}
