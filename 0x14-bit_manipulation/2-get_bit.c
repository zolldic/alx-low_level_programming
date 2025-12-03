#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: number to extract the bit at index from
* @index: index of the bit
* Return: the value of the bit at @index or (-1) on failure
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	bit	=  (n >> index) & 1;
	return (bit);
}
