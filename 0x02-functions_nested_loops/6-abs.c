/**
 * _abs - find absolute value of a number
 *
 * @n: the number to find absolute value for
 *
 * Return: the absolute value
 */
int _abs(int n)
{
int value;
if (n < 0)
{
value = n * -1;
return (value);
}
value = n;
return (value);
}
