#include "main.h"

/**
 * _strcmp - Compare Two String
 * @s1:String 1
 * @s2:String 2
 * Return: 0 If Identical Otherwise How Much Diffrent
 */
int _strcmp(char *s1, char *s2)
{
	int cmp = 0, i, len1, len2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (s1 == NULL || s2 == NULL)
		return (1);
	if (len1 != len2)
		return (1);
	for (i = 0; s1[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
			break;
		}
		else
			continue;
	}
	return (cmp);
}
/**
 * _isalpha - Check if Alphabtic
 *@c: Character
 * Return: 1 If True 0 If Not
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}

/**
 *_strcat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *Return: Address of dest
 */
char *_strcat(char *dest, char *src)
{
	char *start;
	int length;

	length = 0;

	/* getting the last address of intial dest string */
	while (*(dest + length) != '\0')
		length++;
	start = dest + length;

	while (*src != '\0')
	{
		*start = *src;
		start++;
		src++;
	}
	*start = '\0'; /*adds a terminating null byte*/
	return (dest);
}

/**
 *_strncat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *@n: number of bytes to use from the source
 *Return: Address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start;
	int length, i;

	length = 0;
	i = 0;

	/* getting the last address of intial dest string */
	while (*(dest + length) != '\0')
		length++;
	start = dest + length;

	while (*src != '\0' && i < n)
	{
		*start = *src;
		start++;
		src++;
		i++;
	}
	*start = '\0'; /*adds a terminating null byte*/
	return (dest);
}

/**
 * *_strcpy - pointer to a character
 *
 * @dest: string 1 pointer to a char
 * @src: string 2 pointer to a char
 * Return: character (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
