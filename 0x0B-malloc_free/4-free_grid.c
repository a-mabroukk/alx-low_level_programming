#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function
 *
 * @grid: double pointer
 *
 * @height: height of a grid
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		while (h--)
		{
			free(grid[h]);
			free(grid);
		}
	}
}
