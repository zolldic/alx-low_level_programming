#include "main.h"
#include <stdio.h>

/**
* times_table - function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int x, y;
	int math, first, second;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			math = (y * x);
			first = (math / 10) + '0';
			second = (math % 10) + '0';

			if (first == 48)
			{
				if (y != 0)
				{
					_putchar(' ');
				}
			}
			else
				_putchar(first);
			_putchar(second);

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
