#include <stdlib.h>

/**
* malloc_checked - a function that allocates memory using malloc
* @b: size of the memory allocation
* Return: a pointer to the newly allocated memory or 98 on failure
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(void *) * (b));

	if (!ptr)
		exit(98);

	return (ptr);
}
