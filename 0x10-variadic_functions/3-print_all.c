#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - function that prints the list of given inputs
 *
 * @format: list of types of passed arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, num;

	num = strlen(format);

	va_start(args, format);
	

	va_end(args);
}
