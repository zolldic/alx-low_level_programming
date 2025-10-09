#include "main.h"
#include <stddef.h>

/**
* _strchr - a function that finds a character in a string
* @s: the string to locate the character at
* @c: character to be located in a @s
* Return: a pointer to the first occurrence of the character (c)
*	or NULL if the character is not found;
*/

char *_strchr(char *s, char c)
{
	char *ptr = NULL;
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			ptr = &s[x];
			break;
		}
	}

	return (ptr);
}
