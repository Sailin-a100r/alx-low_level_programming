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
	char *string, *sep;

	num = strlen(format);

	va_start(args, format);
	i = 0;
	if (format)
	{
		while (i < num)
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					string = va_arg(args, char *);
					/*
					if(string == NULL)
					{
						string = "(nil)";
					}
					*/
					string = (string == NULL) ? "(nil)" : string;
					printf("%s", string);
					break;
				default:
					i++;
					continue;
			}
			i++;
			sep = (i == num) ? "" : ", ";
			printf("%s", sep);
		}
	}
	printf("\n");

	va_end(args);
}
