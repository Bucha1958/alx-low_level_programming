#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc : number of arguments passed in the command line
 * @argv : pointer array of string
 * Returns : always 0
 *
 */
int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%d\n", count);
		count++;
	}
	return (0);
}
