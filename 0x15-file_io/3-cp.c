#include <asm-generic/errno-base.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* print_error - centerlize funciton to handle errors
* @code: integer error code
* @arg: erorr message argument
*/

void print_error(int code, char *arg)
{
	(void) arg;

	if (code == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");

	if (code == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
	if (code == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);

	exit(code);
}

/**
* main - Entry point
* @ac: number of arguments passed to the program
* @av: array of strings contain the arguments passed to the program
* Return: Always (0) on success
*/


int main(int ac, char **av)
{
	int src, dist;
	ssize_t r_count, w_count;
	char buffer[1024];

	if (ac != 3)
		print_error(97, NULL);

	src = open(av[1], O_RDONLY);
	if (src == -1)
		print_error(98, av[1]);

	dist = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (dist == -1)
		print_error(99, av[2]);

	buffer = (char *) malloc(sizeof(char) * 1024);
	if (!buffer)
		exit(-1);

	while (1)
	{
		r_count = read(src, buffer, 1024);
		if (r_count == 1024)
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
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	return (0);
}


