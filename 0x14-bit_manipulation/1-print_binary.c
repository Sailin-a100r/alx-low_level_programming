#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @n: number to convert
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit, i, place;

	if (!n)
		_putchar('0');

	place = bit = 0;
	for (i = 0; i < 32; i++)
	{
		place++;
		/* printf("bit = %li, n = %li\n", bit, n); */
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
