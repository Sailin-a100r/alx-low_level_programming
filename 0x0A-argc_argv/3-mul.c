#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to multibly two numbers
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0 success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j;

	i = atoi(&*argv[1]);
	j = atoi(&*argv[2]);
	if (argc == 3)
	{
		printf("%d\n", i * j);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
