#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function tht searches for the first instance
 * of an integer in an array
 *
 * @array: searching pool
 * @size: number of elements in the array
 * @cmp: function to be used to compare values
 *
 * Return: index of the first element for which
 * the cmp function does not return 0
 * -1 on failure or unvalid input.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		int i, index;

		i = 0;
		while (i < size)
		{
			index = cmp(array[i]);
			if (index != 0)
				return (i);
			i++;
		}
	}
	else
	{
		return (-1);
	}
	return (-1);
}
