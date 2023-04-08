#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: the name of the file
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, result;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	result = write(fd, text_content, strlen(text_content));
	close(fd);
	if (result == -1)
		return (-1);
	return (1);
}
