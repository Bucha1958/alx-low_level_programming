#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * alloc_grid - Function to return a pointer to a 2D array.
 * @width: Number of columns
 * @heigth: Number of flies
 * Return : pointer.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int b;

	array = malloc(sizeof(int *) * height);
	if (array == NULL || height == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(wedth * sizeof(int));
		if (width == 0)
			return (NULL);
		else if (array[i] == NULL)
		{
			for (i = 0; i < width; i++)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			array[i][b] = 0;
	}
	return (array);
}
