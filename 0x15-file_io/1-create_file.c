#include "main.h"

/**
 * create_file - function that creates a file.
 *
 * @filename: the name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int result;
	ssize_t fd;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "\0";

	fd = open(filename, O_RDWR | O_CREAT | O_APPEND);
	if (fd == -1)
		return (-1);

	result = write(fd, text_content, strlen(text_content));
	close(fd);
	if (result == -1)
		return (-1);

	return (1);
}
