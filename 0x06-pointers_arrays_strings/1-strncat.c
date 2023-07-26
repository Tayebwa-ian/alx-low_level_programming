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
