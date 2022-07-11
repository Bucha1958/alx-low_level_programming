#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Function that returns a pointer to a duplicate string
 *
 * @str : copy of a string given as a parameter
 *
 * Return : it returns a pointer when successful
 */
char *_strdup(char *str)
{
	int i, c = 0;
	char *array;

	while (str[c] != '\0')
	{
		str[c];
		c++;
	}
	array = malloc(sizeof(char) * ()()s())
	if (str == NULL)
	{
		return (NULL);
	}
	if (array == strdup(str))
	{
		return (array);
	}
	else
	{
		return (NULL);
	}
	free(array);
}
