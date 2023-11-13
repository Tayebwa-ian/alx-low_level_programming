#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *printf - This is written to overide the std printf
 *@format: the string to print
 *Return: 1 always
 */
int printf(const char *format, ...)
{
	/* this function overrides the intial printf function
	 *by using LD_PRELOAD environment variable to load this function
	 *in memory before the one found in the stdlib
	 */
	write(1, "9 8 10 24 75 - 9\n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
