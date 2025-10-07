#include "main.h"
#include "stdio.h"

/**
* _strncpy - a function that copies a string.
* @dest: the destenation string
* @src: the src string
* @n: bytes to be copied for the src
*/

char *_strncpy(char *dest, char *src, int n)
{
	/*
	 * buffer overflow
	 * if the src lenght < n, fill the remaning bytes with '\0'
	 */

	int x, src_len = 0;

	while (src[src_len] != '\0')
		src_len++;

	for (x = 0; x < n; x++)
	{
		if (x > src_len)
			break;
		dest[x] = src[x];
	}

	for (x = 0; dest[x] != '\0'; x++)
		dest[src_len + x] = '\0';

	return (dest);
}
