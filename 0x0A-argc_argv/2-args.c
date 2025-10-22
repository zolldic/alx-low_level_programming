#include <stdio.h>

/**
* main - program that prints all arguments it receives.
* @argc: the number of arguments passed to the program
* @argv: an array of strings contain the names of the arguments passed
* Return: Always (0)
*/

int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}
