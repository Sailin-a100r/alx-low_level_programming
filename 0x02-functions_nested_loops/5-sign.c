#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: input to be checked
 * Return: 1 (n is positive), 0 (n is zero), -1 (n is negative)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
