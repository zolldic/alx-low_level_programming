#include "main.h"

/**
* _sqrt_recursion - a function that returns
*	the natural square root of a number.
* @n: the number to calcuate its square root
* Return: (int) the natural square root of a @n
*	or (-1) if n doesn't have square root
*/


int _sqrt_recursion(int n)
{
	int res = 1;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	res = _sqrt_recursion(n - 1);

	if (res == -1)
		return (-1);
	if ((res + 1) * (res + 1) == n)
		return (res + 1);
	if ((res + 1) * (res + 1) > n)
		return (res);

	return (-1);
}
