#include "main.h"
#include <string.h>
/**
 * puts_half - function that prints half of a string, followed by \n.
 *
 * @str : string to cut in two
 */

void puts_half(char *str)
{
	int n;
	int i;
	int j;

	n = strlen(str) / 2;
	i = strlen(str) - n;
	j = strlen(str);
	while (i != j)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
