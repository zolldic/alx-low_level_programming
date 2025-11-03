#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - a function that prints strings
* @separator: the string to be printed between strings
* @n: the number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	char *string;

	va_start(args, n);

	if (!separator)
		separator = "";

	if (n == 0)
	{
		putchar('\n');
		return;
	}

	for (x = 0; x < n; x++)
	{
		string = va_arg(args, char *);
		if (!string)
			string = "(nil)";

		if (x < (n - 1))
			printf("%s%s", string,  separator);
		else
			printf("%s", string);
	}
	putchar('\n');
	va_end(args);
}
