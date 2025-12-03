#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: path to the file
* @text_content: string to add at the end of the file
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w_count, len;

	fd = open(filename, O_APPEND | SEEK_END);
	if (!fd)
		return (-1);

	if (!text_content)
	{
		if (access(filename, F_OK | W_OK) == 0)
			return (1);
		else
			return (-1);
	}

	len = strlen(text_content);

	w_count = write(fd, text_content, len);
	if (w_count == -1)
		return (-1);

	close(fd);
	return (1);
}
