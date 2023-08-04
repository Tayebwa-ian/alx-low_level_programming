#include <stdio.h>
/**
 *main -  program that prints number of arguments passed
 *@argc: number of arguments provided
 *@argv: the arguments
 *Return: 0
 */
int main(int argc, char **argv __attribute__ ((unused)))
{
	printf("%d\n", argc);
	return (0);
}
