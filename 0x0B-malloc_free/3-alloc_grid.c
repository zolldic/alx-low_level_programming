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

	array = (int **) malloc(sizeof(int *) * width);

	if (!array)
		return (NULL);
	for (x = 0; x < width; x++)
	{
		array[x] = (int *) malloc(sizeof(int *) * height);
		if (!array[x])
			return (NULL);

		for (y = 0; y < height; y++)
			array[x][y] = 0;
	}
	return (array);
}
