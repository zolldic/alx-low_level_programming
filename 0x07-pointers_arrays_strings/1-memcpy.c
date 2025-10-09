#include "main.h"

/**
* _memcpy - a function that copies memory area.
* @dest: destension memory area.
* @src: source memory area
* @n: the amount of bytes memcpy should copy
* Return: a pointer to (dest)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
