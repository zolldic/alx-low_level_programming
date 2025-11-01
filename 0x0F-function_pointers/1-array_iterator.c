#include "function_pointers.h"
/**
* array_iterator - executes a function given as
*	a parameter on each element of an array
* @array: the array
* @size: the size of the array
* @action: a pointer to the function that will be used
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (!array || !action)
		return;

	for (x = 0; x < size; x++)
		(*action)(array[x]);
}
