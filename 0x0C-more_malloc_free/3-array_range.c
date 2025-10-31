#include <stdlib.h>
/**
* array_range - creates an array of integers contain
*	all the values from @min to @max
* @min: first number
* @max: last number
* Return: pointer to the newly created array or NUL on failure
*/

int *array_range(int min, int max)
{
	int *ptr;
	int x;

	if (min > max)
		return (NULL);

	ptr = (int *) malloc(sizeof(int *) * max);
	if (!ptr)
		return (NULL);
	
	x = 0;
	while (min <= max)
	{
		ptr[x] = min++;
		x++;
	}
	return (ptr);

}
