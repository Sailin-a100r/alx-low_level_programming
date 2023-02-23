#include "main.h"

/**
 * print_most_numbers - printd the nums from 0 to 9, not 2 and 4,
 * followed by \n
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
