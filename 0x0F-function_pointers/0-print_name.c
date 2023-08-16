#include "function_pointers.h"
/**
 *print_name - print a name using function pointers
 *@name: the name to print
 *@f: pointer to a function
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
