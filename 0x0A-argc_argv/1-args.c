#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc : number of arguments passed in the command line
 * @argv : pointer array of string
 * Returns : always 0
 * int : it is the return type of main
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
