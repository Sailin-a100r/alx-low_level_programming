#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: array of arrays
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	long d1, d2;
	int i;
	int *j;

	d1 = *a;
	j = a;
	for (i = 0; i < size - 1; i++)
	{
		j = j + size + 1;
		d1 = d1 + *j;
	}
	d2 = *(a + size - 1);
	j = a + size - 1;
	for (i = 0; i < size - 1; i++)
	{
		j = j + size - 1;
		d2 = d2 + *j;
	}
	printf("%ld, %ld\n", d1, d2);
}
