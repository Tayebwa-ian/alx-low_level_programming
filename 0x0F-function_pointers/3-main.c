#include "3-calc.h"
/**
 *main - performs simple operations of math
 *@argc: number of arguments passed
 *@args: pointer to array of arguments
 *Return: result or error
 */
int main(int argc, char *args[])
{
	int result, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(args[1]);
	b = atoi(args[3]);

	if (get_op_func(args[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(args[2], "/") == 0 || strcmp(args[2], "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(args[2])(a, b);
	printf("%d\n", result);
	return (0);
}
