/**
 *leet - encode
 *@str: the string
 *Return: address to string
 */
char *leet(char *str)
{
	int i, j;
	char *first_address = str;
	char ch[10] = "AaEeOoTtLl";
	char dig[10] = "4433007711";

	while (*str != '\0')
	{
		j = 0;
		i = 0;
		while (i < 10)
		{
			if (ch[i] == *str)
				*str = dig[j];
			i++;
			j++;
		}
		str++;
	}
	return (first_address);
}
