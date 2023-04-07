#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: first number to change from
 * @m: second number to change to
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int mask, i;
	unsigned int num;
	unsigned long int filter;

	num = 0;
	filter  = n ^ m;
	for (i = 0; i <= 63; i++)
	{
		mask = filter & (1 << i);
		if (mask != 0)
			num++;
	}
	return (num >> 1);
}
