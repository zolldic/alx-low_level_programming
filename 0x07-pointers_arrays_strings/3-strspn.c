#include "main.h"

/**
* _strspn - a function that gets the length of a prefix substring.
* @s: the string to search.
* @accept: the character set to match in the @s
* Return: the number of bytes in the initial segment of @s
*/

unsigned int _strspn(char *s, char *accept)
{
	int x, y, count = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ' ||
			s[x] == ',' ||
			s[x] == '\t' ||
			s[x] == '\n' ||
			s[x] == '.')
			break;

		for (y = 0; accept[y] != '\0'; y++)
			if (accept[y] == s[x])
				count++;
	}

	return (count);
}
