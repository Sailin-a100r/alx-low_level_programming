#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for program that prints min change for
 * an amount of cents
 *
 * @argc: number of command line argumnets
 * @argv: array of command line arguments
 *
 * Return: 0 success, 1 for Error
 */

int main(int argc, char *argv[])
{
	int change, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		change = atoi(argv[1]);
		count = 0;
		if (change <= 0)
		{
			printf("0\n");
			return (0);
		}
		while (change >= 25)
		{
			change -= 25;
			count++;
		}
		while (change >= 10)
		{
			change -= 10;
			count++;
		}
		while (change >= 5)
		{
			change -= 5;
			count++;
		}
		while (change >= 2)
		{
			change -= 2;
			count++;
		}
		while (change >= 1)
		{
			change -= 1;
			count++;
		}
		printf("%d\n", count);
		return (0);
	}
}
