#include "main.h"

/**
 * jack_bauer - print every second of the day
 *
 */

void jack_bauer(void)
{
	int t1;
	int t2;

	t1 = 0;
	while (t1 < 24)
	{
		t2 = 0;
		while (t2 < 60)
		{
			_putchar((t1 / 10) + '0');
			_putchar((t1 % 10) + '0');
			_putchar(':');
			_putchar((t2 / 10) + '0');
			_putchar((t2 % 10) + '0');
			_putchar('\n');
			t2 ++;
		}
		t1++;
	}
}
