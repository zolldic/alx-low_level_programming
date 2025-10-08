#include "main.h"

/**
* cap_string - a function that capitalizes all words of a string.
* @str: a string to capitalize all its words
* Return: (str) capitalized
*/


char *cap_string(char *str)
{
	/*
	 * \n, ' ', \t, ',', ;, '.', !, ?, ", (, ), {, }
	 */
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			if (
				x == 0 ||
				str[x - 1] == '\n' ||
				str[x - 1] == 32 ||
				str[x - 1] == '.' ||
				str[x - 1] == '\t' ||
				str[x - 1] == ',' ||
				str[x - 1] == ';' ||
				str[x - 1] == '!' ||
				str[x - 1] == '?' ||
				str[x - 1] == '"' ||
				str[x - 1] == '(' ||
				str[x - 1] == ')' ||
				str[x - 1] == '{' ||
				str[x - 1] == '}'
			)
				str[x] -= 32;
		}
	}
	return (str);
}
