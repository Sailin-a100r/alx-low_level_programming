#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: the number to get its times table
 */

void print_times_table(int n)
{
	int r;
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
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				if (n / 100 == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((n / 100) + '0');
				}
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
