#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* main - Entry point
* @ac: number of arguments passed to the program
* @av: array of strings contain the arguments passed to the program
* Return: Always (0) on success
*/

int main(int ac, char **av)
{
	int src, dist;
	int r_count;

	char *buffer;

	if (ac < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(av[1], O_RDONLY);
	if (access(av[1], F_OK | R_OK) == -1)
	{

		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	dist = open(av[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (dist == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	buffer = (char *) malloc(sizeof(char) * 1024);
	if (!buffer)
		exit(-1);

	while (1)
	{
		r_count = read(src, buffer, 1024);
		write(dist, buffer, r_count);
		if (r_count == 0)
			break;
	}

	if (close(src) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	if (close(dist) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dist);
		exit(100);
	}

	return (0);
}


