#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Function to return a pointer to a 2D array.
 * @width: Number of columns
 * @heigth: Number of flies
 * Return : pointer.
 */
int **alloc_grid(int width, int height)
{
	int i, j, row, column;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(height * sizeof(int *));
	if (p == 0)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == 0)
		{
			for (j = 0; j <= i, j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
			p[row][column] = 0;
	}
	return (p);
}
