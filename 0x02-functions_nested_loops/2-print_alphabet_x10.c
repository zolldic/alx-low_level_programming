#include "main.h"

/**
* print_alphabet_x10 - function that prints 10 times the alphabet
*/

void print_alphabet_x10(void)
{
	int a;
	int counter = 0;

	while (counter < 10)
	{
		a = 97;
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		counter++;
		_putchar(10);
	}
}
