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
