#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: lower value
 * @max: upper value
 *
 * Return: pointer to the created array, NULL on failure
 */

int *array_range(int min, int max)
{
	int *array, diff, i;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		diff = max - min + 1;
		array = malloc(diff * sizeof(int));
		if (array == NULL)
		{
			return (NULL);
		}
		i = 0;
		while (diff > i)
		{
			array[i] = min + i;
			i++;
		}
		return (array);
	}
}
