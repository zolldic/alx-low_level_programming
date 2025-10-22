#include <stdio.h>

/**
* main - a program that prints its name
* @argc: the number of arguments passed to the program
* @argv: an array of string containing the arguments passed to the program
* Return: Always (0).
*/

int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}

