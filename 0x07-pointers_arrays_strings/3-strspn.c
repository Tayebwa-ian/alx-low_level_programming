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

	count = 0;
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				break;
			}
			accept++;
		}
		s++;
	}
	return (count);
}
