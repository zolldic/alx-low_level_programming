#include "main.h"

/**
* _abs - function that computes the absolute value of an integer.
* @n: number
* Return: the number in absolute value
*/

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
