#include "main.h"

/**
 * main - program that copies the content of a file to another file
 *
 * @argc: number of comand line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	int fdf, fdt, rres, wres;
	char buffer[1024];

	rres = 1024;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdf = open(argv[1], O_RDONLY);
	fdt = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (rres > 0)
	{
		rres = read(fdf, &buffer, 1024);
		if (check_read_error(fdf, rres, argv[2]))
			exit(98);
		fdt = open(argv[2], O_WRONLY | O_APPEND);
		wres = write(fdt, &buffer, rres);
		if (check_write_error(fdt, wres, argv[1]))
			exit(99);
	}
	rres = close(fdf);
	if (rres == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdf);
		exit(100);
	}
	wres = close(fdt);
	if (wres == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdt);
		exit(100);
	}
	return (0);
}

/**
 * check_read_error - function that checks for errors when reading from a file
 *
 * @fd: file descriptor of file to read from
 * @rres: the result of the read call from the file
 * @filename: name of the file to read from
 *
 * Return: 1 if there is an error, 0 on success
 */

int check_read_error(int fd, int rres, char *filename)
{
	if (fd == -1 || rres == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		return (1);
	}
	return (0);
}

/**
 * check_write_error - function that checks for errors when writing to a file
 *
 * @fd: file descriptor of file to read from
 * @wres: the result of the write call to the file
 * @filename: name of the file to read from
 *
 * Return: 1 if there is a error, 0 on success
 */
int check_write_error(int fd, int wres, char *filename)
{
	if (fd == -1 || wres == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		return (1);
	}
	return (0);
}
