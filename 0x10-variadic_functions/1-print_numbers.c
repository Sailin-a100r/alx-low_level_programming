#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints the list of given numbers
 *
 * @separator: format of number separator
 * @n: number of integers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, num;
	va_list args;

	va_start(args, n);
	num = n;
	for (i = 0; i < num; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i != (num - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
