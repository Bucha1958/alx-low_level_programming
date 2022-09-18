#include <stdio.h>
#include <stdlib.h>
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
	char *copy;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	
	}
	i++;
	copy = malloc(sizeof(char) * i);
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}
