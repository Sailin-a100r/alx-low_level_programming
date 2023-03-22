#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that performs a certain function
 *on all elements of a given array
 *
 * @array: array of elements
 * @size: number of elements to perform the function on
 * @action: pointer to function to call on each element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{

		int i, limit;

		limit = size;
		i = 0;
		while (i < limit)
		{
			action(array[i]);
			i++;
		}
	}
}
