#include "3-calc.h"

/**
* main - Entry point
* @argc: the number of arguments passed to the program
* @argv: an array contain the arguments names
* Return: Always (0) on success or different exit status on failure
*/

int main(int argc, char **argv)
{
	int x, y;
	char *operator;
	int result;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	operator = argv[2];

	if (
		((strcmp(operator, "/") == 0) ||
		(strcmp(operator, "%") == 0)) &&
		(y == 0)
	)
	{
		printf("Error\n");
		exit(100);
	}

	result = (*get_op_func)(operator)(x, y);
	printf("%d\n", result);

	return (0);
}
