#include <stdlib.h>

/**
* _calloc - a function that allocates memory for an array
* @nmemb: the number of element in the array
* @size: the size of the memory
* Return: a pointer to the allocated memory or NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(size * nmemb);
	if (!new)
		return (NULL);

	return (new);
}
