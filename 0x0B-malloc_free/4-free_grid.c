#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees array
 * @grid: Array to be freed
 * @height: Height of the array
 *
 * Description: Frees the memory allocated for a 2D array.
 */
void free_grid(int **grid, int height)
{
	int nk;

	for (nk = 0; nk < height; nk++)
	{
		free(grid[nk]);
	}

	free(grid);
}
