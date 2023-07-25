/**
 *_strcpy - copy a string
 *@src: string varable to copy from
 *@dest: string varable to copy to
 *Return: Address of copies string
 */
char *_strcpy(char *dest, char *src)
{
char *dest_first = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest_first);
}
