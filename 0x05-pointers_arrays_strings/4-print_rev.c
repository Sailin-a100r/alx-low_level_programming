#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints a string in reverse
 * to stdout followed by a new line
 *
 * @s : string to print
 */

void print_rev(char *s)
{
	int i;

	i = strlen(s);
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
