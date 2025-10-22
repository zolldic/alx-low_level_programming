#include <stdio.h>
#include <stdlib.h>

/**
* main - program that adds two numbers.
* @argc: the number of arguments passed to the program
* @argv: an array of strings contain the names of the arguments passed
* Return: Always (0) on success otherwise return (1)
*/

int main(int argc, char **argv)
{
	int x, y, sum = 0;

	if (argc <= 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (x = 1; x < argc; x++)
		for (y = 0; argv[x][y] != '\0'; y++)
			if ((argv[x][y] > '9') || (argv[x][y] < '0'))
			{
				printf("Error\n");
				return (1);
			}

	for (x = 1; x < argc; x++)
		sum += atoi(argv[x]);

	printf("%d\n", sum);
	return (0);
}
