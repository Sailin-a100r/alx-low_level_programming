#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: integer to work on
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int v;

	if (n >= 0)
	{
		v = n % 10;
		_putchar(v + 48);
		return (v);
	}
	else
	{
		v = -1 * n % 10;
		_putchar(v + 48);
		return (v);
	}
}
