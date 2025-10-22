#include <stdio.h>
#include <stdlib.h>

/**
* main - program that multiplies two numbers.
* @argc: the number of arguments passed to the program
* @argv: an array of strings contain the names of the arguments passed
* Return: Always (0) on success otherwise return (1)
*/

int main(int argc, char **argv)
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
