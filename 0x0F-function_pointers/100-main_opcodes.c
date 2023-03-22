#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcode
 * of its main function
 *
 * @argc : number of arguments
 * @argv: array of arguments
 *
 * Return: 0 Alwaya
 */

int main(int argc, char *argv[])
{
	int i, num_of_bytes;
	char *opcode_array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_of_bytes = atoi(argv[1]);
	opcode_array = (char *)main;
	if (num_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	if (num_of_bytes == 0)
	{
		return (0);
	}

	i = 0;
	while (i < num_of_bytes)
	{
		printf("%02hhx", opcode_array[i]);
		i++;
		if (i != num_of_bytes)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
