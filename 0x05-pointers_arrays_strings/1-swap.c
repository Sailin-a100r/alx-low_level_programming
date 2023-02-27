#include "main.h"

/**
 * swap_int - swaps the value of two ints
 *
 * @a : pointer to first int
 * @b : pointer to second int
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
