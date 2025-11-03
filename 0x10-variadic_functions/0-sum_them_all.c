#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that calculate
 *	the sum of all its parameters
 * @n: integer
 * Return: the sum of the integers passed to the function
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (x = 0; x < n; x++)
		sum += va_arg(args, int);

	return (sum);
}
