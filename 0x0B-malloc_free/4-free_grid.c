#include <stdlib.h>

/**
* free_grid - a function that frees a 2 dimensional
* @grid: a 2D array
* @height: rows in the 2D array
*/

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
