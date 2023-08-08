#include "main.h"
/**
 *str_len - get string length
 *@s: the string
 *Return: length of the string
 */
int str_len(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *str_concat - concantenates two strings
 *@s1: first string
 *@s2: second string
 *Return: address of new string joined or NUll
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *array, *temp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = str_len(s1);
	len2 = str_len(s2);

	array = malloc(sizeof(char) * (len1 + len2 + 1));

	if (array == NULL)
		return (NULL);

	temp = array;
	while (*s1 != '\0')
	{
		*array = *s1;
		s1++;
		array++;
	}
	while (*s2 != '\0')
	{
		*array = *s2;
		array++;
		s2++;
	}
	*array = '\0';
	return (temp);
}
