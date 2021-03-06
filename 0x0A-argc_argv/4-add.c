#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc : count argument
 * @argv : one dimensional array
 * Return : 0 when it fulfills the right code
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			k += atoi(argv[i]);
		}
	}
	if (argc == 1)
	{
		j = 0;
		printf("%d\n", j);
		return (0);
	}
	printf("%d\n", k);
	return (0);
}
