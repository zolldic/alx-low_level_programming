#include "main.h"
#include <stddef.h>
/**
* _strstr - a function that locates a substring
* @haystack: the string to seach for (needle) substring
* @needle: a substring to match
* Return: a pointer to the beginning of the located substring
*	or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{

	int x, y, len;
	char *ptr = NULL;

	for (x = 0; needle[x]; x++)
		len++;

	if (len == 0)
		return (haystack);

	for (x = 0; haystack[x] != '\0'; x++)
	{
		if (haystack[x] == needle[0])
		{
			for (y = 1; needle[y] != '\0'; y++)
				if (haystack[(x + y)] == needle[y])
				{
					ptr = &haystack[x];
				}
				else
				{
					ptr = NULL;
					break;
				}
		}
	}
	return (ptr);
}
