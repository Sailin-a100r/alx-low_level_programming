#include <stdio.h>

/**
 * main - Entry function to print name of program
 *
 * @argc: number of command line arguments
 * @argv: array of strings representing command line arguments
 *
 * Return: Always 0 success
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
