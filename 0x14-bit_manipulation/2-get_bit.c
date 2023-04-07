#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * 
 * @n: number to get the bit of index
 * @index: index to get the bit
 *
 * Return: the value of the bit at the index or -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (!n)
		return (-1);

	value = n & (1 << index);
	if (value == 0)
	{
		return (0);
	}
	else if (value > 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
