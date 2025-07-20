#include "main.h"

/**
* _strlen - a function that returns the length of a string.
* @s: string
* Return: the length of the string.
*/


int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}

	return (len);
}
