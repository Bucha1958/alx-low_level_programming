#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main -entry point
 * @argc : argument count
 * @argv : array of pointer to the string
 * Return : always 0
 *
 */
int main(int argc, char *argv[])
{
	int multi = 1;
	int i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
	       		multi = multi * atoi(argv[i]);
		}
		printf("%d\n", multi);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (-1);
	}
}
