#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of its parameters
 *
 * @n: number of parameters
 *
 * Return: sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum, num;
	va_list args;

	num = n;
	if (num == 0)
		return (0);
	va_start(args, n);
	sum = 0;
	for (i = 0; i < num; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
