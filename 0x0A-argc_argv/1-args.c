#include <stdio.h>

/**
* main - program that prints the number of arguments passed into it
* @argc: the number of arguments passed to the program
* @argv: an array of strings contain the names of the arguments passed
* Return: Always (0)
*/

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", (argc - 1));
	return (0);
}
