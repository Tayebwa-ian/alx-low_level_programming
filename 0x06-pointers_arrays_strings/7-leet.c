/**
 *leet - encode
 *@str: the string
 *Return: address to string
 */
char *leet(char *str)
{
	char *first_address = str;

	while (*str != '\0')
	{
		if (*str == 65 || *str == 97)
			*str = 52;
		else if (*str == 101 || *str == 69)
			*str = 51;
		else if (*str == 111 || *str == 79)
			*str = 48;
		else if (*str == 84 || *str == 116)
			*str = 55;
		else if (*str == 76 || *str == 108)
			*str = 49;
		str++;
	}
	return (first_address);
}
