#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * contador - Function to iterate num of arguments.
 * @ac: Argc of the command line
 * @av: Array of strings of the arguments in the command line
 * Return : Tam.
 */
int contador(int ac, char **av)
{
	int i;
	int b;
	int tam = 0;

	for (i = 0; i < ac; i++)
	{
		for (b = 0; av[i][b]; b++)
			tam++;
		tam++;
	}
	tam++;
	return (tam);
}
/**
 * argstostr - Concatenates the strings and assign them into an array
 * @ac : Number of arguments in the command lines
 * @av: Array of strings of arguments in the command line
 * Return : Array
 */
char *argstostr(int ac, char **av)
{
	char *array;
	int i;
	int b;
	int j = 0;
	int tam = contador(ac, av);

	if (ac == 0 || av == NULL)
		return (NULL);
	array = malloc(sizeof(char) * tam);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (b = 0; av[i][b] != '\0'; b++)
		{
			array[j] = av[i][b];
			j++;
		}
		array[j] = '\n';
		j++;
	}
	array[j] = '\0';
	return (array);
}
