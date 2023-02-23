#include "main.h"

/**
 * more_numbers - print the nums from 0 to 14, 10 times
 * followed by \n
 *
 */

void more_numbers(void)
{
	int i;
	int n;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			n = j / 10;
			if (n == 1)
			{
				_putchar('1');
			}
			else
			{
				_putchar('0' + j % 10);
			}
		}
		_putchar('\n');
	}
}
