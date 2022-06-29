#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc : number of arguments passed in the command line
 * @argv : pointer array of string
 * Returns : always 0
 *
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
