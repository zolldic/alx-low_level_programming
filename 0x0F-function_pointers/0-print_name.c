#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: a string represent the name to be printed
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
