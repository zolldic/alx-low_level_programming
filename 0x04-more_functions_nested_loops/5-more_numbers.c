#include "main.h"

/**
* more_numbers - function that prints 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int	m, n = 0;

	while (n < 10)
	{

		m = 0;
		while (m < 15)
		{
			if ((m / 10) != 0)
				_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			m++;
		}

		_putchar('\n');
		n++;
	}
}
