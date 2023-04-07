#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 *
 * @n: pointer to the number in which the bit exists
 * @index: index of the bit to set
 *
 * Return: 1 success, -1 error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
