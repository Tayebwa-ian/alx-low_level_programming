#include "3-calc.h"
/**
 *main - performs simple operations of math
 *@arg: name of the file
 *@argc: number of arguments passed
 *@args: pointer to array of arguments
 *Return: result or error
 */
int main(int argc, char* args[])
{
	int result, a, b, c;

	a = atoi(args[1]);
	c = atoi(args[2]);
	b = atoi(args[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(args[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((c == '/' || c == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(args[2])(a, b);
	printf("%d\n", result);
	return (0);
}
