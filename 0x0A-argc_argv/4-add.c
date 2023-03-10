#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to add positive numbers
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0 success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, result;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		result = 0;
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result+= atoi(argv[i]);
			}
		}
		printf("%d\n", result);
		return (0);
	} 
}
