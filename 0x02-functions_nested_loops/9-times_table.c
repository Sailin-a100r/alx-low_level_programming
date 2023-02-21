#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int n;
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				if (n / 10 == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((n / 10) + '0');
				}
				_putchar((n % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
