#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees a 2d array
 * @grid : Pointer to a 2d array
 * @height: Number of rows in the array
 * Return : Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
