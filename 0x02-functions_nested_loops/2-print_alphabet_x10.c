#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower case 10 times
 */

void print_alphabet_x10(void)
{
	int times;
	int i;

	for (times = 0; times < 10; times++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
