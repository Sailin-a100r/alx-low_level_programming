#include "main.h"

/**
 * reverse_array - function that reverses the contents of array of integers.
 *
 * @a: array to reverse
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int copy[50];

	j = n;
	for (i = 0; i < n; i++)
	{
		j--;
		copy[j] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = copy[i];
	}
}
