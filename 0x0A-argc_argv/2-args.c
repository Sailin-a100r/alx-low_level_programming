#include <stdio.h>

/**
 * main - Entry function to print the name of arguments passed to it
 *
 * @argc: number of command line arguments
 * @argv: array of strings representing command line arguments
 *
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
