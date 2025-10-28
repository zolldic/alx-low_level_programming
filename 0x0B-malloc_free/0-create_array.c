#include "main.h"
#include <stdlib.h>

/**
* create_array - a function that creates an array of chars,
*	and initializes it with a specific char
* @size: size of the array
* @c: character to initialize the array with
* Return: pointer to the newly initialized array
*	or NULL on failure
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char *) * size);
	
	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = c;

	return (array);
}
