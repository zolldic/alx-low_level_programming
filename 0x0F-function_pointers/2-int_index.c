#include "function_pointers.h"

/**
* int_index - a function that searches for an integer
* @array: array of integers
* @size: size of the array
* @cmp: a pointer to the function to be used to compare values
* Return: the index of the first element or (-1) of no element matches
*	or size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x, element;

	if (size <= 0 || !cmp)
		return (-1);

	for (x = 0; x < size; x++)
	{
		element = (*cmp)(array[x]);
		if (element && element != 0)
			return (x);
	}
		return (x);
	return (-1);
}
