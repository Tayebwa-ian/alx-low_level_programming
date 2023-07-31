#include "main.h"

/**
 *_strstr - locates a substring.
 *@haystack: intial string
 *@needle: substring
 *Return: a pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *p, *s;

	while (*haystack)
	{
		s = haystack;
		p = needle;
		while (*s == *p && *p != '\0')
		{
			p++;
			s++;
		}
		if (*p == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
