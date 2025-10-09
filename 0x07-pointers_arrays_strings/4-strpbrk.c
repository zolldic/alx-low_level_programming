#include "main.h"
#include <stddef.h>

/**
* _strpbrk - a function that searches a string for
*	any of a set of bytes.
* @s: the string to search
* @accept: a string to match with @s
* Return: a pointer to the byte in (s) that matches one of the bytes in accept
*	or (NULL) if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *ptr = NULL;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
			if (s[x] == accept[y])
				ptr = &s[x];
		if (ptr)
			break;
	}
	return (ptr);
}
