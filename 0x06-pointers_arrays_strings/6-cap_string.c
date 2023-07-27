/**
 *cap_string - change letter to uppercase
 *@str: the string
 *Return: address to string
 */
char *cap_string(char *str)
{
	char *first_address = str;
	int ch, letter;

	while (*str != '\0')
	{
		letter = *str > 96 || *str > 123;
		ch = (*str == ' ' || *str == '.') || (*str == 9 || *str == 10);

		if ((str == first_address) && letter)
		{
			*str = *str - 32;
		}
		else if (ch && (*(str + 1) > 96 || *(str + 1) > 123))
		{
			*(str + 1) = *(str + 1) - 32;
		}
		else if (*str == '\t')
			*str = ' ';
		str++;
	}
	return (first_address);
}
