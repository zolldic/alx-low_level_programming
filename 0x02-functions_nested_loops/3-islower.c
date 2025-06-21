#include "main.h"

/**
* _islower - function that checks for lowercase character.
* @c: character to check if its lowercase
* Return: always (1) if lowercase otherwise (0)
*/

int _islower(int c)
{
	_putchar(c);
	if ((c < 97) || (c > 122))
		return (0);

	return (1);
}
