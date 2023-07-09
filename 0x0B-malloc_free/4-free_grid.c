#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d array
 * @grid: 2dimensional grid
 * @height: height of grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
