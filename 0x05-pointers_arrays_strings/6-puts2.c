#include "main.h"
#include <string.h>
/**
 * puts2 - function that prints every other character in a string
 * starting with the first character
 * to stdout followed by a new line
 *
 * @str : string to print
 */

void puts2(char *str)
{
	int i;
	int con;

	con = strlen(str);
	i = 0;
	while (con > i)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
