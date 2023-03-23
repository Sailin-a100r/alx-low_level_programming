#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - function that prints the list of given strings
 *
 * @separator: format of strings separator
 * @n: number of strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i, num;
	va_list args;
	char *string;

	va_start(args, n);
	num = n;
	for (i = 0; i < num; i++)
	{
		string = va_arg(args, char *);
		string = (string == NULL) ? "(nil)" : string;

		if (i == num - 1)
		{
			printf("%s\n", string);
			break;
		}
		printf("%s", string);
		if (separator)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
}
