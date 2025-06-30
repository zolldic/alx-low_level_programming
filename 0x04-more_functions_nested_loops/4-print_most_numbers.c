#include "main.h"

/**
* print_most_numbers - function that prints the numbers, from 0 to 9
*  and skips 2 and 4.
*/

void print_most_numbers(void)
{
	char c = '0';
	
	while (c <= '9')
	{
		if ((c != '2') && (c != '4'))
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
