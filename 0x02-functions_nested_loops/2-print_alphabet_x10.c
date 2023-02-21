#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 */

void print_alphabet(void)
{
	for (int times = 0; times < 10; times++)
	{
		for (int i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
