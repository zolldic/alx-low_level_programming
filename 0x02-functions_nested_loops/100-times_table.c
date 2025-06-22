#include "main.h"
#include <stdio.h>

/**
* print_times_table - function that prints the n times table, starting with 0
* @a: number
*/

void print_times_table(int n)
{

	int x, y;
	int result, hundreds, tens, ones;

	if (n > 15 || n < 0)
		return;

	x = 0;
	while (x <= n)
	{
		y = 0;
		while (y <= n)
		{
			result = (x * y);

			hundreds = (result / 100) + '0';
			tens = ((result / 10) % 10) + '0';
			ones = (result % 10) + '0';

			if (y != 0)
			{
				if (hundreds == '0')
					_putchar(' ');
				else
					_putchar(hundreds);

				if (tens == '0' && hundreds == '0')
					_putchar(' ');
				else
					_putchar(tens);
			}

			_putchar(ones);

			if (y < n)
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
