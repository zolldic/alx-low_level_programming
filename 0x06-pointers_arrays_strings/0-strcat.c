#include "main.h"

/**
* _strcat - function that concatenates two strings.
* @dest: string
* @src: string
* Return: a pointer to the resulting string dest
*/


char *_strcat(char *dest, char *src)
{
	int idx, dest_len;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		dest_len++;

	for (idx = 0; src[idx] != '\0'; idx++)
		dest[dest_len++] = src[idx];

	dest[idx + dest_len] = '\0';

	return (dest);
}
