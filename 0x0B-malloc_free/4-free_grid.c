#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees ta 2 dimensional grid
 *
 * @grid: pointer to 2 dimensional grid
 * @height: number of inner arrays
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
