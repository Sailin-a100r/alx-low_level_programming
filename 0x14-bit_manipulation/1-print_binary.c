#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @n: number to convert
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit, i, place, limit;

	limit = sizeof(unsigned long int) * 8;
	if (!n)
		_putchar('0');
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	place = bit = 1;
	for (i = 0; i < limit; i++)
	{
		place++;
		bit = bit * 2;
		if (n < bit)
			break;
	}

	place--;
	while (place)
	{
		place--;
		i = ((n >> place) & 1) == 0 ? _putchar('0') : _putchar('1');
	}
}
