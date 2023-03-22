#include "function_pointers.h"
#include <stdio.h>
#include <string.h>

/**
 * print_name - function that prints a name
 *
 * @name: name to print
 * @f: pointer to a unction to format the name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		f(name);
	}
}
