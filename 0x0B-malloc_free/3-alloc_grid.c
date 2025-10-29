#include <stdlib.h>

/**
* alloc_grid - a function that returns a pointer
*	to a 2 dimensional array of integers
* @width: width of the grid
* @height: height of the grid
* Return: a pointer to a 2D array or NULL on failure
*/

int **alloc_grid(int width, int height)
{
	int x, y;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);
	if (!array)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		array[x] = (int *) malloc(width * sizeof(int));
		if (!array[x])
		{
			free(array[x]);
			free(array);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			array[x][y] = 0;
	return (array);
}
