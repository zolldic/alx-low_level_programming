#include "main.h"

/**
* puts_half - a function that prints half of a string
* @str: a string
*/

void puts_half(char *str)
{
	int len = 0, i;

	while (str[len])
		len++;

	i = (len + 1) / 2;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar(10);
}
