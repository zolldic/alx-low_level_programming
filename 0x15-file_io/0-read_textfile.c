#include "main.h"


/**
* read_textfile - reads a text file and prints
*	it to the POSIX standard output
* @filename: path to file
* @letters: number of letters to read from the file
* Return: the number of letters the program reads or (0) on failure
*
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

	int r_count, w_count;
	int fd;
	char *buffer;

	if (!filename)
		return (0);


	buffer = (char *) malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY, 0);
	if (fd == -1)
		return (0);

	r_count = read(fd, buffer, letters);
	if (r_count == -1)
		return (0);

	w_count = write(STDOUT_FILENO, buffer, r_count);
	if (w_count == -1)
		return (0);

	close(fd);
	free(buffer);
	return (w_count);
}
