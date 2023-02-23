#include "main.h"

/**
 * print_number - prints a number
 *
 * @n: number to print
 *
 */

void print_number(int n)
{
	int i;
	int j;

	i = 10;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (i <= n)
	{
		i *= 10;
	}
	i /= 10;
	while (i > 0)
	{
		j = n / i;
		_putchar('0' + j);
		n = n - (j * i);
		i /= 10;
	}
}
