#include "main.h"

/**
 *_memset - fills memory with a constant byte.
 *@s: the address of memory to print
 *@n:the size of the memory to print
 *@b: byte to store in memory address
 *Return: memory address
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

/**
 *_memcpy - copies memory area
 *@dest: destination address
 *@src: source memory address
 *@n: the size of the memory to print
 *Return: address of destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *first_dest = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (first_dest);
}
/**
 *_strchr - locates a character in a string
 *@s: the string
 *@c: the character
 *Return:  a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: intial string
 *@accept: from string
 *Return: a pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}

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
