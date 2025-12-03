#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: an integer number
*/

void print_binary(unsigned long int n)
{
	int msb = 0;
	unsigned long int nmbr;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	nmbr = n;

	while (nmbr >>= 1)
		msb++;

	while (msb >= 0)
	{
		if (n & (1U << msb))
			_putchar('1');
		else
			_putchar('0');
		msb--;
	}
}
