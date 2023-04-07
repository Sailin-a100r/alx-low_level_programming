#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @n: number to convert
 */

void print_binary(unsigned long int n)
{
	int i, place;
	unsigned long int bit;

	if (!n)
		_putchar('0');

	place = 0;
	for (i = 0; i < 64; i++)
	{
		place++;
		bit = (1 << i);
		if (n < bit)
			break;
	}
	place--;
	while (place)
	{
		place--;
		bit = n & (1 << place);
		if (bit == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
	}
}
