#include "main.h"

/**
 * print_chessboard - function that prints a chessboard
 *
 * @a: pointer to first element
 */

void print_chessboard(char (*a)[8])
{
	int i, j, k;
	int *b;

	b = a;
	j = 0;
	k = 0;
	for (i = 0; i < 64; i++)
	{
		_putchar((*b)[j]);
		if (i % 8 == 0)
		{
			j++;
			k = 0;
		}
		else
		{
			k++;
		}
		b = b + k;
	}	
}
