#include "main.h"

/**
 * _abs - computes the absolute value of integer
 *
 * @n: integer to work on
 * Return: the absolute value of integer
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
