#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 *
 * @filename: path of the file
 * @letters: size of buffer to read then print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t size;
	int fd;
	char *buffer;

	letters = letters ? letters : 1024;
	if (filename == NULL)
		return (0);
	/* open the file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	/* allocate space for buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	/* read the file */
	size = read(fd, buffer, letters);
	if (size == -1)
		return (0);

	/* write to stdout */
	size = write(STDOUT_FILENO, buffer, size);
	free(buffer);
	if (size == -1)
	{
		return (0);
	}
	else
	{
		return (size);
	}
}
