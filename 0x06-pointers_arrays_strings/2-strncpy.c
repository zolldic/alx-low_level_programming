#include "main.h"

/**
* _strncpy - a function that copies a string.
* @dest: A pointer to the destination character array
*	where the copied characters will be stored.
* @src: A pointer to the source string
*	from which characters are copied.
* @n: The maximum number of characters to copy from src to dest.
* Return: (dest)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for (; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
