/**
 *string_toupper - change letter to uppercase
 *@str: the string
 *Return: address to string
 */
char *string_toupper(char *str)
{
	char *first_address = str;

	while (*str != '\0')
	{
		if (*str > 96 || *str > 123)
		{
			*str = *str - 32;
		}
		str++;
	}
	return (first_address);
}
