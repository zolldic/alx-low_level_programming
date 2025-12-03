#include "main.h"

/**
* clear_bit - sets a value of a bit to 0 at a given index
* @n: a pointer to a integer
* @index: the index of the bit to change
* Return: (1) if the bit change or (-1) on failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
