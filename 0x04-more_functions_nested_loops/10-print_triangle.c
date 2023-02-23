#include "main.h"

/**
 * print_triangle - prints a triangle with given size, followed by a new line.
 *
 * @size: length of side
 *
 */

void print_triangle(int size)
{
	int i;
	int looper;
	int counter;

	looper = size;
	if (size > 0)
	{
		counter = 1;
		while (looper > 0)
		{
			i = size - counter;
			while (i > 0)
			{
				_putchar(' ');
				i--;
			}
			i = counter;
			while (i > 0)
			{
				_putchar('#');
				i--;
			}
			_putchar('\n');
			looper--;
			counter++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
