#include "lists.h"

/**
* _strlen - calculates the length of a string
* @s: pointer to the string
*
* Return: the length of the string
*/
int _strlen(const char *s)
{
	int x = 0;

	while (*s++)
		x++;

	return (x);
}
