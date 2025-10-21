#include "main.h"

/**
* _pow_recursion - a function that returns
*	the value of x raised to the power of y.
* @x: the first number
* @y: the second number
* Return: (int) the result of
*	x raised to the power y or (-1) if y < 0
*/


int _pow_recursion(int x, int y)
{
	int res = 1;

	if (y < 0)
		return (-1);

	if (y != 0)
		res *= x * _pow_recursion(x, y - 1);

	return (res);
}
