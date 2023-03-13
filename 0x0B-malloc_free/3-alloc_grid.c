#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of ints.
 *
 * @width: size of inner array.
 * @height: size of outer array.
 *
 * Return: a pointer to the array of arrays, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **grid, h, w;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	h = 0;
	while (h < height)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for (;h >= 0; h--)
				free(grid[h]);
			free(grid);
			return (NULL);
		}
		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
