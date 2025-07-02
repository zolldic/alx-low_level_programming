#include "main.h"

/**
* print_triangle - function that prints a triangle
* @size: size of the traingle
*/

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}


	x = 0;
	while (x < size)
	{
		for (y = 0; y < (size - x) - 1; y++)
			_putchar(' ');

		for (z = 0; z < (size - y); z++)
			_putchar('#');

		_putchar('\n');
		x++;
	}
}

