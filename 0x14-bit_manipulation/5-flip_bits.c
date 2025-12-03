#include "main.h"

/**
* flip_bits - returns the number of bits
*	need to flip to get from number n to number m
* @n: first number
* @m: second number
* Return: number of bits need to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new;
	int count = 0;

	new = n ^ m;

	while (new != 0)
	{
		if ((new & 1) == 1)
			count++;
		new >>= 1;
	}
	return (count);
}
