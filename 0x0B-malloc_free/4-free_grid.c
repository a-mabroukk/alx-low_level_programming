#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function
 *
 * @grid: double pointer
 *
 * @height: height of a grid
 *
 * Description: Write a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
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
