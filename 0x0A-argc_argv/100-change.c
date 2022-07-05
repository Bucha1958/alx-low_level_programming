#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - The entry functions
 * @argv : vector argument
 * @argc : number of size coins
 * Return : Always 0
 */
int main(int argc, char *argv[])
{
	int amount, coins = 0;

	if (argc == 2)
	{
		amount = atoi(argv[argc-1]);

		if (amount > 0)
		{
			for (; amount >= 25; coins++)
			{
				amount -= 25;
			}
			for (; amount >= 10; coins++)
			{
				amount -= 10;
			}
			for (; amount >= 5; coins++)
			{
				amount -= 5;
			}
			for (; amount >= 2; coins++)
			{
				amount -= 2;
			}
			for (; amount >= 1; coins++)
			{
				amount -= 1;
			}
		}
		printf("%d\n", coins);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
