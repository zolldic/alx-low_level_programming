#include "main.h"

/**
* string_toupper - a function that changes all
*	lowercase letters of a string to uppercase.
* @str: a string to convert to uppercase
* Return: (str) converted to upppercase
*/

char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		if (str[x] >= 97 && str[x] <= 122)
			str[x] -= 32;

	return (str);
}
