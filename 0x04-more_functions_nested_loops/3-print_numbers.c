#include "main.h"

/**
 * print_numbers - printd the nums from 0 to 9, followed by \n
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
