#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
* create_file - creates a file
* @filename: name of the file to create
* @text_content: string to write to the file
* Return: (1) on success or (-1) on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0400 | 0200);
	if (!fd)
		return (-1);

	if (text_content)
	{
		len = strlen(text_content);
		write(fd, text_content, len);
	}
		return (1);
}
