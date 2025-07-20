#include "main.h"

/**
* print_rev - a function that prints a string, in reverse
* @s: string to print in reverse
*/

void print_rev(char *s)
{

	int len = 0;

	while (s[len] != '\0')
		len++;

	len = len - 1;
	for (; len >= 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
