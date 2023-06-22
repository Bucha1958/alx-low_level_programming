#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - the function
 * @width: The first parameter
 * @height: The second parameter
 *
 * Return: return the grid
 */

int **alloc_grid(int width, int height) {
    if (width <= 0 || height <= 0) {
        return NULL;
    }

    int **grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL) {
        return NULL;
    }

    for (int i = 0; i < height; i++) {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL) {
            // Free previously allocated memory
            for (int j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }

        // Initialize elements to 0
        for (int j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid;
}
