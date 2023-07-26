/**
 *_strncpy - concatenates two strings
 *@dest: destination string
 *@src: source string
 *@n: number of bytes to use from the source
 *Return: Address of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	int i, l;

	i = 0;
	l = 0;

	/* get the length of the src string */
	while (*(src + l) != '\0')
		l++;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	/* if src string has less character than n, fill the rest with '\0' */
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}

	return (start);
}
