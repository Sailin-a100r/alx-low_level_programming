#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space of memory with a copy of the string given
 *
 * @str: string to copy
 *
 * Return: pointer to the copied string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *copy;
	int length, i;

	if (str == NULL)
		return (NULL);
	length = strlen(str);
	copy = malloc(length * sizeof(char) + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < length)
		{
			copy[i] = str[i];
			i++;
		}
		return (copy);
	}
}
