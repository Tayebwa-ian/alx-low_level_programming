/**
 *rot13 - encode
 *@str: the string
 *Return: address to string
 */
char *rot13(char *str)
{
	int i, j;
	char *first_address = str;
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dig[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*str != '\0')
	{
		j = 0;
		i = 0;
		while (ch[i] != '\0')
		{
			if (ch[i] == *str)
			{
				*str = dig[j];
				break;
			}
			i++;
			j++;
		}
		str++;
	}
	return (first_address);
}
