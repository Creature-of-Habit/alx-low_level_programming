#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees 2D created by alloc_grid
 * @grid: address of the 2D grid
 * @height: height of he grid
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		free(grid);
	}
}
