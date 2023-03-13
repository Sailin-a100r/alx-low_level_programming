#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specefic char.
 *
 * @size: size of array
 * @c: character that fills the array
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *parray;
	int i;

	if (size == 0)
		return (NULL);
	parray = malloc(size * sizeof(char));
	if (parray == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < (int)size)
		{
			parray[i] = c;
			i++;
		}
		return (parray);
	}
}
