#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n lements fo an array.
 * @a : Array of ints
 * @n : number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i != n)
	{
		printf("%i", a[i]);
		i++;
		if (i != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
