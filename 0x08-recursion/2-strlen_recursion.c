#include "main.h"

/**
* _strlen_recursion - a function that returns the length of a string.
* @s: the string
* Return: length (len) of a string.
*/

int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
		len = _strlen_recursion(s + 1) + 1;
	else
		return (0);
	return (len);
}
