#include "main.h"

/**
* factorial - a function that returns the factorial of a given number.
* @n: number to calculate its factorial
* Return: (int) the factorial of the given number or (-1)
*/


int factorial(int n)
{
	int res;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	res = n * factorial(n - 1);

	return (res);

}
