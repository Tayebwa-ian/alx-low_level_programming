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

	while (*src == '\0')
	{
		*start = *src;
		start++;
		src++;
	}
	*start = '\0'; /*adds a terminating null byte*/
	return (dest);
}
