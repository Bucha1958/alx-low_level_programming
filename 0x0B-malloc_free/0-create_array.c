#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Function that create an array
 * @size : The amount of memory
 * @c : Character to initialize with
 * Return : A pointer to the array or NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (j == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		j[i] = c;
	}
	return (j);
}
