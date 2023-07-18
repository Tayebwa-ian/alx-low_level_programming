/**
11;rgb:0000/0000/0000* _islower - checks if character is in lower case
 *
 * @c: an integer character the function takes
 * Return: 0 (Success) or 1 (Failure)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
