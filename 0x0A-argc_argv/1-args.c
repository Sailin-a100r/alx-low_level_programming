#include <stdio.h>

/**
 * main - Entry function to print the number of arguments passed to it
 *
 * @argc: number of command line arguments
 * @argv: array of strings representing command line arguments
 *
 * Return: Always 0 success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc);
	return (0);
}
