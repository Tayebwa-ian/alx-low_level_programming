#include <stdio.h>
/**
 *main -  program that prints its name
 *@argc: number of arguments provided
 *@argv: the arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}