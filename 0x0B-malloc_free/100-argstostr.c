#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments
 * of your program.
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int length, totalLen, i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]);
	}
	totalLen = length * sizeof(char) + ac + 1;
	string = malloc(totalLen);
	if (string == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			string[k] = av[i][j];
			j++;
			k++;
		}
		string[k] = '\n';
		k++;
	}
	string[k] = '\0';
	return (string);
}

