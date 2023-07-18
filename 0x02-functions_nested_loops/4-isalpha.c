/**
 * _isalpha - checks for any characters
 *
 *@c: The characeter to be checked
 *
 * Return: 1 (Success) 0 (Failure)
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
