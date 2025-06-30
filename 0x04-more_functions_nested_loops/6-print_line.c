#include "main.h"

/**
* print_line - function that draws a straight line in the terminal
* @n: the number of times the character _ should be printed
*/

void print_line(int n)
{
	int x = 0;
	
	while (x < n)
	{
		_putchar('_');
		x++;
	}

	_putchar('\n');

}
