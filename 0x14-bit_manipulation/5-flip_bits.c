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
	unsigned long int mask, i, bit, place;
	unsigned int num;

	mask = n ^ m;
	place = bit = 0;
	for (i = 0; i < 63; i++)
	{
		place++;
		bit = (1 << i);
		if (mask < bit )
			break;
	}

	num = 0;
	for (i = 0; i <= place; i++)
	{
		bit = mask & (1 << i);
		if (bit != 0)
			num++;
	}
	return (num);
}
