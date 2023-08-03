#include <stdio.h>
/**
 *pal - finds if given string is palindrome or not
 *@str: the string
 *@last: last address
 *@first: first address
 *Return: 0 or 1
 */

int pal(char *str, int first, int last)
{
	if (*(str + first) == *(str + last))
	{
		if (first == last || first == last + 1)
			return (1);
		return (0 + pal(str, (first + 1), (last - 1)));
	}
	return (0);
}

/**
 *is_palindrome - finds if given string is palindrome
 *@s: the given string
 *Return: 0 or 1
 */

int is_palindrome(char *s)
{
	char *temp = s;
	int len = 0;

	if (*s == '\0')
		return (1);

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (pal(temp, 0, (len - 1)));
}
