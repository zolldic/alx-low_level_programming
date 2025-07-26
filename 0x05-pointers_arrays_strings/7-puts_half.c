#include "main.h"

/**
* puts_half - a function that prints half of a string
* @str: a string
*/

void puts_half(char *str)
{
	int len, i;

	while(str[len] != '\0')
		len++;

	if (len % 2 != 0)
		i = (len - 1) / 2;

	i = len / 2;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar(10);
}
