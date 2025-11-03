#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
* print_all - a function that prints anything
* @format: a list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	int x, y;

	va_list arguments;
	list_t specifiers[4] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	if (!format)
		return;

	va_start(arguments, format);

	x = 0;
	while (format[x] != '\0')
	{
		y = 0;
		while (y < 4)
		{
			if (specifiers[y].name == format[x])
				specifiers[y].f(arguments);
			y++;
		}
		x++;
	}
	putchar('\n');
	va_end(arguments);
}

/**
* print_char - function that print a character
* @args: arguments list
*/
void print_char (va_list args)
{
	printf("%c ", va_arg(args, int));
}

/**
* print_int - function that print a integer
* @args: arguments list
*/
void print_int (va_list args)
{
	printf("%d ", va_arg(args, int));
}

/**
* print_float - function that print a float
* @args: arguments list
*/
void print_float (va_list args)
{
	printf("%f ", va_arg(args, double));
}

/**
* print_string - function that print a string
* @args: arguments list
*/
void print_string(va_list args)
{
	if (!args)
		printf("(nil)");
	else
		printf("%s", va_arg(args, char *));
}
