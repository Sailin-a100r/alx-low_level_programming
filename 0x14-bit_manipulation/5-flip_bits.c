#include "main.h"

/**
 * flib_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: first number to change from
 * @m: second number to change to
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num, i;
	unsigned long int filter;

	num = 0;
	filter  = n ^ m;

	for (i = 0; i <= 63; i++)
	{
		if ((filter & (1 << i)) != 0)
			num++;
	}
	return (num >> 1);
}
