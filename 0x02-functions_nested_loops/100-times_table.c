#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: the number to get its times table
 */

void print_times_table(int n)
{
	int r;
	int tenth;
	int i;
	int j;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			r = i * j;
			if (j == 0)
			{
				_putchar('0');
				if (j != n)
					_putchar(',');
			}
			else
			{
				_putchar(' ');
				if (r / 100 == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((r / 100) + '0');
				}
				if (r / 10 == 0)
				{
					_putchar(' ');
				}
				else
				{
					tenth = (r % 100) / 10;
					_putchar(tenth  + '0');
				}
				_putchar((r % 10) + '0');
				if (j != n)
				{
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
