#include "main.h"

/**
* print_square -  function that prints a square
* @size: the size of the square
*/

void print_square(int size)
{
	int y, x = 0;


	if (size <= 0)
		_putchar('\n');

	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			_putchar('#');
			y++;
		}
		_putchar('\n');
		x++;
	}
}
