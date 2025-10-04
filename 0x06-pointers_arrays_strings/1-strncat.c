#include "main.h"
#include <stdio.h>

/**
* *_strncat - function that concatenates two strings.
* @dest: string
* @src: string
* @n: n bytes from src
* Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int idx, dest_len = 0;

	for (idx = 0; dest[idx]; idx++)
		dest_len++;
	

	for (idx = 0; idx < n; idx++)
	{
		if (idx == sizeof(dest))
			break;

		dest[dest_len] = src[idx];
		dest_len++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
