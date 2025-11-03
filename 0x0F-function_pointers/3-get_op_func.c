#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
* get_op_func - a function that selects the correct function
*	to perform the operation asked by the user
* @s: the operator passed as argument to the program
* Return: a pointer to the function that corresponds
*	to the operator given as a parameter
*	or (NULL) on failure
*/

int (*get_op_func(char *s))(int a,  int b)
{
	int i;

	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
