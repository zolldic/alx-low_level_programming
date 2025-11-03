#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - a function that prints numbers
* @separator: a string to be printed between numbers
* @n: the number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list arguments;

	if (!separator)
		separator = "";
	if (n == 0)
		return;

	va_start(arguments, n);

	for (x = 0; x < n; x++)
		x < (n - 1) ?
			printf("%d%s", va_arg(arguments, int), separator) :
			printf("%d\n", va_arg(arguments, int));

	va_end(arguments);
}
