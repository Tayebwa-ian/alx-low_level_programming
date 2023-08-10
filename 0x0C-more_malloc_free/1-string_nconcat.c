#include "main.h"
/**
 *_strlen - calc string length
 *@str: the string
 *Return: the length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *string_nconcat - joins two strings
 *@s1: is the first strinf
 *@s2: is the second string
 *@n: number of bytes to copy from s2
 *Return: address to the joined string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *joint;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n == _strlen(s2) || n > _strlen(s2))
	{
		n = _strlen(s2);
	}

	joint = malloc(_strlen(s1) + n + 1);

	if (joint == NULL)
		return (NULL);

	while (*(s1 + i) != '\0')
	{
		*(joint + i) = *(s1 + i);
		i++;
	}


	while (j <= n)
	{
		*(joint + i) = *(s2 + j);
		j++;
		i++;
	}
	*(joint + i) = '\0';

	return (joint);
}
